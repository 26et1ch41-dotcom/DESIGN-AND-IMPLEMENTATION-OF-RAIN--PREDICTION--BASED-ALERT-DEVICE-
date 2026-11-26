RAIN ALERT SYSTEM An Arduino-Based Rain Detection and Alert Project Submitted by: _chirag shivhare and chirayu gupta Roll Number: BTET26O1041,BTET26O1042 Department : ELECTRONICS AND TELECOMMUNICATION Institution: MADHAV INSTITUTE OF TECHNOLOGY AND SCIENCE  Academic Year: 2026–2027 Page 1 RAIN ALERT SYSTEM — PROJECT REPORTDECLARATION I hereby declare that the project report titled “Rain Alert System” is prepared for academic purposes. The description in this report is based on the prototype components and project concept. Any circuit pin numbers, measured performance values, or test results should be confirmed against the final assembled hardware before submission. ACKNOWLEDGEMENT I express my sincere gratitude to my faculty members and institution for their guidance and support during the development of this project. I also thank my classmates and everyone who provided suggestions and assistance in completing the prototype. ABSTRACT The Rain Alert System is an electronic prototype designed to detect the presence of rain using a raindrop sensor module. An Arduino Uno acts as the main processing unit. When water droplets fall on the sensor plate, the sensor output changes and is read by the Arduino. The controller processes this input and provides an alert through a buzzer, while a 16×2 LCD can display the system status or an alert message. A regulated 5V supply is used for the low-voltage electronic modules. The project demonstrates a simple application of sensors, microcontrollers, display units, and audio indication for basic rain monitoring. Keywords: Rain detection, Arduino Uno, raindrop sensor, LCD, buzzer, embedded system. TABLE OF CONTENTS 1 Introduction 2 Objectives 3 Hardware Components 4 Block / Module Diagram 5 Working Principle 6 System Implementation 7 Applications 8 Advantages and Limitations 9 Future Scope 10 Conclusion 11 References Page 2 RAIN ALERT SYSTEM — PROJECT REPORT1. INTRODUCTION Rain is an important environmental factor that affects outdoor activities, agriculture, transportation, and the operation of electrical equipment. Detecting rainfall at an early stage can help people take timely precautions. The Rain Alert System uses a simple electronic sensing arrangement to identify water droplets and generate an alert. The prototype consists of a raindrop sensor module connected to an Arduino Uno. The Arduino reads the sensor signal and controls two output devices: a buzzer for an audible warning and a 16×2 LCD for displaying a status message. The system is intended as a basic demonstration model and can be extended with wireless communication or automatic control. 2. OBJECTIVES • To detect the presence of rain using a raindrop sensor module. • To process the sensor output using an Arduino Uno microcontroller. • To provide an audible alert through a buzzer. • To display rain-related status or alert information on a 16×2 LCD. • To demonstrate the integration of input, processing, output, and power-supply modules. 3. HARDWARE COMPONENTS Component Purpose Raindrop sensor plate and module Arduino Uno 16×2 LCD display Buzzer Detects water droplets on its sensing surface and provides an electrical output. Reads the sensor output, executes the program, and controls the display and buzzer. Displays system status or a rain alert message. Produces an audible warning when the programmed rain condition is detected. 5V voltage regulator / supply module Breadboard and jumper wires USB cable / power source Provides a regulated supply for compatible electronic modules. Allow circuit connections and prototyping without permanent soldering. Used for programming and/or supplying power during testing. Page 3 RAIN ALERT SYSTEM — PROJECT REPORT4. BLOCK / MODULE DIAGRAM The system is divided into four functional sections: input, processing, output, and power supply. The rain sensor is the input device. The Arduino Uno processes the sensor signal. The LCD and buzzer provide visual and audible outputs. The regulated supply powers the electronic circuit. Figure 1: Module diagram of the Rain Alert System. 5. WORKING PRINCIPLE 1. The raindrop sensor plate is exposed to the surrounding environment. 2. When water droplets touch the sensing tracks, the electrical characteristics of the sensor change. 3. The sensor module provides an output signal to an Arduino input pin. 4. The Arduino program reads the signal and compares it with the programmed detection condition or threshold. 5. When rain is detected, the Arduino activates the buzzer and updates the LCD with an alert message. 6. When the sensor becomes dry, the program can return the system to its normal status, depending on the logic implemented in the code. Note: The exact sensor output polarity and threshold depend on the particular sensor module and the Arduino code. These should be checked on the assembled prototype. 6. SYSTEM IMPLEMENTATION The components are mounted on a base board and interconnected using a breadboard and jumper wires. The raindrop sensor is connected to the Arduino as an input. The LCD and buzzer are connected as output devices. The Arduino is programmed through the USB interface. A regulated 5V source is used where required by the modules. The photograph supplied for this report shows an Arduino Uno, a raindrop sensor board, a blue sensor module, a buzzer, a 16×2 LCD, a breadboard, and USB/power connections. The photograph does not clearly establish Page 4 RAIN ALERT SYSTEM — PROJECT REPORTevery pin-to-pin connection; therefore, exact pin assignments are intentionally not stated here. Record the actual pin numbers from your final circuit and program before submission. Page 5 RAIN ALERT SYSTEM — PROJECT REPORT7. APPLICATIONS • Basic rain indication for homes, classrooms, and laboratories. • Demonstration of sensor-based monitoring in academic projects. • Rain-triggered warning systems for open areas or equipment. • A starting point for smart agriculture and weather-monitoring prototypes. 8. ADVANTAGES AND LIMITATIONS Advantages • Simple and low-cost prototype using commonly available components. • Provides both visual and audible indication. • Easy to understand, program, and extend. • Demonstrates practical use of a microcontroller and sensor. Limitations • The sensing plate may require cleaning and periodic inspection. • Water droplets, dirt, and corrosion can affect sensor response. • The basic prototype indicates wetness at the sensor location; it does not measure rainfall intensity accurately. • The system depends on a stable power supply and correct wiring. 9. FUTURE SCOPE The project can be improved by adding a Wi-Fi or GSM module to send notifications to a mobile phone. A data-logging unit can store rainfall events over time. A calibrated rain gauge can be added to estimate rainfall quantity or intensity. The system may also be integrated with automatic window closing, irrigation control, or protective covers, with suitable safety mechanisms. 10. CONCLUSION The Rain Alert System demonstrates how a raindrop sensor, Arduino Uno, LCD, and buzzer can be combined to detect water droplets and provide an alert. The sensor acts as the input, the Arduino performs the processing, and the LCD and buzzer communicate the result to the user. The project provides practical experience in basic embedded-system design and can serve as a foundation for more advanced weather-monitoring and automation applications. 11. REFERENCES 1. Arduino, Arduino Uno Rev3 — Official Documentation, https://docs.arduino.cc/hardware/uno-rev3/ 2. Arduino, Arduino Language Reference, https://docs.arduino.cc/language-reference/ Here is your complete Rain Alert System Final Report in text form. You can copy and paste it directly into Word.

