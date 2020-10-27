
# Lab 7
## Serving webpages with the Raspberry Pi

**Customize the code enough that the webpage served up is clearly your own, and include a screenshot and any modified code in the lab folder.**
<img src = "https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab-7/Webpage1.PNG">

On button press:

<img src = "https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab-7/webpage2.PNG">

## Set up and Run Interaction Engine
### Flash the HelloYou Sketch onto the Arduino

**Look at the code. How does the Arduino communicate with the Pi when the code is running?**

* The arduino communicates with the Pi through the Serial monitor. If button is pressed send "light" to serial, if not send "dark" to serial. 

**What messages are sent from the Arduino to the Pi?**

* The arduino is sending a message in the last bit of code in which we are checking for a new state of the button. The messages the arduino is sending are either "light" or "dark."

**What messages are expected from the Pi to the Arduino?**

* The arduino expects the following characters: "H." If it gets anything else it will set the LED to low. The HTML button press is interpreted as "H" in this case.

**What happens if the Pi sends an unexpected message to the Arduino?**

* If we get an unexpected Character then the Pi will write the led as a 0. 

**How fast does the Arduino communicate with the Pi? What would you change to make it send messages less often?**

* Based on the current code, the Arduino is communicating with the Pi at a speed 9600 BPS. If we change the Serial.begin from 9600 to 4800 we would slow down the rate of communication between the Pi and Arduino.

### Run the HelloYou server on the RPi

Using your favorite text editor, open `helloYou/server.py`.

**Look at the code. What interface does the Pi use to communicate with the Arduino when the code is running?**

* The Pi uses the html client to communicate with the Arduino. When the Button on the html page is pressed then the Pi will do ser.write(b'H') making the Led turn on. In other words, they are both using the serial port to communicate.

**What messages are sent from the Pi to the Arduino? **

* Pi sends the character 'H' to the Arduino. 

**What messages are expected from the Arduino to the Pi?**

* The arduino sends "light" or "dark" to the Pi. If the button is pressed and it is light than the Pi then changes the html file to the light file which has the background become white. If it is not pressed then the background is dark. 

**What happens if the Arduino sends an unexpected message to the Pi?**

* Nothing, in all three of the files given the arduino never reacts to any externalities from the Pi. The index.html is used to collect the button data and communicate what to do with the LED. The client.js is used to collect data from the arduino and send it to the Pi.  

**What part of the code controls what is served when a browser requests a page from the server?**

* index.html. The html page controls what is shown on the browser. 

**What messages are sent to the console? When?**

* A message is sent to the console when the Flask server is officially running, when someone connects to the client, and when a button is pressed. 

## Video doorbell
<img src="https://github.com/SamyAbisaleh/Interactive-Lab-Hub/blob/master/Lab-7/Remote%20Doorbell.gif">

See code in files. Basically this code is accessible from inside the house. It can be made acessible externally via port forwarding. But this opens the house up to dangers. The best thing to do would be to open SSH and then forward in that way. 
