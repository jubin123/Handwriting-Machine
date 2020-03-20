# HandWriting-Robot
This robot is a type of a CNC Machine which draws any input given to it at a small scale. This robot has a pen attached to it with which it draws the input given to it via G-Code conversion.\
The Pen Movements are contoller by a stepper motor. We used a A4988 driver(High Power Specifications) to control the movements of the motor. \
**G-Code**\
G-Code is a set of instructoins which tells the machine where and how to move a G-code and m-code.
1. G-Code -Gives the X,Y,Z Coordinates of the position to which the must be next.
2. M-Code -Give the end effector movements to the coordinates specified by the G-Code.

**Handwriting Machine** \
The G-Code is transmitted from the laptop to the microcontroller via serial commmunication. The microcontroller has to read the data process the G-Code and convert it into motor movements.
We used the followinng softwares.
1. InkScape - To Give the input to be drawn.
2. Camotics - To tell which direction the given input is to be drawn ie., the path with which the pen moves in order to replicate the input.
3. G-Code sender - Converts the path given by camotics into g-code. This g-code indicates which direction the pen should move to draw the inkscape input.
