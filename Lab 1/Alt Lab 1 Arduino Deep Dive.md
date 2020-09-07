# Part 1
# Light it Up
## Overview

A) [Set up a breadboard](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Alt%20Lab%201%20Arduino%20Deep%20Dive.md#part-a-set-up-bread-board)

B) [Manually blink a LED](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201Alt%20Lab%201%20Arduino%20Deep%20Dive.md#part-b-manually-blink-an-led)

C) [Blink a LED using the Arduino](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Alt%20Lab%201%20Arduino%20Deep%20Dive.md#part-c-blink-an-led-using-arduino)

D) [Manually fade a LED](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Alt%20Lab%201%20Arduino%20Deep%20Dive.md#part-d-manually-fade-a-led)

E) [Fade a LED using Arduino](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Alt%20Lab%201%20Arduino%20Deep%20Dive.md#part-e-fade-a-led-using-arduino)


## Part A. Set Up Bread Board
<img src="https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Breadboard.jpg" width="200" height="300">


## Part B. Manually Blink an LED
#### a. What color stripes are on a 220 Ohm Resistor?
* A 5 stripe resistor has stripes colored as Red, Red, Black Black, Brown. This provides a resistor of 220 Ohms with a 1% Tolerance

#### b. What do you have to do to light your LED?
* Pressing the button allows the LED to light. 


## Part C. Blink an LED using Arduino

### 1. Blink the on-board LED
#### a. What line(s) of code do you need to change to make the LED blink (like, at all)?
* If we are going from a blank IDE there are a few steps that are important in making the LED blink. The first is determining that the pin is being used as an output pin. After classifying the Pin this manually blinking the PIN is just alternating between High and Low output while using a delay to pause and allow it to "blink."

#### b. What line(s) of code do you need to change to change the rate of blinking?
* Changing the number in the two delay lines allows the rate of blinking to be increased or decreased (Higher number = Slower, Lower Number = Faster).

#### c. What circuit element would you want to add to protect the board and external LED?
* If one is using an external LED then a resistor must be added. Without a resistor the LED will burn up because of the large current. 

#### d. At what delay can you no longer perceive the LED blinking? (And how can you prove to yourself that it is, in fact, still blinking?
* At a delay of about 13 ms between on and off the LED can no longer be percieved as blinking. I was able to prove it to myself by using an iPhone in slow motion mode to see the light turn on and off. Furthermore, after googling it I read that a study determined that the human eye can see between 13-14 milliseconds on average.

#### e. Save your new blink code to your lab 1 repository, with a link on the Lab report wiki page.
* [LINK TO BLINK CODE](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Blink.ino)


### 2. Blink your LED
<img src="https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/blink.gif">


## Part D. Manually fade a LED
### a. a. Are you able to get the LED to glow the whole turning range of the potentiometer? Why or why not?
* I was not able to get the LED to glow during the entire range of the Potentiometer. The reason for this is that as the potentiometer began to have more and more resistance the amount of current flow became to little for the light to be seen. My range of motion was about half with the light and half without.


## Part E. Fade a LED using Arduino 
### a. What do you have to modify to make the code control the circuit you've built on your breadboard?
* To control the circuit there are multiple different things I can control. The first is the fade amount. If I increase or decrease the fade amount the speed of which the light changes brightness becomes faster. The second is the delay. If I change the delay the speed of which the light changes also becomes faster or slower. 

### b. What is analogWrite()? How is that different than digitalWrite()?
* digitalWrite() only allows the pin to be set to either a high or low value. analogWrite() allows the pin to have a duty cycle. In other words the pin is rapidly changing the amount of high or low it has. These numbers are between 0 and 255. If duty cycle is higher, then the light is at a higher brightness. If it is lower the light is at a lower brightness. A better way to think about duty cycle is the average on and off and how that correlates to brightness. 


# Part 2
# Make a Digital Timer
## Overview

A) [Solder your OLED Display](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Alt%20Lab%201%20Arduino%20Deep%20Dive.md#part-a-solder-your-oled)

B) [Make a lowly Multimeter](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201Alt%20Lab%201%20Arduino%20Deep%20Dive.md#part-b-make-a-lowly-multimeter)

C) [Using a time based Digital Sensor!](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Alt%20Lab%201%20Arduino%20Deep%20Dive.md#part-c-usin-a-time-based-digital-sensor)

D) [Manually fade a LED](https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab%201/Alt%20Lab%201%20Arduino%20Deep%20Dive.md#part-d-make-your-arduino-sing)

## Part A. Solder your OLED
### Modify Example Code:
'''c++
/**************************************************************************
 This is an example for our Monochrome OLEDs based on SSD1306 drivers

 Pick one up today in the adafruit shop!
 ------> http://www.adafruit.com/category/63_98

 This example is for a 128x32 pixel display using I2C to communicate
 3 pins are required to interface (two I2C and one reset).

 Adafruit invests time and resources providing this open
 source code, please support Adafruit and open-source
 hardware by purchasing products from Adafruit!

 Written by Limor Fried/Ladyada for Adafruit Industries,
 with contributions from the open source community.
 BSD license, check license.txt for more information
 All text above, and the splash screen below must be
 included in any redistribution.
 **************************************************************************/

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define NUMFLAKES     10 // Number of snowflakes in the animation example

#define LOGO_HEIGHT   16
#define LOGO_WIDTH    16
static const unsigned char PROGMEM logo_bmp[] =
{ B00000000, B11000000,
  B00000001, B11000000,
  B00000001, B11000000,
  B00000011, B11100000,
  B11110011, B11100000,
  B11111110, B11111000,
  B01111110, B11111111,
  B00110011, B10011111,
  B00011111, B11111100,
  B00001101, B01110000,
  B00011011, B10100000,
  B00111111, B11100000,
  B00111111, B11110000,
  B01111100, B11110000,
  B01110000, B01110000,
  B00000000, B00110000 };

void setup() {
  Serial.begin(9600);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3C for 128x32
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  // Show initial display buffer contents on the screen --
  // the library initializes this with an Adafruit splash screen.
  display.display();
  delay(2000); // Pause for 2 seconds

  // Clear the buffer
  display.clearDisplay();

  // Show the display buffer on the screen. You MUST call display() after
  // drawing commands to make them visible on screen!
  display.display();
  delay(2000);
  // display.display() is NOT necessary after every single drawing command,
  // unless that's what you want...rather, you can batch up a bunch of
  // drawing operations and then update the screen all at once by calling
  // display.display(). These examples demonstrate both approaches...
}

void loop() {
  testscrolltext();    // Draw scrolling text
}

void testscrolltext(void) {
  display.clearDisplay();

  display.setTextSize(4); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);
  int val = analogRead(A0);
  display.println(val);
  display.display();      // Show initial text
  
  delay(100);

}
'''
## Part B. Make a lowly Multimeter
## Part C. Using a time based digital sensor
## Part D. Make your arduino sing



