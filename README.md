# taGAS (Technology-Assisted Gas Alarm System)

This repository contains the code and documentation for a capstone project named **taGAS** which an abbreviation of Technology-Assisted Gas Alarm System which is a gas leakage detector with SMS capabilities that mainly utilizes an Arduino UNO R3, MQ-4 gas sensor and GSM 800L EVB V2. The main purpose of this study is to be a sense of precaution to the user when LPG leak occurs. This provides the user a sense of safety and security regarding explosion and fires due to LPG leaks.

## Project Purpose
This project is specifically created to fulfill the requirements of **Practical Research 2 and Practical Research 3** by Group 3 of St. Clement on SY. 2024-2025 in **Immaculate Conception Polytechnic - Sta. Maria**.

## Features
- **Gas Detection** : Utilizes a gas sensor to detect harmful smoke levels.
- **LED Indicator** : Indicates when harmful smoke level is detected.
- **SMS Notification**: Sends instant SMS alerts to predefined phone numbers when smoke is detected.
- **Audio Signaling** : Alerts nearby users using a buzzer.
- **Continuous Alerting System** : The project alerts the user countinuously up to 120 seconds (2 mins) for reliability purposes. 
- **Scalable Design**: Can be integrated with other IoT systems for broader safety measures.

## Components
### Hardware
- 1x Gas sensor (MQ-4)
- 1x Arduino UNO R3 (Microcontroller)
- 1x GSM module (GSM 800L EVB V2)
- 1x GSM external antenna
- 1x Red LED
- 1x Green LED
- 1x Buzzer 
- 1x Jumper Wires
- 1x DC-DC Buck Converter LM2596
- 1x  12V 1A Power supply
- 1x 3D Printed Casing


## Getting Started

### Setup
1. Connect all of the components as indicated in the [code](https://github.com/cornheep/taGAS/blob/main/LPG_DETECTOR_FV.ino). 
2. Upload the provided [code](https://github.com/cornheep/taGAS/blob/main/LPG_DETECTOR_FV.ino) using the Arduino IDE.
3. Test the system by simulating a gas leak.


## Usage
- Install the system in areas prone to gas leakage such as residential areas and power plants that utilizes LPG as an energy source.

## Repository Contents
- `Code`: Source code for the smoke detection and SMS notification system). [Gas Detector](https://github.com/cornheep/taGAS/blob/main/LPG_DETECTOR_FV.ino) will redirect you directly to the code.

## License
This project is licensed under the `MIT License`. See the [LICENSE](https://github.com/cornheep/taGAS/blob/main/LICENSE) for details.

---
