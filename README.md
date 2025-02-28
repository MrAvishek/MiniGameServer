# 🎮 MiniGameServer - ESP8266-Based Wi-Fi Game Server

🚀 **MiniGameServer** is a **self-hosted mini-game server** built using an **ESP8266 microcontroller**. It allows users to connect via Wi-Fi and play games directly from a web browser. The entire setup is powered by **LiPo batteries** and managed with a **TP4056 charging module**.

## 🛠 Features
- 📡 **Wi-Fi Hotspot Mode** - Connect and play without internet!
- 🎮 **Multiple Mini-Games** - Hosted on the ESP8266 with **LittleFS**.
- 🔋 **Battery Powered** - Runs on **dual 3.7V LiPo batteries**.
- 🔌 **Rechargeable Module** - Integrated **TP4056** battery management.
- 📂 **Web-Based Interface** - No app installation required!

---

## 📷 Screenshots
![Game Interface](screenshots/game-interface.png)
![Wi-Fi Connection](screenshots/wifi-connection.png)

> **📌 Note:** Add your screenshots inside a `screenshots/` folder in the project.

---

## 🎥 Demo Video
🎬 Watch the full project in action here:  
👉 **[YouTube Video](https://youtu.be/your-video-link-here)**

---

## ⚙️ Hardware Used
- **ESP8266 (NodeMCU)**
- **3D-printed custom case**
- **2x 3.7V LiPo Batteries**
- **Buck Converter (3.3V)**
- **TP4056 Battery Charging Module**

---

## 🏗 Project Setup (Run on ESP8266)
### 1️⃣ Install Dependencies
Ensure you have the following libraries installed in the **Arduino IDE**:
- `ESP8266WiFi.h`
- `ESP8266WebServer.h`
- `LittleFS.h`

### 2️⃣ Upload Filesystem (LittleFS)
Use the **ESP8266 LittleFS Data Upload Tool** to upload game files to flash memory.

### 3️⃣ Flash the Code
1. Connect your ESP8266 via USB.
2. Open `MiniGameServer.ino` in **Arduino IDE**.
3. Select the correct **Board** and **Port**.
4. Click **Upload**.

---

## 🌐 How to Connect & Play
1. Power on the **ESP8266 MiniGameServer**.
2. Connect to Wi-Fi **ESP8266-GameServer** (`password: 12345678`).
3. Open a browser and go to:  
