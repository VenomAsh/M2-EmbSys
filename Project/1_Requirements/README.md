# **Automatic Lighting System**

## Abstract:

The objective of this project is to help conserve costs, save energy and also improve home safety. As automatic lights function only on sensing persons, waste of electricity caused by active lights in unused areas can be avoided. Minimal usage of lamps also increases lamp-life thereby reducing maintenance and replacement costs. Most of the times, many of us forget to switch off the lights while leaving the room in which we stay most of the time. This results in unnecessary power wastage. Therefore, an automatic room-light controller automatically turns on the lights when a person enters into a room, and turns off the lights when the person leaves the room. This automatic room controller can be implemented by using a simple microcontroller and sensors.

## Description:

This project describes the design aspects of an automatic lighting system which involves the automatic switching on/off of lights in a room with the help of LDR sensors and PIR motion sensors, of the artificial lights in accordance to available natural light.An automatic system, when installed in a room, will sense the available ambient light as well as the persons in the room. The term lighting controls is generally taken to refer to some form of electronic, or automatic solution, rather than the simple, mains ON/OFF switch. Automatic lightings help conserve costs and save energy. As automatic lights function only on sensing persons, waste of electricity caused by active lights in unused areas can be avoided.</br>

![light_on_off](https://user-images.githubusercontent.com/98833151/154866445-e8370c38-fb8c-4778-a0e2-8909de315dfa.jpg)

**✳️ Components:**

* Arduino Uno.</br>
* PIR Motion Sensor.</br>
* LDR (Photoresistor).</br>
* 10 KOhms resistor.</br>
* Relay module.</br>
* LED/ any light source.</br>
* Breadboard.</br></br>

* __Arduino Uno:__ Arduino Uno is a microcontroller board based on the ATmega328P (datasheet). It has 14 digital input/output pins, 6 analog inputs, a 16 MHz ceramic resonator, a USB connection, a power jack, an ICSP header and a reset button.</br>
* __PIR Motion Sensor:__ A device used to detect motion by receiving infrared radiation. There are two important materials present in the sensor one is the pyroelectric crystal which can detect the heat signatures from a living organism(humans & animals) and the other is a Fresnel lenses which can widen the range of the sensor.</br>
* __LDR:__ An LDR is a component that has a variable resistance that changes with the light intensity that falls upon it. The resistance of a photoresistor decreases with increasing incident light intensity which is made of a high resistance semiconductor.</br>

## Requirement Modelling:

### High Level Requirements:

|ID|Description|
|:---|:---|
|HR01|Sensor shall detect light/dark.|
|HR02|Sensor shall detect person.|
|HR03|Lights should on/off.|

## Low Level Requirements

|ID|Description|HLR ID|
|:---|:---|:---|
|LR01|The sensor detects whether the room is dark/bright.|HR01|
|LR02|The sensor detects the persons entering and exiting the room as and when.|HR02|
|LR03|The sensor provides the information to the microcontroller which controlls the switch.|HR02|
|LR04|The Lights turn on when counter value is greater than zero.|HR03|
|LR05|The Lights turn off when counter value is hits zero.|HR03|


## 5W's & 1H:

<img width="524" alt="5W's 1H" src="https://user-images.githubusercontent.com/98833151/155694801-b29fdab9-9a97-403e-93b7-b4b9a8dfbfac.png">


#### Working: 

🔸 When a person comes in the range of the sensor while entering the room, the sensor detects the person and the microcontroller will turn on the light.</br>
🔸 If the room is bright enough then the PIR motion sensor does not activates.</br>
🔸 If the room is dark only then PIR motion sensor detects the person entering the room.</br>

#### Aplications:

🔹 __Street Lighting:__ Street lighting is done by using LED, or solid-state lighting technology. It helps to manage all connected street lights securely and remotely.</br>
🔹 __Lighting Scenes:__ Lighting control systems are programmed to create a variety of scenes or ambience. This can be brought about by controlling light fixtures, switches and lighting properties.</br>
🔹 __Human Centric Lighting:__ Human Centric Lighting is about creating lighting that mimics the natural daylight that drives our bodily functions such as biological, emotional, health, or wellbeing of people. The effects adjust daily rhythms and increased alertness.</br>
🔹 __Vertical Farming:__ Vertical Farming is growing of crops or plants by using light or LEDs appropriate for photosynthesis.</br>




