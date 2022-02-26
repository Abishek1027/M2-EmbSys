
# PATIENT MONITORING SYSTEM









## TABLE OF CONTENTS
|S.NO|CONTENTS|
|----|--------|
|1.|	PARALYSIS PATIENT MONITORING SYSTEM|
|1.1	| Abstract|
|1.2|	 Features|
|1.3	| State of art|
|1.4	| 5W’s and 1H| 
1.5	 |SWOT analysis|
|2.|	REQUIREMENTS|
|2.1|	 High level requirements|
|2.2	| Low level requirements|
|2.3|	BLOCK DIAGRAM AND BLOCKS EXPLANATION|
|3.1|	 Block Diagram|
|3.2	| Sensors|
|3.3	 |Actuators|
|3.4	 |COMMUNICATION PROTOL|
|4.    |ARCHITECTURE|
|4.1|	Behavioural Diagram|
|4.1	|Structural Diagram|
|5.|     APPLICATIONS OF THE PROJECT|



# 1. PATIENT MONITORING SYSTEM

## 1.1 ABSTRACT
-	Healthcare automation ensures support to the patient and eliminates the need of a caretaker near the patient. This project is based on Internet of Things and connects electronic devices to a public or private cloud to capture or monitor data and enables them to automatically trigger certain events. This project proposes automation techniques in healthcare such as heart beat rate monitor, pill bottle and drips bottle remainder, electronic paralysis patient caretaker. These automation devices are used to monitor patient health remotely using sensors and mobile communication devices.  These devices are known as the Internet of things for medical devices or IoT-MD.

## 1.2 FEATURES
-	The proposed system uses heart beat sensor that allows detecting the heart rate of a person even if the person is at home and transmits the heart rate readings over Internet.
-	Paralysis people in most cases are not able to convey their fundamental needs as they are unable to speak clearly. In such a situation, this system helps the disabled person to show hand gestures which in turn will display the need of the patient on a LCD screen.
-	This project assists in reminding the patient to take their pills on time. The system uses a mechanical setup (DC Motor and a wheel to locomote the pill) with IR receiver to indicate the collection of pills.
- This system makes use of a Clinical level sensor which indicates the level of Glucose inside the drips bottle.


## 1.3 STATE OF ART
-This project suggests some automation techniques in healthcare such as Heart rate monitor, Paralysis Patient Healthcare, Pill remainder, Drips bottle automation. Healthcare automation ensures proper support to the patient. These automation devices are used to monitor patient health remotely using sensors, mobile communication devices, and actuators.


## 1.4 5W’s and 1H

