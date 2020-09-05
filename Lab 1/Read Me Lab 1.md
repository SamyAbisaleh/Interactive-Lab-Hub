# Alt Lab 1. Arduino Deep Dive
## Part 1
## Light it Up
### Overview

A) Set up a breadboard

B) Manually blink a LED

C) Blink a LED using the Arduino

D) Manually fade a LED

E) Fade a LED using Arduino

### Part A. Set Up Bread Board
![Image of Breadboard](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Breadboard.jpg)
<img src="https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Breadboard.jpg" width="100">



### Part B. Manually Blink an LED
#### a. What color stripes are on a 220 Ohm Resistor?
* A 5 stripe resistor has stripes colored as Red, Red, Black Black, Brown. This provides a resistor of 220 Ohms with a 1% Tolerance

#### b. What do you have to do to light your LED?
* Pressing the button allows the LED to light. 

### Part C. Blink an LED using Arduino
#### 1. Blink the on-board LED
##### a. What line(s) of code do you need to change to make the LED blink (like, at all)?
* If we are going from a blank IDE there are a few steps that are important in making the LED blink. The first is determining that the pin is being used as an output pin. After classifying the Pin this manually blinking the PIN is just alternating between High and Low output while using a delay to pause and allow it to "blink."

##### b. What line(s) of code do you need to change to change the rate of blinking?
* Changing the number in the two delay lines allows the rate of blinking to be increased or decreased (Higher number = Slower, Lower Number = Faster).

##### c. What circuit element would you want to add to protect the board and external LED?
* If one is using an external LED then a resistor must be added. Without a resistor the LED will burn up because of the large current. 

##### d. At what delay can you no longer perceive the LED blinking? (And how can you prove to yourself that it is, in fact, still blinking?
* At a delay of about 13 ms between on and off the LED can no longer be percieved as blinking. I was able to prove it to myself by using an iPhone in slow motion mode to see the light turn on and off. Furthermore, after googling it I read that a study determined that the human eye can see between 13-14 milliseconds on average.

##### e. Save your new blink code to your lab 1 repository, with a link on the Lab report wiki page.
LINK

