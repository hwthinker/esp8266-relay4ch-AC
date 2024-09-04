# Modul ESP8266 ESP-12f Relay 1 Channel 
![](https://github.com/hwthinker/esp8266-relay-1ch/blob/main/skematik.png)
## Cara download
- Pasang serial USB TTL dengan ketentuan RX -> TX USB Serial ; TX -> RX USB Serial; GND -> GND USB Serial
- pasang 5V ke VCC 5V USB serial
- pasang Jumper ke IO0 dan GND
- pasang USB serial ke komputer
- Tekan dan lepas tombo reset dengan jumper tetap terpasang ke IO0 dan GND
- Download program 
- lepas jumper
- tekan dan lepas tombol reset untuk run-program
- ulang langkah awal untuk download ulang
## cara push file di github 
- echo "# esp8266-relay-1ch" >> README.md 
- git init git add README.md 
- git commit -m "first commit" 
- git branch -M main 
- git remote add origin git@github.com:hwthinker/esp8266-relay-1ch.git 
- git push -u origin main 

### push an existing repository from the command line 
- git remote add origin git@github.com:hwthinker/esp8266-relay-1ch.git 
- git branch -M main git push -u origin main

### contoh markdown editor
- https://pandao.github.io/editor.md/en.html

test Vscode