FINAL PROJECT REPORT

RAIN ALERT SYSTEM

An Arduino-Based Rain Detection and Alert Project

Submitted by: ____________________

Roll Number: ____________________

Department / Class: ____________________

Institution: ____________________

Academic Year: 2026–2027

DECLARATION

I hereby declare that the project report titled “Rain Alert System” is prepared for academic purposes. The description in this report is based on the prototype components and project concept. Any circuit pin numbers, measured performance values, or test results should be confirmed against the final assembled hardware before submission.

ACKNOWLEDGEMENT

I express my sincere gratitude to my faculty members and institution for their guidance and support during the development of this project. I also thank my classmates and everyone who provided suggestions and assistance in completing the prototype.

ABSTRACT

The Rain Alert System is an electronic prototype designed to detect the presence of rain using a raindrop sensor module. An Arduino Uno acts as the main processing unit.

When water droplets fall on the sensor plate, the sensor output changes and is read by the Arduino. The controller processes this input and provides an alert through a buzzer, while a 16×2 LCD can display the system status or an alert message.

A regulated 5V supply is used for the low-voltage electronic modules.

The project demonstrates a simple application of sensors, microcontrollers, display units, and audio indication for basic rain monitoring.

Keywords: Rain detection, Arduino Uno, raindrop sensor, LCD, buzzer, embedded system.

1. INTRODUCTION

Rain is an important environmental factor that affects outdoor activities, agriculture, transportation, and the operation of electrical equipment. Detecting rainfall at an early stage can help people take timely precautions.

The Rain Alert System uses a simple electronic sensing arrangement to identify water droplets and generate an alert.

The prototype consists of a raindrop sensor module connected to an Arduino Uno. The Arduino reads the sensor signal and controls two output devices: a buzzer for an audible warning and a 16×2 LCD for displaying a status message.

The system is intended as a basic demonstration model and can be extended with wireless communication or automatic control.

2. OBJECTIVES

* To detect the presence of rain using a raindrop sensor module.
* To process the sensor output using an Arduino Uno microcontroller.
* To provide an audible alert through a buzzer.
* To display rain-related status or alert information on a 16×2 LCD.
* To demonstrate the integration of input, processing, output, and power-supply modules.

3. HARDWARE COMPONENTS

Component	Purpose
Raindrop sensor plate and module	Detects water droplets.
Arduino Uno	Processes sensor signals and controls outputs.
16×2 LCD display	Displays system status or alert messages.
Buzzer	Produces an audible warning.
5V voltage regulator	Provides regulated power.
Breadboard and jumper wires	Make circuit connections.
USB cable / power source	Programming and power supply.

4. BLOCK / MODULE DIAGRAM

The system is divided into four functional sections:

* Input Module: Rain sensor detects water droplets.
* Processing Module: Arduino Uno processes the sensor signal.
* Output Module: LCD displays messages and buzzer produces sound.
* Power Supply Module: Provides regulated 5V power.

The rain sensor is connected to the Arduino Uno. The Arduino processes the signal and sends output to the LCD and buzzer.

5. WORKING PRINCIPLE

* The raindrop sensor plate is exposed to the surrounding environment.
* When water droplets touch the sensing tracks, the electrical characteristics of the sensor change.
* The sensor module provides an output signal to an Arduino input pin.
* The Arduino program reads the signal and compares it with the programmed detection condition or threshold.
* When rain is detected, the Arduino activates the buzzer and updates the LCD with an alert message.
* When the sensor becomes dry, the program can return the system to its normal status, depending on the logic implemented in the code.

Note: The exact sensor output polarity and threshold depend on the particular sensor module and the Arduino code.

6. SYSTEM IMPLEMENTATION

The components are mounted on a base board and interconnected using a breadboard and jumper wires.

The raindrop sensor is connected to the Arduino as an input. The LCD and buzzer are connected as output devices.

The Arduino is programmed through the USB interface. A regulated 5V source is used where required by the modules.

The prototype consists of:

* Arduino Uno
* Raindrop sensor board
* Blue sensor module
* Buzzer
* 16×2 LCD
* Breadboard
* USB and power connections

Exact pin assignments should be recorded from the final circuit and program before submission.

7. APPLICATIONS

* Basic rain indication for homes, classrooms, and laboratories.
* Demonstration of sensor-based monitoring in academic projects.
* Rain-triggered warning systems for open areas or equipment.
* Smart agriculture and weather-monitoring prototypes.

8. ADVANTAGES AND LIMITATIONS

Advantages

* Simple and low-cost prototype.
* Provides both visual and audible indication.
* Easy to understand, program, and extend.
* Demonstrates practical use of a microcontroller and sensor.

Limitations

* The sensing plate may require cleaning and periodic inspection.
* Water droplets, dirt, and corrosion can affect sensor response.
* The basic prototype indicates wetness at the sensor location; it does not measure rainfall intensity accurately.
* The system depends on a stable power supply and correct wiring.

9. FUTURE SCOPE

The project can be improved by:

* Adding a Wi-Fi or GSM module to send notifications to a mobile phone.
* Adding a data-logging unit to store rainfall events.
* Adding a calibrated rain gauge to estimate rainfall quantity or intensity.
* Integrating automatic window closing.
* Integrating irrigation control or protective covers with suitable safety mechanisms.

10. CONCLUSION

The Rain Alert System demonstrates how a raindrop sensor, Arduino Uno, LCD, and buzzer can be combined to detect water droplets and provide an alert.

The sensor acts as the input, the Arduino performs the processing, and the LCD and buzzer communicate the result to the user.

The project provides practical experience in basic embedded-system design and can serve as a foundation for more advanced weather-monitoring and automation applications.

11. REFERENCES

* Arduino, Arduino Uno Rev3 – Official Documentation: https://docs.arduino.cc/hardware/uno-rev3/⁠￼
* Arduino, Arduino Language Reference: https://docs.arduino.cc/language-reference/⁠￼
* Datasheet / user documentation supplied with the raindrop sensor module and 16×2 LCD used in the prototype.

END OF REPORT3. Datasheet / user documentation supplied with the raindrop sensor module and 16×2 LCD used in the prototype. — END OF REPORT — Page 6 RAIN ALERT SYSTEM — PROJECT REPORT
