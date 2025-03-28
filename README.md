# vario
STM32L476RG based vario for measuring vertical hight, speed with battery supply.  
By Leonard & Bastian
## Aspiration
This Repo is for a study projekt in Mikrocomputertechnik for the 3rd semester. That's why it's covering the main features of it but not the complete build of a selfmade variometer. It's open source and can be used for anyone else to support their idea.
# Basic Flowchart
![Alt-Text](/media/pap.png)
# Wireing
Pins of STM32  
A0 	- PA0 	- Battery  
D15	- PB8	- I2C SCL  
D14	- PB9	- I2C SDA  
D6	- PB10	- Buzzer  
Theoratically implemented features:  
![Alt-Text](/media/vario-cirkitdesign.png)
Tested demo features:  
![Alt-Text](/media/vario-build.jpg)
A full demo video can be found in the pictures-and-videos file
