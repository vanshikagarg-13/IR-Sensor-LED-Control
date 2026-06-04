\# IR-Sensor-LED-Control



\# Project Overview



This project demonstrates a simple object detection system using an IR sensor and Arduino UNO. When an object comes near the IR sensor, the LED turns ON. When no object is detected, the LED remains OFF.



This project helped in understanding sensor interfacing, digital input/output, and conditional statements in Arduino programming.



\# Components Used



\* Arduino UNO

\* IR Sensor Module

\* LED

\* Jumper Wires

\* Breadboard (optional)

\* USB Cable





\# Circuit Connections



\## IR Sensor to Arduino UNO



| IR Sensor Pin | Arduino UNO Pin |

| ------------- | --------------- |

| VCC           | 5V              |

| GND           | GND             |

| OUT           | Digital Pin 7   |



\# LED to Arduino UNO



| LED Pin      | Arduino UNO Pin |

| ------------ | --------------- |

| Positive (+) | Digital Pin 9   |

| Negative (-) | GND             |





\# Working Principle



The IR sensor continuously checks for nearby objects.



\* When an object comes near the sensor, the sensor sends a signal to the Arduino.

\* The Arduino reads the sensor value through the input pin.

\* If an object is detected, the LED turns ON.

\* If no object is detected, the LED turns OFF.



The project uses conditional logic to control the LED based on the sensor input.





\# Results



The system successfully detects nearby objects using an IR sensor and controls the LED accordingly.



\* Object detected → LED ON

\* No object detected → LED OFF



\# Future Improvements



\* Add a buzzer for alert indication

\* Display object detection status on LCD

\* Add blinking LED patterns

\* Integrate with IoT for remote monitoring



\# Learning Outcomes



Through this project, I learned:



\* Basic Arduino programming

\* Sensor interfacing

\* Digital input and output concepts

\* Conditional logic implementation

\* Hardware connections and debugging



