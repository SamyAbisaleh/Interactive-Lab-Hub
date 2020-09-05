# Alt Lab 1. Arduino Deep Dive
## Part 1
## Light it Up
### Overview

A) [Set up a breadboard](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Read%20Me%20Lab%201.md#part-a-set-up-bread-board)

B) [Manually blink a LED](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Read%20Me%20Lab%201.md#part-b-manually-blink-an-led)

C) [Blink a LED using the Arduino](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Read%20Me%20Lab%201.md#part-c-blink-an-led-using-arduino)

D) [Manually fade a LED](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Read%20Me%20Lab%201.md#part-d-manually-fade-a-led)

E) [Fade a LED using Arduino](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Read%20Me%20Lab%201.md#part-e-fade-a-led-using-arduino)

### Part A. Set Up Bread Board
<img src="https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Breadboard.jpg" width="200" height="300">

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
* [LINK TO BLINK CODE](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Blink.ino)

#### 2. Blink your LED
<img src="https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/blink.gif">

### Part D. Manually fade a LED
#### a. a. Are you able to get the LED to glow the whole turning range of the potentiometer? Why or why not?
* I was not able to get the LED to glow during the entire range of the Potentiometer. The reason for this is that as the potentiometer began to have more and more resistance the amount of current flow became to little for the light to be seen. My range of motion was about half with the light and half without.

### Part E. Fade a LED using Arduino 
#### a. What do you have to modify to make the code control the circuit you've built on your breadboard?
* To control the circuit there are multiple different things I can control. The first is the fade amount. If I increase or decrease the fade amount the speed of which the light changes brightness becomes faster. The second is the delay. If I change the delay the speed of which the light changes also becomes faster or slower. 

#### b. What is analogWrite()? How is that different than digitalWrite()?
* digitalWrite() only allows the pin to be set to either a high or low value. analogWrite() allows the pin to have a duty cycle. In other words the pin is rapidly changing the amount of high or low it has. These numbers are between 0 and 255. If duty cycle is higher, then the light is at a higher brightness. If it is lower the light is at a lower brightness. A better way to think about duty cycle is the average on and off and how that correlates to brightness. 




