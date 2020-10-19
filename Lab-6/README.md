# Pre-Lab6

# GreetingBot

In this lab, we will use a Raspberry Pi to create a GreetingBot! 

### Try some Python code on the Pi

**How do you know what the shell script is doing?**
* Using nano will allow you to access the shell script and see/adjust its output. In other words by looking at the nano of the shell script, one can determine what the script's output is.

**How do we use ``vosk`` to recognize words and phrases?**
* In short we use Vosk to have it recognize words and phrases. We do this by initializing vosk with test_simple.py and test_words.py. Then we use vosk_demo_mic.sh to run the program. What this does, is it records the sound coming in -- it then sends it to the python file test_words which then compares the wav file to the words given and the words it is looking for. This will then yield the output. 

**Include the output of vosk recognizing phrases you taught it to look for.**


**Include the listing for a shell script and model files that you use to get vosk to recognize these phrases.**


### Experimenting with Linux processes
### Hello Pi, Hello Arduino

**What would you change to make sayHelloPi say something else?**
* Change what is between the quotations after the first line in helloPi.ino code. 

**How could you make it so that the Pi would only say something if the lights came on in the room?**
* The Pi only says something when the Arduino sends data to it. The best way to do this would be to use an if statement in the loop section of the arduino. If the value of the resistor goes above some certain value run through the loop. Basically we are using a photoresistor as a sensor. 

**How could you make it so that the Pi would say different things based on different sensor values read by the Arduino?**
* Same as before except now instead of having only one value you would have multiple values. If the photoresistors value is between 0 and X1 say "a" if it is between X1 and X2 say "b." If between X2 and X3 say "3" and so on and so forth. This could easily be used to determine what time of day it is for example and tell someone good morning, good afternoon, and goodnight. 

## Your own voice agent 

Program a simple application that understands different basic greetings (for example, Yo!, Good morning! And Good afternoon!) and responds either visibly, physically or auditorially in kind!

You are free to adapt this assignment to have the agent respond to any other set of vocabulary for any other purpose.

**Record someone trying out your design**

Using a phone or other video device, record someone trying out your GreetingBot. (This does not need to be an advertisement for your ChatBot; it is okay if the person is confused or asks questions or doesn't like it. We like the drama. Do not record someone using the default ChatBot.) Post the video to your README.md page!

**Submit your code to Github**

This project is going to be the submission of this week. You will need to upload the changes you made on the Pi to the GitHub page. To do that you need to follow three simple steps: Stage => Commit => Push! 

[Uploading on github via terminal](https://docs.github.com/en/free-pro-team@latest/github/managing-files-in-a-repository/adding-a-file-to-a-repository-using-the-command-line)

```
$ git add .
# Adds the file to your local repository and stages it for commit. To unstage a file, use 'git reset HEAD YOUR-FILE'.

$ git commit -m "Add existing file"
# Commits the tracked changes and prepares them to be pushed to a remote repository. To remove this commit and modify the file, use 'git reset --soft HEAD~1' and commit and add the file again.

$ git push origin your-branch
# Pushes the changes in your local repository up to the remote repository you specified as the origin
```

You might be required to login in the terminal to your GitHub account. For more details on how the Git commands work or what other commands are available checkout this [cheatsheet](https://education.github.com/git-cheat-sheet-education.pdf).  
