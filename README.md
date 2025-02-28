# 🎮 MiniGameServer - ESP8266-Based Wi-Fi Game Server
![mageServer](https://github.com/user-attachments/assets/fb28438c-0354-411e-9fa8-d3a8b9843f64)


🚀 **MiniGameServer** is a **self-hosted mini-game server** built using an **ESP8266 microcontroller**. It allows users to connect via Wi-Fi and play games directly from a web browser. The entire setup is powered by **LiPo batteries** and managed with a **TP4056 charging module**.

## 🛠 Features
- 📡 **Wi-Fi Hotspot Mode** - Connect local host(192.168.4.1) and play without internet!
- 🎮 **Multiple Mini-Games** - Hosted on the ESP8266 with **LittleFS**.
- 🔋 **Battery Powered** - Runs on **dual 3.7V LiPo batteries**.
- 🔌 **Rechargeable Module** - Integrated **TP4056** battery management.
- 📂 **Web-Based Interface** - No app installation required!

---

## 📷 Screenshots
![Game Interface](https://github.com/user-attachments/assets/decd9dbf-8441-4c17-963d-291cc6f868f5)
![WI-FI connect](https://github.com/user-attachments/assets/9e73acd3-8f56-41d2-b6fb-75fbc36f3bc7)
![games](https://github.com/user-attachments/assets/d6046ffe-ef96-4f70-a6d4-9a4cfeb937e5)


---

## 🎥 Demo Video
<iframe src="https://www.linkedin.com/embed/feed/update/urn:li:ugcPost:7300866346345476096" height="900" width="504" frameborder="0" allowfullscreen="" title="Embedded post"></iframe>
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
