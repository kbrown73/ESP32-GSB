#!/usr/bin/env python3
import os
import re
from datetime import datetime

INPUT_FILE = "GSB_Settings.txt"
DEFAULTS_FILE = "Default_Settings.txt"
OUTPUT_FILE = "GSB_Defaults.h"

def parse_settings(text):
    """Parse $<id>=<value> lines and optional trailing comments."""
    settings = {}
    for line in text.splitlines():
        line = line.strip()
        if not line or line.startswith(("#", ";")):
            continue

        # Split off inline comments: support ';' or '//' as comment marker
        comment = ""
        if ";" in line:
            line, comment = line.split(";", 1)
        elif "//" in line:
            line, comment = line.split("//", 1)

        match = re.match(r"^\$(\d+)\s*=\s*(.*?)\s*$", line.strip())
        if match:
            sid, val = match.groups()
            settings[int(sid)] = {
                "id": int(sid),
                "val": val.strip(),
                "comment": comment.strip()
            }
    return settings

def load_settings():
    with open(INPUT_FILE, "r", encoding="utf-8") as f:
        gsb_settings = parse_settings(f.read())

    value_source = INPUT_FILE
    if (
        os.path.exists(DEFAULTS_FILE)
        and os.path.getmtime(DEFAULTS_FILE) > os.path.getmtime(INPUT_FILE)
    ):
        with open(DEFAULTS_FILE, "r", encoding="utf-8") as f:
            default_settings = parse_settings(f.read())

        for sid, default in default_settings.items():
            if sid in gsb_settings:
                gsb_settings[sid]["val"] = default["val"]
            else:
                gsb_settings[sid] = default
        value_source = DEFAULTS_FILE

    return sorted(gsb_settings.values(), key=lambda s: s["id"]), value_source

def is_number(value):
    return re.fullmatch(r"[+-]?(?:\d+(?:\.\d*)?|\.\d+)(?:[eE][+-]?\d+)?[fF]?", value) is not None

def format_value(value):
    if is_number(value):
        if any(marker in value.lower() for marker in (".", "e")) and not value.lower().endswith("f"):
            return f"{value}f"
        return value

    escaped = value.replace("\\", "\\\\").replace('"', '\\"')
    return f'"{escaped}"'

def generate_header(settings, value_source):
    lines = []
    lines.append("// ================================================================")
    lines.append("// GSB_Defaults.h")
    lines.append(f"// Auto-generated from {value_source}")
    if value_source != INPUT_FILE:
        lines.append(f"// Comments preserved from {INPUT_FILE}")
    lines.append(f"// Generated on {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
    lines.append("// ================================================================")
    lines.append("#pragma once\n")

    for s in settings:
        sid = s["id"]
        val = format_value(s["val"])
        comment = s["comment"]

        define = f"#define GRBL_DEFAULT_{sid:<4} {val}"
        if comment:
            define = f"#define GRBL_DEFAULT_{sid:<4} {val:<18} // {comment}"
        lines.append(define)

    lines.append("\n// End of auto-generated defaults")
    lines.append("// ================================================================")
    return "\n".join(lines) + "\n"

def main():
    settings, value_source = load_settings()
    header = generate_header(settings, value_source)

    with open(OUTPUT_FILE, "w", encoding="utf-8") as f:
        f.write(header)

    print(f"Generated {OUTPUT_FILE} with {len(settings)} settings from {value_source}.")

if __name__ == "__main__":
    main()
