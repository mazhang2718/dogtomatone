# dogtomatone

## what it is

Dogtomatone is a fun little hand puppet instrument I developed during a weekend hardware hacking workshop! When you open the dog's mouth, it barks; and the pitch that it barks at is controlled by a strip on the back of the dog.

![Dogtomatone](IMG_7885.jpg)

You can watch a video of it in action here:

[Video Link](#)

## how it works

How it functions is through two different sensors, and a little bit of software.

### barking

First, to trigger the barking, I threaded a light sensor through the back of the dog's mouth. When the dog's mouth is opened, light hits the sensor, causing the reading from the light sensor to go from a high output to a low output. This reading is captured through the Arduino code linked in the repo, and sent through a baud channel to a Max patch (also linked to in the repo). When the Max patch detects this change from darkness to light, it triggers a barking sound file.

![Light Sensor](IMG_7890.jpg)

### pitch changing

Then, to change the pitch of the barks, I attached a soft potentiometer to the back of the dog. A soft potentiometer is basically a linearly changing resistor - depending on where you press on the back of the strip, a different resistance value is given. So, I captured the resistance value readings through the Arduino code, sent it to Max, and then in Max, mapped different resistance values to different pitch shifting multipliers. Combined with the barking trigger, you can now change the pitch of barks and play songs with it!

![Soft Pot](IMG_7888.jpg)

### other things

Making a complete introduction of how to make this completely from scratch is a bit out of the scope for this readme, but I'll try to give a bit of a more detailed description of what you'll need if you want to make this on your own:

* You'll need a soft pot and light sensor (available in the Sparkfun store), an Arduino, a circuit board, and the Arduino and Max software
* Once you have those, you'll need to solder or find some other way of attaching the sensors to the Arduino. For the photocell, I had the outer wires attached to the 5V and ground, and the inner wire connected to the '0' analog input connection on the Arduino. For the soft pot, I had the outer wires attached to 5V and ground, and the inner wire connected to the '1' analog input connection.
* Once you've made all the connections, you'll need to open the Arduino and Max files attached in this repo. To get the Arduino code running, you'll need to 'verify' the file and then 'upload' the file through a port connection with the Arduino. The Max file should hopefully run as long as you have it open and saved (hopefully being a key word - I still have no idea how to really do things in Max lol)

### thanks for reading (:
