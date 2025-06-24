#!/data/data/com.termux/files/usr/bin/bash
echo "[⚡️ ALPHA & OMEGA] COMPILAÇÃO ZIPRAF ARM64 :: ORIGINUM PULSE"
gcc app/src/main/cpp/motor.c -o motor
chmod +x motor
echo "[✅] ZIPRAF OMEGA FULL compilado! Execute com ./motor"
