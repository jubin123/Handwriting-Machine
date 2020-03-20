**CNC Based Handwriting Machine**
The body of this machine was built using simple acrylic sheet, that was designed for this purpose.
The direction control was achieved through a setup of stepper motors for X & Y axis movements.
The robot was programmed on Arduino IDE.

**The parts used are as follows :**
AtMega 16 x1
A4988 Stepper Motor Driver x2
Chassis x1
Stepper Motor x2
Servo Motor x1
IC7805 x1
12v DC Adapter x1
Connecting Wires 
AVR Programmer x1


**G-Code**
G-code is a programming language for CNC that instructs machines where and how to move a G-code and M-code.
1. G-Code - Gives the X,Y,Z Coordinates of the position to which the must be next.
2. M-Code - Give the end effector movements to the coordinates specified by the G-Code.

**Following Softwares were used :**
1. InkScape - To visualize the input
2. Camotics - To calculate which direction the given input is to be drawn
3. G-Code sender - Converts the path given by camotics into g-code.
