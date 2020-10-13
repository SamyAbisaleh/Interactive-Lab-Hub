## Overview

A. [Writing to the Serial Monitor](#part-a--writing-to-the-serial-monitor)

B. [RGB LED](#part-b-rgb-led)

C. [Resistance & Voltage Varying Sensors](#part-c-resistance--voltage-varying-sensors)

D. [I2C Sensors](https://github.com/FAR-Lab/Developing-and-Designing-Interactive-Devices/wiki/Lab-03#part-d-i2c-sensors)

E. [Logging Values to the EEPROM and Reading Them Back](#part-f-logging-values-to-the-eeprom-and-reading-them-back)

F. [Create your own Data logger!](#part-g-create-your-own-data-logger)

G. [Interactive Device](#integrated-interactive-device)

## Part A.  Writing to the Serial Monitor
 
**a. Based on the readings from the serial monitor, what is the range of the analog values being read?**

* The range of values written for an analogRead function are between 0 and 1023. 
 
**b. How many bits of resolution does the analog to digital converter (ADC) on the Arduino have** 

* Since the arduino can detect a max of 1023 -- this means that it has a resolution of 10 bits (2^10 = 1024)

## Part B. RGB LED

**How might you use this with only the parts in your kit? Show us your solution.**

* The best way to do this is by using two resistors in parallel. We are given 330 ohm resistors -- to get them close to 150 we put two of them together and that results in us having a 165 ohm resistor. (Note -- I only used this for the G for ease of visual -- this same thing should be copied to all the other 2 pins of R and B) 

<img src=https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Alt-Lab%20%235/RGB-Parallel.jpg>

## Part C. Resistance & Voltage Varying Sensors 
### FSR

**a. What voltage values do you see from your force sensor?**

* I see many values from 0 to about 1000 this correlates to 0 Volts to about 4.88 Volts. It was really difficult to get it higher than that. 

**b. What kind of relationship does the voltage have as a function of the force applied? (e.g., linear?)**

* I think that the relationship is exponential. The more force applied the higher the resistance is. Basically -- it is easy to greatly increase or decrease the resistance by putting a little bit of pressure initially. But the more pressure added the harder it becomes. For example, when I reached 4.88 volts I had to push really hard to maybe get about 1001 analog reading. 

**c. In `Examples->Basic->Fading` the RGB LED values range from 0-255. What do you have to do so that you get the full range of output voltages from the RGB LED when using your FSR to change the LED color?**

* I'm not sure that I particularly understand this question. But I believe its asking how can we get a PWM to operate across the entire range from 0-255. To do this I would use the MAP function that arduino has to map the values of 0-255 to 0-1000 (1000 = 255). This feature would basically map the values from 0-1000 as if they were from 0-1023 and only in the range of 0-255.

## Flex Sensor, Photo cell, Softpot

**a. What resistance do you need to have in series to get a reasonable range of voltages from each sensor?**

* The photocell depends on where you are. If you are somewhere bright use a 1K Ohm pulldown it will allow you to detect differences betwen bright and really bright. However, using a 10k is good for darker areas where you are going betwen kind of dark and really dark. (10K will saturate quickly, 1K will give you more wiggle room).

* For the softpot we are using 2-10K OHm resistors in series. One connected one one side of the pot, and one on the other side of the pot. 

**b. What kind of relationship does the resistance have as a function of stimulus? (e.g., linear?)**

* The photocell has a similar resistance to the FSR -- as light is increased it becomes harder to decrease the the resistance. However, when light is low changes in resistance are simple. 

* The Softpot on the other hand seems to have a much more linear relationship. Where your finger is on the potentiometer directly impacts the resistance. For example, if you're hand is in the center then the resistance is equal to half of that of the maximum of the soft pot (in our case about 5k) 

## Part D. I2C Sensors 

### Accelerometer
 
**a. Include your accelerometer read-out code in your write-up.**
* [Code](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Alt-Lab%20%235/Part_D.ino)

* Note: I didn't have an acceleromter so this is solely based off what I think would work as code. 

## Part E. Logging values to the EEPROM and reading them back
 
### 1. Reading and writing values to the Arduino EEPROM
**a. Does it matter what actions are assigned to which state? Why?**

* Yes, it does matter what actions are assigned to which state. For example, if the first action you assign is to read -- but there is nothing written then you will be returned with nothing. If you clear before you read then you will also be returned with nothing. Basically the order determines what you end up seeing and how you are able to work with the code and data. 

**b. Why is the code here all in the setup() functions and not in the loop() functions?**

* The state functions are located in their own Setup codes because they are expected to only be called once -- when they are ran. In other words, they are in the loop of the SwitchState code (the main code). But they are in their own setup code. So when the SwitchState code calls them, they are only called once -- rather than getting stuck within their own loop() function.

**c. How many byte-sized data samples can you store on the Atmega328?**

* The Atmega328 holds 1024 byes.

**d. How would you get analog data from the Arduino analog pins to be byte-sized? How about analog data from the I2C devices?**

* As the EEPROM is byte sized -- it can only store values from 0-255. Meanwhile analog values range from 0-1023. One way of doing this is to map the values. 0-255 to 0-1023. I would do this for analog data from I2C devices as well. This could use the update function to write on a single byte. 

**e. Alternately, how would we store the data if it were bigger than a byte? (hint: take a look at the [EEPROMPut]**

* If the previous method wasn't modular enough one could also allocated consecutive addresses to store values. For example, using EEPROM.put() will allow a person to move the address to the next byte consecutivley until it allocates for the entire variable. Unlike the update function the pt function writes multiple bytes. Furthermore, it will only overwrite data if it has changed.

### 2. Design your logger 
**a. Turn in a copy of your final state diagram.**

<img src = https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Alt-Lab%20%235/State%20Diagram.png>

## Part G. Create your own data logger!

**a. Record and upload a short demo video of your logger in action.**
<img src = https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Alt-Lab%20%235/Part%20G%20gif.gif>

# Lab5

# Integrated Interactive Device
## Lab Submission
***
For your write up, include:
1.	Your Arduino code.

* [Code](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Alt-Lab%20%235/Sweep.ino)

2.	At least one photo-studio-quality photo of your box closed, and another photo of your box open. 

* Closed Box 

<img src = https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Alt-Lab%20%235/Closed%20Box.jpg>

* Open Box 

<img src = https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Alt-Lab%20%235/Open%20Box.jpg>

3.	A video of your box in action.

* Video

<img src = https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Alt-Lab%20%235/Video%20of%20Box.gif>

**A note** 
* As I was working on this, my metro mini broke and I had to replace it with my arduino uno. This would usually not be an issue because they both do the same thing. However, by doing this I ran into a huge issue of space. Fitting the breadboard, arduino uno, and battery inside the box was almost impossible. So the final result was that I had to sacrifice functionality. Due to the lack of space I had to give up on adding an interactive parts. The lights had to remain on because adding a photoresitor that turned them on when the box was open added too much wiring. I also really wanted to add sound to the box so that when it opened it referenced the anime which it was drawn from -- however, due to the arduino's design it was not possible to get the sound to work. Overall this gave me a really unique insight into how people have to sacrifice functionality for space and cost. 