[![image](https://www.linkpicture.com/q/5W1H-Example.png)](https://www.linkpicture.com/view.php?img=LPic6219e14f36015477645023)

## 1.5 SWOT ANALYSIS 

[![image](https://www.linkpicture.com/q/SWOT-ANALYSIS.png)](https://www.linkpicture.com/view.php?img=LPic6219e19037a511294093441)
 






## 2. REQUIREMENTS

### 2.1 HIGH LEVEL REQUIREMENTS:
|ID|	DESCRIPTION|	STATUS|
|--|-------------|--------|
|HLR1	|THE SYSTEM WILL MEASURE THE HEART RATE|	TO BE DONE|
|HLR2	|THE SYSTEM WILL MEASURE DRIPS BOTTLE LEVEL|	TO BE DONE|
|HLR3	|THE SYSTEM WILL SENSE THE PILLS DELIVERY	|TO BE DONE|
|HLR4|	THE SYSTEM WILL SENSE THE GUESTURE OF THE PATIENT|	TO BE DONE|
|HLR5|	THE SYSTEM WILL SEND THE ALERT MESSAGE TO USER	|TO BE DONE|


### 2.2 LOW LEVEL REQUIREMENTS:

|ID|	DESCRIPTION|	STATUS|
|--|-------------|--------|
|LLR1|	HEART RATE SENSOR WILL SENSE THE HEART RATE AND SEND TO CONTROLER|	TO BE DONE|
|LLR2|	LEVEL SENSOR WILL MEASURE THE DRIPS LEVEL AND TRANSMITTS THE READING TO CONTROLLER	|TO BE DONE|
|LLR3|	IR SENSOR WILL SENSE THE PRESENCE OF PILL IN THE PILL BOX AND TRANSMITTS THE DATA TO THE CONTROLLER|	TO BE DONE|
|LLR4|	ACCLEROMETER WILL SENCE THE ANGLE OF THE HAND GLOVES AND TRNSMITTS SIGNAL TO CONTROLLER|	TO BE DONE|
|LLR5|	ATMEGA 328 CONTOLLER WILL SEND THE ALL-PROCESSED DATA THROUGH SERIAL PORT TO THE IOT MODULE|	TO BE DONE|

## 3. BLOCK DIAGRAM AND BLOCKS EXPLAINATION

### 3.1 BLOCK DIAGRAM
_____________________
[![image](https://www.linkpicture.com/q/BLOCK-DIAGRAM.png)](https://www.linkpicture.com/view.php?img=LPic6219e5249d12a916545710)
_________________________
## 3.2 SENSORS

### 3.2.1 LEVEL SENSOR
- A level sensor is a device for determining the level or amount of fluids, liquids or other substances that flow in an open or closed system. There are two types of level measurements, namely, continuous and point level measurements. Continuous level sensors are used for measuring levels to a specific limit, but they provide accurate results. Point level sensors, on the other hand, only determine if the liquid level is high or low. The level sensors are usually connected to an output unit for transmitting the results to a monitoring system. Current technologies employ wireless transmission of data to the monitoring system, which is useful in elevated and dangerous locations that cannot be easily accessed by common workers.

### 3.2.2 HEART RATE SENSOR
- Heart beat sensor is designed to give digital output of heat beat when a finger is placed on it. When the heart beat detector is working, the beat LED flashes in unison with each heartbeat. This digital output can be connected to microcontroller directly to measure the Beats per Minute (BPM) rate. It works on the principle of light modulation by blood flow through finger at each pulse.

### 3.2.3 IR SENSOR
- An infrared sensor is an electronic device that emits in order to sense some aspects of the surroundings. An IR sensor can measure the heat of an object as well as detects the support of level sensor motion These types of sensors measures only infrared radiation, rather than emitting it that is called as a passive IR sensor .Usually in the infrared spectrum, all the objects radiate some form of thermal radiations. These types of radiations are invisible to our eyes, that can be detected by an infrared sensor. The emitter is simply an IR LED (Light Emitting Diode) and the detector is simply an IR photodiode which is sensitive to IR light of the same wavelength as that emitted by the IR LED. 


### 3.2.4 ACCELEROMETER
- An accelerometer is a device that measures proper acceleration (&quot;g-force&quot;). Proper acceleration is not the same as coordinate acceleration (rate of change of velocity). For example, an accelerometer at rest on the surface of the Earth will measure an  acceleration g= 9.81 m/s 2  straight upwards. By contrast, accelerometers in free fall (falling toward the center of the Earth at a rate of about 9.81 m/s 2) will measure zero. Micro machined accelerometers are increasingly present in portable electronic devices and video game controllers, to detect the position of the device or provide for game input.

## 3.3 ACTUATORS

### 3.3.1 MOTOR
-	A DC motor is any of a class of electrical machines that converts direct current electrical power into mechanical power. The most common types rely on the forces produced by magnetic fields. Nearly all types of DC motors have some internal mechanism, either electromechanical or electronic, to periodically change the direction of current flow in part of the motor.

### 3.3.2 RELAY
- A relay is an Electric operated Switch. Many relays use an to operate a switching mechanism Electromagnet mechanically, but other operating principles are also used. Relays are used where it is necessary to control a circuit by a low-power signal (with complete electrical isolation between control and controlled circuits), or where several circuits must be controlled by one signal. The first relays were used in long distance telegraph circuits, repeating the signal coming in from one circuit and re-transmitting it to another. Relays were used extensively in telephone exchanges and early computers to perform logical operations.
## 3.4 COMMUNICATION PROTCOL

### 3.4.1 NODE MCU
-	NodeMCU is an open source Lua based firmware for the ESP8266 WiFi SOC from Espressif and uses an on-module flash-based SPIFFS file system. NodeMCU is implemented in C and is layered on the Espressif NON-OS SDK. The firmware was initially developed as is a companion project to the popular ESP8266-based NodeMCU development modules, but the project is now community-supported, and the firmware can now be run on any ESP module.
# 4. ARCHIETECTURE
## 4.1 Behavioral Diagram
[![image](https://www.linkpicture.com/q/Flowchart-Example_-Medical-Registration.png)](https://www.linkpicture.com/view.php?img=LPic6219e29a290ea648619294)
## 4.2 STRUCTURAL DIAGRAM
[![image](https://www.linkpicture.com/q/Credit-Card-Processing-Of-Online-Shopping-Use-Case-Diagram-1.png)](https://www.linkpicture.com/view.php?img=LPic6219e330bff061527446622)


## 4. APPLICATION
- Continuously monitoring the heart rate of the patient.
-	Maintaining the drips bottle level.
-	Pills intake direction and assistance.
-	Gesture control gloves for emergency purpose. 
