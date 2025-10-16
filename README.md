# 🤖 NINA: The Delivery Bot  
**Nimble Intelligent Navigation Assistant**

---

## 📘 Overview
**NINA (Nimble Intelligent Navigation Assistant)** is an **autonomous delivery robot** designed to transform the future of logistics.  
Developed as part of a final-year **B.Tech in Computer Science & Engineering (AI)** project at **Parul University (2024)**,  
NINA integrates **Artificial Intelligence, Computer Vision, Robotics, and IoT** to build a sustainable, contactless, and efficient last-mile delivery system.

---

## 🌍 Project Motivation
Modern cities face challenges in traditional delivery systems such as **traffic congestion**, **high operational costs**, and **environmental pollution**.  
NINA aims to address these by introducing a **smart, eco-friendly, and fully autonomous** delivery robot capable of navigating complex routes and ensuring secure, precise deliveries.

---

## 🎯 Objectives
- Develop a **self-navigating robot** for efficient last-mile delivery.  
- Implement **real-time object detection** and **path optimization** using AI.  
- Ensure **secure package delivery** through authentication and GPS tracking.  
- Promote **environmental sustainability** via zero-emission operation.  
- Integrate a **mobile/web dashboard** for remote monitoring and analytics.

---

## ⚙️ System Architecture

NINA’s architecture combines hardware and software subsystems to enable autonomous operation.

```plaintext
Camera Feed → Image Processing (OpenCV) → Obstacle Detection
       ↓
Path Planning (Arduino) → Motor Drivers → Movement Control
       ↓
Data → FastAPI Backend → Web Dashboard / GPS Tracking

```

### 🧩 Key Components
| Category | Description |
|-----------|--------------|
| **Microcontroller** | Arduino Nano (Master–Slave model) |
| **Camera Module** | ESP32-CAM for live video streaming |
| **Navigation** | Ultrasonic sensors + GPS Module |
| **Connectivity** | Wi-Fi and FlySky remote for manual override |
| **Software Stack** | Python, Arduino IDE, OpenCV, TensorFlow, FastAPI |
| **Cloud Integration** | AWS IoT (planned for monitoring) |

---

## 🚀 Core Features

| Feature | Description |
|----------|-------------|
| 🧭 **Self Navigation** | Autonomous movement using GPS, sensors, and AI algorithms |
| 👁️ **Computer Vision** | Object recognition and lane tracking via OpenCV and ML models |
| 🛑 **Obstacle Avoidance** | Sensor fusion for real-time detection and maneuvering |
| 🔋 **Battery Management** | Smart energy monitoring and adaptive charging |
| 🛰️ **GPS Tracking** | Real-time tracking and geofencing alerts |
| 🔒 **Security Protocols** | QR-based authentication and encrypted communication |
| 📱 **User Interface** | Mobile app for package tracking and confirmation |
| 🌐 **Remote Monitoring** | Web dashboard for admin control and analytics |

---

## 🧠 Methodology

### Master–Slave Architecture
Two Arduino boards function in a **master–slave configuration**, enabling distributed control.

- **Master Arduino:** Handles navigation, data flow, and communication.  
- **Slave Arduino:** Manages motor control, sensors, and low-level operations.

### Communication Protocol
- Serial communication ensures reliable data exchange.  
- Structured command–response format enables real-time feedback and coordination.

### Error Handling & Testing
- Emergency stop implemented via a relay module.  
- Field-tested under controlled environments.  
- Evaluated on navigation accuracy, response time, and obstacle avoidance rate.

---

## 🧩 System Features in Detail

### 🧭 Self Navigation
- Path tracking using GPS + ultrasonic sensors  
- Dynamic obstacle avoidance  
- Route optimization based on distance and energy metrics  

### 👁️ Computer Vision
- Real-time object detection and classification  
- Lane and boundary detection for safe movement  

### 📦 Package Management
- Secure compartment with QR-based access  
- Tamper-proof locking mechanism  
- Optional temperature control module  

### 🛰️ Remote Monitoring
- Real-time web dashboard for system status and location tracking  
- Route history visualization and low-battery alerts  

---

## 🧰 Hardware Used

| Component | Function |
|------------|-----------|
| **Arduino Nano (x2)** | Master–Slave controller system |
| **ESP32-CAM** | Image capture and video streaming |
| **Ultrasonic Sensors (HC-SR04)** | Obstacle and distance detection |
| **Motor Driver (L298N)** | Controls wheel motors |
| **GPS Module (NEO-6M)** | Real-time location tracking |
| **Relay Module** | Emergency stop mechanism |
| **FlySky Controller** | Manual control for testing |
| **Li-ion Battery** | Power supply for motors and controllers |

---

## 💻 Software Components
- **Programming Languages:** Python, C++  
- **Frameworks/Libraries:** OpenCV, TensorFlow, FastAPI, Arduino IDE  
- **Tools:** Git, AWS IoT Core (planned), Google Maps API  
- **Database (Planned):** Firebase or MongoDB for delivery data storage  

---

## 🧪 Implementation Highlights
- Created complete **Software Requirement Specification (SRS)** for hardware and interfaces.  
- Developed **UML diagrams** for system design and interactions.  
- Implemented Arduino-based motor and navigation control.  
- Integrated **ESP32-CAM streaming** with computer vision processing.  
- Successfully tested prototype with **GPS-based route logging**.

---

## 📚 Research Basis
The project references **20+ international research papers** on:
- Autonomous last-mile delivery systems  
- AI-based path planning in robotics  
- Computer vision and obstacle detection  
- Sustainable logistics systems  

A detailed literature review and methodology are provided in the **final project report**.

---

## 🔮 Future Enhancements
- Integration with **ROS (Robot Operating System)** for modular navigation.  
- **Reinforcement Learning** for adaptive decision-making.  
- **Cloud dashboard** for real-time route analytics.  
- **Solar charging module** for off-grid autonomy.  
- **Voice-command and IoT control** for smart interactions.  

---

## 📜 Reference
A. Devi Sri Charan, A. Nasruddin, CH. Devi Vivek, and D. Anisha.  
*NINA: The Delivery Bot*  
B.Tech Final Project Report, Department of Computer Science & Engineering,  
Parul University, Vadodara, India, October 2024.

---

## 👨‍💻 Team

| Name | Role | ID |
|------|------|----|
| A. Devi Sri Charan | System Architecture, AI Integration | 210303124164 |
| A. Nasruddin | Hardware Implementation | 210303124187 |
| CH. Devi Vivek | Communication & Control Systems | 210304124500 |
| D. Anisha | Testing & Documentation | 210303124345 |

### 🎓 Supervised By
**Prof. Divyeshkumar Hariyani**  
Assistant Professor, Department of Computer Science & Engineering  
Parul University, Vadodara, Gujarat

---

## 🏫 Institution
**Parul Institute of Engineering and Technology**  
Parul University, Vadodara, Gujarat, India  
**Academic Year:** 2023–2024

---

## 📫 Contact
**Author:** Charan Alapati  
📧 [charan.alapati.06@gmail.com](mailto:charan.alapati.06@gmail.com)

---

⭐ *“Delivering intelligence to every doorstep.”*
