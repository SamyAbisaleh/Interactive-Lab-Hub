
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
* I made the servo motor rotate in relationship to the potentiometer. I did so by mapping the analog input of the potentiometer to the vale

## Part D. Autonomy!
**Include a photo/movie of your autonomous device in action.**
<img src="https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%203/Part%20D.gif">


## Part E. Paper display
**a. Make a video of your paper display in action.**

<img src="https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%203/Part%20E.gif">

## Part F. Make it your own

[Code](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%203/GameCode/GameCode.ino)

**a. Make a video of your final design in action.**

I made the game that you sometimes see at the mall, where you press the button at the right positon, and the more right you are the faster it goes. I really wanted to include an LCD and make the game count how many times you get it right, and start over when you fail. However, due to the sheer amount of wires and cabling around back I wasn't able to do this. However, the code is included to count these values -- so implementing it in the future is easy.

<img src="https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%203/Part%20F.gif">
