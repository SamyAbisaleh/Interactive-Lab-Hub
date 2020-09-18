
# Motors, Power, Paper Prototyping
## Pre-Lab
## Overview
For this assignment, you are going to 

A) [Actuating DC Motors](#part-a-actuating-dc-motors) 

B) [Actuating Servo Motors](#part-b-actuating-servo-motors) 

C) [Integrating Input and Output](#part-c-integrating-input-and-output)

D) [Autonomy!](#part-d-autonomy)

E) [Paper Display](#part-e-paper-display) 

F) [Make it your own](#part-f-make-it-your-own)

## Part A. Actuating DC motors
* Not asked to display anything here

## Part B. Actuating Servo motors
### Part 1. Connect the Servo to your breadboard
**a. Which color wires correspond to power, ground and signal?**
Red is 5V, Brown is Ground, and the Signal Pin is Yellow.

### Part 2. Connect the Servo to your Arduino
**a. Which Arduino pin should the signal line of the servo be attached to?**
* The code "sweep" attaches the servo on Arduino Pin 9. Using the code: myservo.attach(9).

**b. What aspects of the Servo code control angle or speed?**
* Angle is controlled by the integer position. If Position is 180 that means the servo is at 180 degrees. If it is at 90 it is at 90 degrees. On the other hand speed can be controlled in two different ways. If you change the amount in which the position is increasing or decreasing, the speed will be increased. Furthermore, decreasing the delay time will also increase the speed. 

## Part C. Integrating input and output

## Part D. Autonomy!

Remove the USB cable

Use the 9V battery and pigtail to power the Arduino using the Vin and Ground line.

**Include a photo/movie of your autonomous device in action.**

## Part E. Paper display

Here is an Arduino breadboard with a paper faceplate on it to turn it into a display:

![]()

This is fine, but it can be a bit difficult to lay out a great and user friendly display within the constraints of the breadboard. Also, it really only works for applications where people can come and stand over the breadboard, or where you can mount the board to the wall.

Here is another prototype for a paper display:

![]()

It holds a breadboard and 9v battery, and provides a front stage on which to put writing, graphics, LEDs, buttons or displays.

This design can be made by scoring a long strip of corrugated cardboard of width X, with the following measurements:

| Y height of box <br> <sub><sup>- thickness of cardboard</sup></sub> | Z  depth of box <br><sub><sup>- thickness of cardboard</sup></sub> | Y height of box  | Z  depth of box | H height of faceplate |
| --- | --- | --- | --- | --- | 

Fold the first flap of the strip so that it sits flush against the back of the face plate, and tape, velcro or hot glue it in place. This will make a H x X interface, with a box of Z x X footprint (which you can adapt to the things you want to put in the box) and a height Y in the back. 

Make a paper display that uses the servo to show how many times a button on the front has been pressed (or any other thing you can sense or count). Ideally you should design it so that you can slide the breadboard out to work on the circuit or programming, and then slide it back in and reattach a few wires to be back in operation.


**a. Make a video of your paper display in action.**

## Part F. Make it your own

Now modify this set up to make this your own design. 

Use paper to build a paper template. Use an Olfa knifes to cut out your pattern, and glue or tape to put it together. <!--If you'd like to use the paper cutter, [here's how](https://github.com/FAR-Lab/Developing-and-Designing-Interactive-Devices/wiki/How-to-use-the-Silhouette-Cameo-Cutter).-->

You can create a game, you can enact a pre-programmed mini puppet show, or you can visualize data in a new way.

<!--If your design involves having someone controlling the puppet in real time (e.g. using sensors), please film that happening. Otherwise, film the puppet performing it's moves. -->

**a. Make a video of your final design in action.**
