## I. COMPLEX EMBEDDE SYSTEM

  1.1 INTRODUCTION

1.2 APPLICATION

1.3 BLOCKDIAGRAM
__________________________

### 1.1 INTRODUCTION

- ATM is AUTOMATED TELLER MACHINE

- ATM enables the user to collect the cash without going to bank

- This automation lowers the man power

- Thus, it automatically dispenses the cash time and effort is reduced
________
### 1.2 APPLICATIONS OF ATM MACHINE

- DISPENSE CASH

- CASH DEPOSIT

- BANKING ACTIVITIES

- BALANCE CHECK

- MINI STATEMENT
______________________
### 1.3 BLOCK DIAGRAM
![enter image description here](https://www.linkpicture.com/q/Untitled-Workspace-1_1.png)
_____________________


### 1.4 COMPONENT EXPLAINATION
________________
### CONTROL UNIT 
- Control unit is a centeralized part of this embedded system mostly control unit on the atm will a be microcontroller from the 8051 family in this project microcontroller is used to receive all the data and signals from the modules like **GPS, CARDREADER, RTC, KEYPAD and  ETHERNET INTERFACE.** and processing the signal according to the program dumped then send the comands of action to components and actuators like **LCD, MOTOR, SPEAKER, RELAY etc.**
### GPS
- GPS is Glopal Positioning System is used in this system for the security purpose to detect the location and also for recording the user transaction location.
### MEMORY
- Memory segment is used in the atm to store the database of the transactions made.
### CARD READER
- Card Reader is used to read the users card and fetch the card details from the bank's database.
### RTC
- RTC is a Real Time Clock used to provide the timing to microcontroller. even the system 
power is off the clock will run and fetch the timing.
### KEYPAD
- Keypad in the atm machine is used to get the password and ammount details to the microcontroller.
### LCD DISPLAY
- LCD dispaly is used for displaying the content and status of the operation done on thee atm machine.
### SPEAKER
- Speakers are used to deliver the voice commands to user to assits the operation.
### ETHERNET INTERFACE
- Ethernet interface module is used in this system to communicate to the another module which will do the tasks like connecting the ATM machine to the server and its operations like sending the messages to the user and updating the account informations to both the users and bank.


