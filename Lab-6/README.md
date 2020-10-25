# Pre-Lab6

# GreetingBot

In this lab, we will use a Raspberry Pi to create a GreetingBot! 

### Try some Python code on the Pi

**How do you know what the shell script is doing?**
* Using nano will allow you to access the shell script and see/adjust its output. In other words by looking at the nano of the shell script, one can determine what the script's output is.

**How do we use ``vosk`` to recognize words and phrases?**
* In short we use Vosk to have it recognize words and phrases. We do this by initializing vosk with test_simple.py and test_words.py. Then we use vosk_demo_mic.sh to run the program. What this does, is it records the sound coming in -- it then sends it to the python file test_words which then compares the wav file to the words given and the words it is looking for. This will then yield the output. 

**Include the output of vosk recognizing phrases you taught it to look for.**

<img src = "https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab-6/Output%20of%20VOSK.PNG">

**Include the listing for a shell script and model files that you use to get vosk to recognize these phrases.**
* Shell Script: bash vosk_demo_mic.sh


### Experimenting with Linux processes
### Hello Pi, Hello Arduino

**What would you change to make sayHelloPi say something else?**
* Change what is between the quotations after the first line in helloPi.ino code. 

**How could you make it so that the Pi would only say something if the lights came on in the room?**
* The Pi only says something when the Arduino sends data to it. The best way to do this would be to use an if statement in the loop section of the arduino. If the value of the resistor goes above some certain value run through the loop. Basically we are using a photoresistor as a sensor. 

**How could you make it so that the Pi would say different things based on different sensor values read by the Arduino?**
* Same as before except now instead of having only one value you would have multiple values. If the photoresistors value is between 0 and X1 say "a" if it is between X1 and X2 say "b." If between X2 and X3 say "3" and so on and so forth. This could easily be used to determine what time of day it is for example and tell someone good morning, good afternoon, and goodnight. 

## Your own voice agent 

**Record someone trying out your design**
https://drive.google.com/file/d/1m5mu-MQk30RzPeWxnWimBVB0mTORG75a/view?usp=sharing

**Submit your code to Github**
https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab-6/test_words.py
https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab-6/pico2text_demo.sh
