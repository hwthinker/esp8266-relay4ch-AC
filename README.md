# Modul ESP8266 ESP-12f Relay 4 Channel 
![](https://github.com/hwthinker/esp8266-relay4ch-AC/blob/main/picture/1.png)

## Cara download dengan Serial USB biasa
![](https://github.com/hwthinker/esp8266-relay4ch-AC/blob/main/picture/3.png)
- Pasang serial USB TTL dengan ketentuan: 
   - TX Board-> RX USB Serial (Kabel Putih)
   - RX Board-> TX USB Serial (Kabel Hijau)
   - GND Board-> GND USB Serial (Kabel Hitam)
- Pastikan supply AC220V  dihubungkan 2 pin Terminal block(pin N dan L)
- jumper IO0 ke ground 
- klik (tekan dan lepas) tombol rst dan pastikan  IO0 masih di ground
- Lepas tombol IO0
- Download program dan tunggu sampai selesai
- klik tombol rst untuk run-program (langkah ini penting agar firmware baru dijalankan)
- ulang langkah awal bila melakukan download ulang lagi


## Cara download dengan Serial USB auto Download
![](https://github.com/hwthinker/esp8266-relay4ch-AC/blob/main/picture/2.png)
- Pasang serial USB TTL dengan ketentuan:
    - RX board -> RX USB Serial  
    - TX board-> TX USB Serial 
    - GND board -> GND USB Serial  
    - IO0 board -> IO# USB Serial 
    - EN board -> EN# USB Serial
- Pastikan supply AC220V  dihubungkan 2 pin Terminal block(pin N dan L)
- Download program dan tunggu sampai selesai

Warning:❗⚠️
Aktifkan daya untuk menghidupkan alat hanya dengan satu jenis sumber daya, bisa 9VDC, 5VDC, atau AC220V. Jangan menghubungkan beberapa sumber daya secara bersamaan, karena akan menyebabkan kerusakan pada alat.