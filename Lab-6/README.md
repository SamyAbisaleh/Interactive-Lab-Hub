# Pre-Lab6

# GreetingBot

In this lab, we will use a Raspberry Pi to create a GreetingBot! 

### Try some Python code on the Pi

**How do you know what the shell script is doing?**
* Using nano will allow you to access the shell script and see/adjust its output. In other words by looking at the nano of the shell script, one can determine what the script's output is. 
. 

These scripts use a program called [``vosk``](https://alphacephei.com/vosk/) to recognize numbers. 

**How do we use ``vosk`` to recognize words and phrases?**

**Include the output of vosk recognizing phrases you taught it to look for.**

**Include the listing for a shell script and model files that you use to get vosk to recognize these phrases.**


### Experimenting with Linux processes


Try running multiple programs at the same time using the ‘&’ to make each process a background process:
```shell
pi@ixe00:~ $ cd python_games/
pi@ixe00:~/python_games $ python2 wormy.py &
[1] 2851
pi@ixe00:~/python_games $ python2 drawing.py &
[2] 2856
pi@ixe00:~/python_games $ 
```
Make the last background process a foreground process with ‘fg’”
```shell
pi@ixe00:~/python_games $ python2 drawing.py &
[1] 2879
pi@ixe00:~/python_games $ fg
python drawing.py
```

One a process is in the foreground, it is possible to end it by typing Ctrl-c.

Sometimes, we want to push a process to the background after we’ve started it. Here is how to do that:

```shell
pi@ixe00:~/python_games $ python2 drawing.py
^Z
[1]+  Stopped                 python2 drawing.py
pi@ixe00:~/python_games $ bg
[1]+ python drawing.py &
pi@ixe00:~/python_games $ 
```

Also, it is possible to kill background processes through their process ids. We highlight where you can look for that process id:

```shell
pi@ixe00:~/python_games $ python2 drawing.py &
[1] 2894
pi@ixe00:~/python_games $ ps -x
  PID TTY      STAT   TIME COMMAND
  497 ?        Ss     0:00 /lib/systemd/systemd --user
  500 ?        S      0:00 (sd-pam)
  505 ?        Ssl    0:00 /usr/bin/lxsession -s LXDE-pi -e LXDE
 <various processes left out>
 2474 ?        S      0:42 sshd: pi@pts/0
 2477 pts/0    Ss     0:00 -bash
 2894 pts/0    Sl     0:01 python drawing.py
 2907 pts/0    R+     0:00 ps -x
pi@ixe00:~/python_games $ kill -9 2894
pi@ixe00:~/python_games $ 
[1]+  Killed                  python2 drawing.py
pi@ixe00:~/python_games $ 
```

## Connect the Arduino and the RPi

Connect your Arduino board to your RPi using a short USB cable.
Now, on the RPi, run the Arduino program:

```shell
pi@ixe00:~ $ arduino
```

Use the Arduino IDE to flash Blink onto the Arduino. Don’t forget to set the port!

Now, try adding a sensor and checking that you can read the value on the RPi using the Serial Monitor.

### Hello Pi, Hello Arduino

With your Pi and Arduino, try out the ``helloPi`` and ``helloArduino`` sketches. Tweak them to make them do something new.

``HelloPi.ino`` sets up the Arduino to say hello to the Pi repeatedly. 
``HelloPi.py`` echos the Arduino’s message to the console in text form.
``sayHelloPi.py`` plays the helloPi.wav file whenever the Pi gets any message from the Arduino on the serialPort.

Flash the Arduino with ``HelloPi.ino``.
With ``HelloPi.ino`` running on the Arduino, run ``HelloPi.py`` on the Pi using ``$python HelloPi.py``.

**What would you change to make sayHelloPi say something else?**

**How could you make it so that the Pi would only say something if the lights came on in the room?**

**How could you make it so that the Pi would say different things based on different sensor values read by the Arduino?**

Next, try out ``HelloArduino``. First have ``HelloArduino.ino`` listen for messages from ``HelloArduino.py``. Next, use ``morse_code_translator.ino``. What happens differently? 

Change the ``HelloArduino.py`` program to take in inputs from the user to have them translated to morse code on the Arduino.

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


#### Pro-tips and other commands
`nano` is a general purpose text editor, so you can use it for any type of text file like the `.js`, `.html`, and `.css` files in this project.

Notice on the bottom of the terminal window that there is some text showing things like `^G Get Help` and `^O Write Out`. These are the commands that you can use in `nano`. The `^` character stands for `Ctrl`. So to `Write Out` (which means to save the file), you would type `Ctrl` and `O` (that's the letter `O`, not the number `0`). When you've typed these, you will see a bar appear at the bottom of the terminal that says `File Name to Write: chatServer.js`. This is the file name you are saving to. In this case, we want the same name, so we can just hit the `Enter` key. You will then see a message on the bottom that tells you how many lines were written, something like `[ Wrote 116 lines ]`.
