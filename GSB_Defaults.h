// ================================================================
// GSB_Defaults.h
// Auto-generated from Default_Settings.txt
// Comments preserved from GSB_Settings.txt
// Generated on 2026-05-01 00:56:49
// ================================================================
#pragma once

#define GRBL_DEFAULT_0    5.0f               // Step pulse time (µs). Typical usable range ~0–255 µs (driver-dependent). Shorter = faster edge. Default: 5.0
#define GRBL_DEFAULT_1    255                // Stepper idle lock time (ms). 0–255; 255 = never disable steppers. Default: 25
#define GRBL_DEFAULT_2    0                  // Step pulse invert (bitmask). Bit per axis: X=1,Y=2,Z=4,A=8,B=16,C=32... Default: 0
#define GRBL_DEFAULT_3    3                  // Direction invert (bitmask). Same bit scheme as $2. Default: 0
#define GRBL_DEFAULT_4    7                  // Invert stepper enable (bitmask). Bit per motor output; 0 = normal, set bits to invert. Default: 7
#define GRBL_DEFAULT_5    7                  // Limit pins invert (bitmask). Bits per axis input; set to invert limit inputs. Default: 0
#define GRBL_DEFAULT_6    1                  // Probe input invert (boolean). 0 or 1. Default: 0
#define GRBL_DEFAULT_8    2                  // Ganged axes direction invert (bitmask). For dual motors (e.g., Y2 on Z), set bit for the ganged axis. Default: 0
#define GRBL_DEFAULT_9    1                  // Spindle PWM options (bitfield). Bit 0 enables PWM features; other bits driver/plugin-specific. Default: 1
#define GRBL_DEFAULT_10   511                // Status report mask (bitmask). Sum of bits to include fields; driver extends beyond classic GRBL. Default: 511
#define GRBL_DEFAULT_11   0.010f             // Junction deviation (mm). Positive float; typical 0.005–0.05 mm. Default: 0.010
#define GRBL_DEFAULT_12   0.002f             // Arc tolerance (mm). Positive float; smaller = more accurate arcs. Default: 0.002
#define GRBL_DEFAULT_13   0                  // Report inches (boolean). 0=mm, 1=inches. Default: 0
#define GRBL_DEFAULT_14   68                 // Control input invert (bitmask). Bits for Start/Hold/Reset/Door/Estop; set to invert sense. Default: 0
#define GRBL_DEFAULT_15   0                  // Coolant invert mask (bitmask). Bit 0=flood, bit 1=mist. Set to invert outputs. Default: 0
#define GRBL_DEFAULT_16   0                  // Spindle invert mask (bitmask). Bits for spindle enable/dir/other; board/driver dependent mapping. Default: 0
#define GRBL_DEFAULT_17   0                  // Control pull-up disable mask (bitmask). Disable pull-ups per control input if set. Default: 0
#define GRBL_DEFAULT_18   0                  // Limit pull-up disable mask (bitmask). Disable pull-ups per limit input if set. Default: 0
#define GRBL_DEFAULT_19   0                  // Probe pull-up disable (boolean). 0=use pull-up, 1=disable. Default: 0
#define GRBL_DEFAULT_20   1                  // Soft limits enable (boolean). 0/1. Default: 0
#define GRBL_DEFAULT_21   1                  // Hard limits enable (boolean). 0/1; requires wired limit switches. Default: 0
#define GRBL_DEFAULT_22   1                  // Homing enable / options (bitmask). In grblHAL this is a bitfield; include 1 to enable. Default: 0
#define GRBL_DEFAULT_23   3                  // Homing direction mask (bitmask). Axis bits set = home toward positive; clear = toward negative. Default: 0
#define GRBL_DEFAULT_24   300.0f             // Homing locate feed rate (mm/min). Positive float. Default: 25.0
#define GRBL_DEFAULT_25   1000.0f            // Homing seek rate (mm/min). Positive float. Default: 500.0
#define GRBL_DEFAULT_26   25                 // Homing debounce (ms). 0–255 ms typical. Default: 250
#define GRBL_DEFAULT_27   2.000f             // Homing pull-off (mm). Positive float. Default: 1.000
#define GRBL_DEFAULT_28   0.100f             // G73 retract distance (mm). Non-negative float. Default: 0.100
#define GRBL_DEFAULT_29   0.0f               // Step pulse delay (µs). 0–255 µs typical; adds delay before step edge. Default: 0.0
#define GRBL_DEFAULT_30   1000.000f          // Max spindle/laser value (RPM-equivalent or scale). Positive; used for S scaling. Default: 1000.000
#define GRBL_DEFAULT_31   0.000f             // Min spindle/laser value. 0 or positive. Default: 0.000
#define GRBL_DEFAULT_32   1                  // Spindle/laser mode (enum/bitfield). Classic: 0=spindle, 1=laser; grblHAL extends for clones. Default: 0
#define GRBL_DEFAULT_33   5000.0f            // PWM frequency (Hz). Typical laser 1–20 kHz; servo use ~50 Hz. Default: 5000.0
#define GRBL_DEFAULT_34   0.0f               // PWM off value (device units). Driver-dependent scaler (e.g., 0–255 or 0–1000). Default: 0.0
#define GRBL_DEFAULT_35   0.0f               // PWM min value (device units). Driver-dependent scaler. Default: 0.0
#define GRBL_DEFAULT_36   100.0f             // PWM max value (device units). Driver-dependent scaler. Default: 100.0
#define GRBL_DEFAULT_37   0                  // Steppers energize at power-up (boolean). 0/1. Default: 0
#define GRBL_DEFAULT_39   1                  // Enable legacy/printable realtime cmds (boolean). 0/1. Default: 1
#define GRBL_DEFAULT_40   0                  // Jog soft-limited (boolean). 0/1; respect soft limits during jog. Default: 0
#define GRBL_DEFAULT_41   0                  // Parking enable (0=off, 1=on, 2=on w/override). Default: 0
#define GRBL_DEFAULT_42   2                  // Parking axis (bitmask). Choose axis to park: X=1,Y=2,Z=4 etc. (here Y). Default: 2
#define GRBL_DEFAULT_43   2                  // Homing locate cycles (passes). Integer 1–3. Default: 1
#define GRBL_DEFAULT_44   2                  // Homing cycle 1 axes (bitmask). Z=4, X=1, Y=2; sum bits for simultaneous homing. Default: 4
#define GRBL_DEFAULT_45   1                  // Homing cycle 2 axes (bitmask). Here X. Default: 3
#define GRBL_DEFAULT_46   0                  // Homing cycle 3 axes (bitmask). 0 if unused. Default: 0
#define GRBL_DEFAULT_56   5.0f               // Parking pull-out increment (mm). Positive float. Default: 5.0
#define GRBL_DEFAULT_57   100.0f             // Parking pull-out rate (mm/min). Positive float. Default: 100.0
#define GRBL_DEFAULT_58   -5.0f              // Parking target (mm). Signed float. Default: -5.0
#define GRBL_DEFAULT_59   500.0f             // Parking fast rate (mm/min). Positive float. Default: 500.0
#define GRBL_DEFAULT_60   0                  // Restore overrides after parking (boolean). 0/1. Default: 0
#define GRBL_DEFAULT_62   0                  // Sleep enable (boolean). 0/1. Default: 0
#define GRBL_DEFAULT_63   3                  // Feed hold actions (bitmask). Defines what to stop on hold; sender/driver dependent. Default: 3
#define GRBL_DEFAULT_64   0                  // Force initialization alarm on startup (boolean). 0/1. Default: 0
#define GRBL_DEFAULT_65   0                  // Probing flags (bitmask). Bit 0 allows feed override during probing; other bits extend behavior. Default: 0
#define GRBL_DEFAULT_70   39                 // Network services (bitmask). Bits: 0=Telnet,1=WebSocket,2=HTTP,3=FTP,4=DNS,5=mDNS,6=SSDP,7=WebDAV. Default: 38
#define GRBL_DEFAULT_73   1                  // WiFi mode: 0=None, 1=STA, 2=AP, 3=AP+STA. Default: 1
#define GRBL_DEFAULT_74   "Bosburgh2G"       // WiFi STA SSID (string, ≤64 chars). Default: (empty)
#define GRBL_DEFAULT_75   "********"         // WiFi STA password (string, ≤32 chars). Blank = open (not recommended). Default: (empty)
#define GRBL_DEFAULT_100  100.00000f         // X steps/mm. Positive float. Default: 250.00000
#define GRBL_DEFAULT_101  100.00000f         // Y steps/mm. Positive float. Default: 250.00000
#define GRBL_DEFAULT_102  100.00000f         // Z steps/mm. Positive float. Default: 250.00000
#define GRBL_DEFAULT_110  20000.000f         // X max rate (mm/min). Positive float. Default: 500.000
#define GRBL_DEFAULT_111  18000.000f         // Y max rate (mm/min). Positive float. Default: 500.000
#define GRBL_DEFAULT_112  18000.000f         // Z max rate (mm/min). Positive float. Default: 500.000
#define GRBL_DEFAULT_120  4000.000f          // X acceleration (mm/s^2). Positive float. Default: 10.000
#define GRBL_DEFAULT_121  3200.000f          // Y acceleration (mm/s^2). Positive float. Default: 10.000
#define GRBL_DEFAULT_122  1400.000f          // Z acceleration (mm/s^2). Positive float. Default: 10.000
#define GRBL_DEFAULT_130  282.000f           // X travel (mm). Positive float; used by soft limits. Default: 200.000
#define GRBL_DEFAULT_131  463.000f           // Y travel (mm). Default: 200.000
#define GRBL_DEFAULT_132  550.000f           // Z travel (mm). Default: 200.000
#define GRBL_DEFAULT_320  "GSB"              // Hostname (iface #3) (string ≤32). Default: grblHAL
#define GRBL_DEFAULT_322  "192.168.5.1"      // IP address (iface #3). IPv4 text. Default: 192.168.5.1
#define GRBL_DEFAULT_323  "192.168.5.1"      // Gateway (iface #3). IPv4 text. Default: 192.168.5.1
#define GRBL_DEFAULT_324  "255.255.255.0"    // Netmask (iface #3). IPv4 text. Default: 255.255.255.0
#define GRBL_DEFAULT_325  23
#define GRBL_DEFAULT_326  80                 // HTTP port (iface #3). 1–65535. Default: 80
#define GRBL_DEFAULT_327  81                 // WebSocket port (iface #3). 1–65535. Default: 81
#define GRBL_DEFAULT_337  ""                 // WiFi AP BSSID (string). Optional; usually blank. Default: (empty)
#define GRBL_DEFAULT_341  0                  // Tool change mode. 0=Manual,1=Manual+TouchOff,2=Semi-auto,3=Auto touch-off @ G59.3. Default: 0
#define GRBL_DEFAULT_342  30.0f              // Tool-change probing distance (mm). Positive float. Default: 30.0
#define GRBL_DEFAULT_343  25.0f              // Tool-change locate feed (mm/min). Positive float. Default: 25.0
#define GRBL_DEFAULT_344  200.0f             // Tool-change search seek rate (mm/min). Positive float. Default: 200.0
#define GRBL_DEFAULT_345  200.0f             // Tool-change probe pull-off rate (mm/min). Positive float. Default: 200.0
#define GRBL_DEFAULT_346  1                  // Tool-change options (bitmask). Bit 0 typically = restore position after M6. Default: 1
#define GRBL_DEFAULT_370  0                  // Invert I/O port inputs (bitmask). Driver-specific mapping. Default: 0
#define GRBL_DEFAULT_372  0                  // Invert I/O port outputs (bitmask). Driver-specific mapping. Default: 0
#define GRBL_DEFAULT_384  0                  // Disable G92 persistence (boolean). 0=save/restore G92 offset, 1=do not persist. Default: 0
#define GRBL_DEFAULT_392  4.0f               // Door spindle-on delay (s). Wait after safety door before re-enabling spindle. Default: 4.0
#define GRBL_DEFAULT_393  1.0f               // Door coolant-on delay (s). Wait after safety door before re-enabling coolant. Default: 1.0
#define GRBL_DEFAULT_394  0.0f               // Spindle on delay (s). Delay after M3/M4 before motion resumes. Default: 0.0
#define GRBL_DEFAULT_396  30                 // WebUI timeout (minutes). Default: 30
#define GRBL_DEFAULT_397  0                  // WebUI auto-report interval (ms). 0=disabled. Default: 0
#define GRBL_DEFAULT_398  100                // Planner buffer blocks. Typical 16–256; larger = smoother but more memory. Default: 100
#define GRBL_DEFAULT_481  125                // Autoreport interval (ms). 0=disabled. Default: 0
#define GRBL_DEFAULT_484  1                  // Unlock after E‑Stop (boolean). 0/1. Default: 1
#define GRBL_DEFAULT_485  0                  // Enable tool persistence (boolean). 0/1. Default: 0
#define GRBL_DEFAULT_486  0                  // Offset lock (bitmask). Lock G54–G59 etc.; sender/driver dependent. Default: 0
#define GRBL_DEFAULT_539  0.0f               // Spindle off delay in s, range: 0.5 - 20. Default: 0
#define GRBL_DEFAULT_650  3                  // FS (filesystem) options (bitmask). Driver/plugin-specific (SD, LittleFS, WebDAV etc.). Default: 0
#define GRBL_DEFAULT_673  2.0f               // Coolant on delay (s). Delay before motion resumes after coolant enable. Default: 0.0
#define GRBL_DEFAULT_676  15                 // Reset actions (bitmask). What to clear at reset (overrides, offsets, etc.). Default: 15
#define GRBL_DEFAULT_680  0                  // Stepper Enable Delay (ms). Default: 0

// End of auto-generated defaults
// ================================================================
