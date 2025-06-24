#!/data/data/com.termux/files/usr/bin/bash
echo "[⚡️ ALPHA & OMEGA] RAFAELIA :: COMPILAÇÃO ZIPRAF ARM64"
gcc app/src/main/cpp/motor.c -o motor
chmod +x motor
echo "[✅] ZIPRAF ALPHA & OMEGA compilado! Execute com ./motor"
