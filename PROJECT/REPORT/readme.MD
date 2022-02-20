
# LEARNING REPORT SUMMARY


### PROBLEM STATEMENT

- Overflowing of street dustbin create the unhygienic environment and also prone to spreading diseases.

### EXISTING SYSTEM

- The existing garbage bins a manually opened and closed there is no indication for garbage level so the garbage is collected after it overflows. Because there is no sensors the garbage bin will always be opened.

### PROPOSSED SYSTEM
- In the proposed system the garbage bin is automated with various sensors and actuators to sense the level of bin and close the bin to avoid overflow. At the same time the bin only opens when a person come close to it. Remaining time the bin will be closed. The level of the bin is transmitted to the end user to identify the level. By this we can achieve the solution for the problem statement.
______________________
## AUTOMATED GARBAGE BIN SYSTEM

### INTRODUCTION

- Automated garbage system is a project proposed to solve the garbage overflow problem on streets.

- In order to overcome the problem this project is designed with sensors, actuators, GPIO’s, serial communication protocols, LED display and power supply unit.

- This setup works together and to automate the garbage bin and avoid the overflow of garbage on streets.
____________________
### APPLICATION 

- The door of the garbage bin will close automatically when it is filled

- The rain sensor senses the rain drops and close the garbage when it rains

- The dustbin doors will open automatically when a person come near the bin so that the door will be closed in the remaining time.

- This system will send the data through Bluetooth to the end system.

- It enables the remote monitoring.
______________________________________
### FEATURES

- Over flow of garbage is controlled along the streets

- Easily monitored

- Environment hygiene is improved
______________________
## V MODEL APPROACH
![enter image description here](https://www.linkpicture.com/q/USE-CASE.png)
______________________
## REQUIREMENTS
#### High level requirements:
__________________________________________________________
| Id | Description | Status |
| ------ | ------ | ------ |
| HLR1|SYSTEM SHOULD CLOSE THE BIN WHEN IT IS FULL|IMPLEMENTED||
| HLR2|SYSTEM SHOULD CLOSE THE CLOSE WHEN IT RAINS|IMPLEMENTED|
| HLR3|SYSTEM SHOULD OPEN THE BIN WHEN THE PERSON COME NEAR TO IT|IMPLEMENTED|
| HLR4|SYSTEM SHOULD SEND THE MESSAGE TO THE END USER WHEN BIN IS FULL |IMPLEMENTED|
| HLR5|SYSTEM SHOULD DISPLAY THE MESSAGE|IMPLEMENTED|

#### Low level requirements:
__________________________________________________________
| Id | Description | Status |
| ------ | ------ | ------ |
| LLR1|ULTRASONIC SENSOR SHOULD SENCE THE GARBAGE LEVEL AND SERVO MOTOR SHOULD CLOSE THE DOOR |IMPLEMENTED|
| LLR2|RAIN SENSOR SHOULD SENSE THE WATER DROPS AND SERVO MOTOR SHOULD CLOSE THE DOOR|IMPLEMENTED|
| LLR3|IR SENSOR SHOULD SENCE IF ANYONE COMES CLOSE AND SERVO SHOULD OPEN THE DOOR|IMPLEMENTED|
| LLR4|HC-05 BLUETOOTH MODULE SHOULD SEND THE DATA TO END DEVICE|IMPLEMENTED|
| LLR5|LCD DISPLAY SHOULD VIEW DATA FROM THE CONTROLLER|IMPLEMENTED|
__________________________________________________________


## SYSTEM DESIGN 


### BLOCK DIAGRAM
![enter image description here](https://www.linkpicture.com/q/USE-CASE-4.png)

## WORKING OF BLOCKS
_______________________________________
### RAIN SENSOR 
- A sensor that is used to sence the water drops and transmits the signal to the controller. 
- This sensor works like a switch.The rain sensor module includes a sensing pad which includes two series copper tracks coated with nickel. 
- This pad includes two header pins which are connected internally to the copper tracks of the pad.

### ULTRASONIC SENSOR
- This sensor sence the level of the bin is filled and sends the data to the arduino.
- An ultrasonic sensor is an electronic device that measures the distance of a target object by emitting ultrasonic sound wave. 
- It converts the reflected sound into an electrical signal.

### IR SENSOR
- Proximity Sensor are used to detect objects and obstacles in front of sensor and gives the signal to the arduino.
- Sensor keeps transmitting infrared light and when any object comes near. 
- it is detected by the sensor by monitoring the reflected light from the object.

### ATMEGA 328
- This board is used as centerallized contol unit. thus it receives the data from the sensor and transmits the processsed signals to the actuators and display
- Arduino UNO is a microcontroller board based on the ATmega328P.
- It has 14 digital input/output pins (of which 6 can be used as PWM outputs).
- 6 analog inputs, a 16 MHz ceramic resonator, a USB connection, a power jack, an ICSP header and a reset button.
- It contains everything needed to support the microcontroller.

### BLUETOOTH HC-05 MODULE
- This uses serial communication protocol to receive the data from board and uses wireless communication protocol to transmitt the data to the another wirelesss device.
- HC-05 4 Pin Wireless Serial Bluetooth Module is a Bluetooth module for use with any microcontroller.
- It uses the UART protocol to make it easy to send and receive data wirelessly.
- The HC-04 module can be used as a Master as well as a slave device for transmitter and receiver.  
_______________________________________________________________
