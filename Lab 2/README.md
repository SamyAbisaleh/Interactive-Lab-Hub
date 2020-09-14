# Alt-Lab #2
## Pre-Lab
### Idea Generation
[Click to access the Ideas generated as a PDF ](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%202/Pre-Lab.pdf)
 
## Overview
For this assignment, you are going to 

A) [Design your Arduino+](#part-a-design-your-arduino) 

B) [Order parts for your Arduino+](#part-b-order-parts-for-your-arduino) 

C) [Prototype your Arduino+](#part-c-prototype-your-arduino)

D) [Layout your Arduino+](#part-d-layout-your-arduino) 

E) [Send your board off to be made](#part-e-send-your-board-off-to-be-made)


## Part A. Design your Arduino+
Please document the design of your Arduino+:

**a) What is the + improvement of your Arduino+**
In this repo you will find the original files from Adafruit for the Metro Mini and a file I have edited. You can compare the changes to the schematic and the board file to see which changes were made.

I've decided I want to be able to read the temperature from my Metro Mini and have that be a part of the board itself. This requires adding an Temperature Sensor. I am using a surface mount [component](https://app.ultralibrarian.com/details/1690C20E-103F-11E9-AB3A-0A3560A4CCCC/Texas-Instruments/TMP102AIDRLRG4?ref=digikey)

**b) What Arduino form-factor/design are you basing your design off of?**
* My design is based off of the Metro Mini, the files I started with can be found: [here](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/tree/master/Lab%202/Metro%20Mini%20Files/Adafruit-METRO-328-PCB-master/Adafruit-METRO-328-PCB-master)

**c) What features/parts need to be incorporated for your Arduino+? Include your research!**
Based on the datasheet there are multiple things that needed to be considered and added to my Arduino.
1. The entire Metro Mini must be operating at 3.3 V instead of 5V as the SDA and SCL pins cannot operate at 5V and it may cause damage to the sensor
2. The second important feature that I must incorporate is 2 5K resistors that buffer the SDA and SCL pins from the 3.3 Volts.
3. Finally, I must include a .01 uF capacitor to help prevent noise from impacting the sensor.

The schematic I based these decisions off of can be found below.

* ![](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%202/Schematic.PNG)

**d) What is the timeline for the overall development of your Arduino?**

**e) Which fabrication company are you using, what do you plan to order, and what is the design rationale for the selection?**

## Part B. Order parts for your Arduino+

Develop a bill of materials for your Arduino +.

**Bill of Materials**
Use the table below, or just include a link to a spreadsheet or pdf.
| Part name | Part ID | Part description | # of units | link to data sheet | link to source | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| Atmega 328P    |   U1 |   Microcontroller  |  1   |  [datasheet](http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf)   |   [Amazon](https://www.amazon.com/dp/B004G51AMW)  |  Bootloader   |
|     |    |     |     |     |     |     |
|     |    |     |     |     |     |     |


## Part C. Prototype your Arduino+

As much as is possible, prototype the design of your Arduino +. This step may require time. For example, if you have to order breadboard able parts that you don't have on hand, you might have to order those and wait for them to arrive. On the other hand, for other aspects of your design, like layout, you might be able to use sketches to figure out how everything will fit together, or if it will be large enough or small enough for the application you have in mind. 

Sometimes you're just testing out design constraints. For example, if you are making an Arduino + speaker to be a musical dog collar for your pet, you can see how heavy a collar your dog will tolerate by making a dummy board and case.

**Describe key design questions (how big are the parts? what pins need to be connected?) and how you used/will use prototyping to answer them.**

## Part D. Layout your Arduino+
* [Metro Mini official open source layout](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/tree/master/Lab%202/Metro%20Mini%20Files/Adafruit-METRO-328-PCB-master/Adafruit-METRO-328-PCB-master)

* [Temp Sensor Official Layout](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/tree/master/Lab%202/Temp%20Sensor)

* [ My Official Board Layout (On Eagle)](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%202/Metro%20Mini%20Rev%20B.brd)

* [My Official Schematic Layout (On Eagle)](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%202/Metro%20Mini%20Rev%20B.sch)

## Part E. Send your board off to be made

When you have laid out your board, send it off to be fabricated. You might need to order components, tools or other apparatus (like programmers or FTDI interfaces) to complete the design at this time too.

**Document what you sent, and to where, with enough specificity that anyone else could have the same thing made.**

## Pain Points
There were a couple of pain points I had with this assignment
* The assignment instruction are a bit unclear, as theres a mix of being told to buy and prototype but also not buy and wait to get it checked
* I don't have any experience using Eagle, and I've never prototyped or designed a board. This was not a huge issue. The issue came when I had to come up with ideas, I wasn't sure what was easy and what was hard, and I didn't have many other ideas to compare them to. 
* Similar to my lack of experience with Eagle, I thought that the Pre-lab wasn't of much help (in the sense that we are coming up with many different ideas). I think in the future, a potentially better Pre-Lab would be to watch, learn, and do a schematic and board based on a video uploaded to YouTube (basically introduce Eagle). And then have say, 4 options for the designable board: IR sensor, Temp sensor, Built-in LCD, DIY. The last option will allow students with experience to do what they want, and the other 3 will help the TA's not have to help everyone without any knowledge of their parts. (Note: there might be a better way to do this, just an idea)

* Overall though, although I found the assignment a bit hard, it was rewarding when I was able to come up with the final parts sketch. I might not be an Eagle Pro but I definitley understand the ins and outs of it a lot better. It also helped me understand how board are made and work a lot better. 

