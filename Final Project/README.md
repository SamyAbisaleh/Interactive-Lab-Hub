# IDD Final Project
## Initial Plan

The initial goal of the project was the following: 

My parents recently installed a TV in the Kitchen. The issue with this TV is that if you want to watch it or move it you have to stop what you are doing to go adjust it. Imagine yourself in a world where instead of having to personally move the TV you could have the TV follow you around. 

After ordering the parts I quickly realized that working with a belt is not as simple as just connecting the belt, and having it work. There are a surprising amount of difficulties with trying to not get the belt not to slide and splicing the belt. The initial problems I had with the belt were trying to merge two sides of the belt. I got an open belt so that I could connect the belt wherever needed. This turned out to be a daunting task. Initially I tried using tape to hold the belt for prototyping, the tape just slipped and was unable to hold the belt together. Afterwards, I tried using hot glue which also failed to stick to the belt. I did not have the proper tools to test out any other methods of merging the belt, so I decided to change projects.

## New Project

After not being able to complete the first project, I decided it was time to pivot. 

Since I had purchased two motors, I thought a good idea would be to use those motors and create a trash can which takes itself to my door. The idea being that initially it would work manually, and eventually it would work via sensors and or CV to sense it way around a room.

## The Process
### Step 1: Buy Parts 

To replicate the project which I had done the parts required are as follows: 

1. [Motors](https://www.robotshop.com/en/cytron-power-window-motors-w--5-wheels--pair.html)

<img src="https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Final%20Project/Motors.PNG">

2. [Trash Can](https://www.amazon.com/AmazonCommercial-Gallon-Commercial-Basket-1-Pack/dp/B07YPRSX86/ref=sr_1_6?dchild=1&keywords=plastic+trash+can&qid=1608229844&sr=8-6)

<img src = "https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Final%20Project/TrashCan.PNG">

3. [Arduino Uno](https://www.amazon.com/gp/product/B01EWOE0UU/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1)

<img src = "https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Final%20Project/Arduino.PNG">

4. [Transistors](https://www.amazon.com/gp/product/B07LG2C3MY/ref=ppx_yo_dt_b_asin_title_o00_s00?ie=UTF8&psc=1)

<img src = "https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Final%20Project/Transistor.PNG">

5. Breadboard
6. Wires
7. [9V Battery](https://www.amazon.com/Duracell-Coppertop-Alkaline-Batteries-Count/dp/B000K2NW08/ref=sr_1_1_sspa?crid=1YDGV99KHEPLV&dchild=1&keywords=9v+battery&qid=1608236229&sprefix=9V+%2Caps%2C176&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUExQ09PREJIUEVQN1FSJmVuY3J5cHRlZElkPUEwOTc1MTA1RTJZOU5RWFROSFBCJmVuY3J5cHRlZEFkSWQ9QTAyMzgxNDY0Q09LRjZTWDcyOTImd2lkZ2V0TmFtZT1zcF9hdGYmYWN0aW9uPWNsaWNrUmVkaXJlY3QmZG9Ob3RMb2dDbGljaz10cnVl)
8. [12V Battery](https://www.amazon.com/AB12120-12AH-Replacement-Battery-LW-6FM10DC/dp/B07W73631X/ref=sr_1_2_sspa?crid=1J1O0QICN70Y5&dchild=1&keywords=12v+battery&qid=1608236166&sprefix=12V+battery%2Caps%2C182&sr=8-2-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUExVEhZMDVRUUE1OUNTJmVuY3J5cHRlZElkPUEwNjQ4OTI1M0hWWVozUVlZME1NRiZlbmNyeXB0ZWRBZElkPUEwMjEzMjY4RURCQVI3UEdZVUVHJndpZGdldE5hbWU9c3BfYXRmJmFjdGlvbj1jbGlja1JlZGlyZWN0JmRvTm90TG9nQ2xpY2s9dHJ1ZQ==)

### Step 2: Put everything together. 

Putting together the trash can was fairly straightforward. 

#### Step 2.A

The first step of putting everything together was marking holes for the motor. The best way to do this is to use the motor as a way to measure, and mark the holes and then drill them in place: 

<img src = "https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Final%20Project/Holes.PNG">

Copy these holes onto the opposing side. You can using a tape measure, or in my case I used a paper to mark and then copy the holes.Basically, I layed the paper on the trash can then I poked a hole in the paper where the holes were. I then flipped the paper and the trash can and I drilled holes in the opposing side:

<img src = "https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Final%20Project/Paper.PNG">

#### Step 2.B 

Use screws and wingnuts to mount the motor in place (Sadly I don't have any pictures of this). But in short, take the motor, place it on top of the holes you previously cut out, place screws in the mounting brackets, place them all into the drilled holes and use the wingnuts to secure them in place. 

#### Step 2.C

Build the circuit. Personally I started by building a simple NPN Transistor circuit where I used and LED to check if the circuit is properly wired: 

<img src = "https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Final%20Project/LED_Circuit.jpeg">

A better look at this circuit is as follows: 

<img src = "https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Final%20Project/LED_Circuit_TinkerCad.png">

The next step after getting this circuit to work is to replace the NPN transistor with a larger size NPN transistor that can hold 10 Amps of current, as per the motor specfications. The best set up was using a two 5 AMP transistors in parallel (the TIP120), and replacing the LED with the two motors. 

This will yield a circuit of: 

<img src = "https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Final%20Project/Final Circuit.jpeg">

There are a few aspects of the circuit which are not pictured. These are:

1. 12 V battery connection. The 12 V battery needs to be connected to the power rail of the bread board.
2. The 9V battery is connected to the Vin and GND of the arduino to power the arduino away from the computer. 

## Final Result

Sadly the final result was pretty dissapointing. I wasn't able to get the trashcan to operate for a long period of time as it constantly failed. 

