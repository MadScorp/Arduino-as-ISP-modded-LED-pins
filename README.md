# Arduino-as-ISP-modded-LED-pins
This repository contains several files to allow programming of Atmel 8pin and 32pin Microcontrollers with the Arduino Nano and a custom designed PCB.

Content:
ArduinoISP_modPin.ino:
Copy of the Arduino ISP sketch with changed PINs to fit PCB with RGB-LED

LED_Test.ino:
Changed the Pins for Programm Led, Heartbeat LED and Error LED to fit the RGB-LED on the designed PCB
LED_Test.ino is used to check the LEDs on the PCB, each LED blinks once, twice or three times. 
Defines in LED_Test are consistent with ArduinoISP_modPin

ReadAvrDude.bat:
ReadAvrDude.bat is used to read from Atmel microcontrollers in conjunction with the PCB for the Arduino Nano. 
Invoke ReadAvrDude.bat COMx with x the number of the COM port of your Arduino Nano. 

WriteAvrDude.bat
WriteAvrDude.bat is used to write hex files to the Atmel microcontrollers in conjunction with the PCB for the Arduino Nano.
Invoke WriteAvrDude.bat COMx file.hex with x the number of the COM port for your Arduino Nano and file.hex the AVR assembler hex-file.
