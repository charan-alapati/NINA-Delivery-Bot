# 🤖 NINA: The Delivery Bot - Nimble Intelligent Navigation Assistant

### 🧠 Overview
**NINA (Nimble Intelligent Navigation Assistant)** is an autonomous delivery robot developed as part of our final-year B.Tech project at **Parul University, 2024**.  
It leverages **artificial intelligence, computer vision, and robotics** to offer efficient, sustainable, and contactless last-mile delivery.

---

### 🚀 Objectives
- Develop a **self-navigating delivery robot** capable of operating in both indoor and outdoor environments.  
- Address delivery inefficiencies such as delays, human error, and environmental impact.  
- Implement **secure, GPS-enabled tracking** and package authentication systems.  
- Promote **green logistics** using battery-powered, low-emission delivery mechanisms.

---

### 🧩 Core Features
| Feature | Description |
|----------|--------------|
| **Self Navigation** | Uses GPS, sensors, and path planning algorithms for autonomous movement. |
| **Computer Vision** | Real-time object detection and lane tracking with OpenCV and AI models. |
| **Obstacle Avoidance** | Ultrasonic and camera-based sensors for safe maneuvering. |
| **Remote Monitoring** | Web dashboard for live tracking and system status. |
| **Security Protocols** | Encrypted data communication and package authentication via QR code. |
| **Battery Management** | Smart power monitoring and adaptive charging system. |

---

### ⚙️ System Design
NINA integrates multiple hardware and software layers for robust autonomous operation:

- **Microcontroller:** Arduino Nano (Master-Slave communication model)  
- **Modules:** ESP32 Camera, GPS module, Ultrasonic sensors, Motor drivers  
- **Software Stack:** Python, Arduino IDE, OpenCV, TensorFlow, FastAPI  
- **Communication:** Wi-Fi, FlySky remote control (Channels 3 & 4 for pan/tilt)

```plaintext
Camera → Image Processing (OpenCV) → Obstacle Detection
     ↓
Path Planning (Arduino) → Motor Drivers → Movement Control
     ↓
Data → FastAPI Backend → Remote Dashboard / GPS Tracking
