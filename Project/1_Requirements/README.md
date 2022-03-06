# **Automatic Lighting System**

## Abstract:

The objective of this project is to help conserve costs, save energy and also improve home safety. As automatic lights function only on sensing persons, waste of electricity caused by active lights in unused areas can be avoided. Minimal usage of lamps also increases lamp-life thereby reducing maintenance and replacement costs. Most of the times, many of us forget to switch off the lights while leaving the room in which we stay most of the time. This results in unnecessary power wastage. Therefore, an automatic room-light controller automatically turns on the lights when a person enters into a room, and turns off the lights when the person leaves the room. This automatic room controller can be implemented by using a simple microcontroller and sensors.

## Description:

This project describes the design aspects of an automatic lighting system which involves the automatic switching on/off of lights in a room with the help of LDR sensors and PIR motion sensors, of the artificial lights in accordance to available natural light.An automatic system, when installed in a room, will sense the available ambient light as well as the persons in the room. The term lighting controls is generally taken to refer to some form of electronic, or automatic solution, rather than the simple, mains ON/OFF switch. Automatic lightings help conserve costs and save energy. As automatic lights function only on sensing persons, waste of electricity caused by active lights in unused areas can be avoided.</br>

![light_on_off](https://user-images.githubusercontent.com/98833151/154866445-e8370c38-fb8c-4778-a0e2-8909de315dfa.jpg)

**✳️ Components:**

* Arduino Uno.</br>
* LDR (Photoresistor).</br>
* 221 Ohms resistor.</br>
* 10K Ohms resistor.</br>
* LED/ any light source.</br>
* Breadboard(optional).</br></br>

* __Arduino Uno:__ Arduino Uno is a microcontroller board based on the ATmega328P (datasheet). It has 14 digital input/output pins, 6 analog inputs, a 16 MHz ceramic resonator, a USB connection, a power jack, an ICSP header and a reset button.</br>

* __LDR:__ An LDR is a component that has a variable resistance that changes with the light intensity that falls upon it. The resistance of a photoresistor decreases with increasing incident light intensity which is made of a high resistance semiconductor.</br>

* __LED:__ A light-emitting diode(LED) is a semiconductor light source that emits light when current flows through it.

* __Resistors:__ A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element. This project is done using two resistors, 221 Ohms and 10k Ohms. 221 Ohms resistor has the color code as red-red-brown-black/orange(tolerance) & 10k Ohms resistor has the color code as brown-black-orange-black(tolerance).

## Requirement Modelling:

### High Level Requirements:

|ID|Description|
|:---|:---|
|HR01|Sensor shall detect day light.|
|HR02|Sensor shall detect person.|
|HR03|Lights shall turn on.|
|HR04|Lights shall turn off.|

## Low Level Requirements

|ID|Description|HLR ID|
|:---|:---|:---|
|LR01|The sensor detects whether the room or surrounding is dark/bright.|HR01/HR02|
|LR02|The lights will be turned off if there is enough light.|HR03|
|LR03|The controller(arduino) turns on the lights if the sensor detects that its dark.|HR02|


## 5W's & 1H:

<img width="524" alt="5W's 1H" src="https://user-images.githubusercontent.com/98833151/155694801-b29fdab9-9a97-403e-93b7-b4b9a8dfbfac.png">


#### Working: 

🔸 The sensor shall detect if its day/night based on the ambience of light received by the sensor.</br>
🔸 If the room is bright enough then the LDR sensor does not activates.</br>
🔸 If the room is dark only then LDR sensor provides the information to arduino.</br>

#### Aplications:

🔹 __Street Lighting:__ Street lighting is done by using LED, or solid-state lighting technology. It helps to manage all connected street lights securely and remotely.</br>
🔹 __Lighting Scenes:__ Lighting control systems are programmed to create a variety of scenes or ambience. This can be brought about by controlling light fixtures, switches and lighting properties.</br>
🔹 __Human Centric Lighting:__ Human Centric Lighting is about creating lighting that mimics the natural daylight that drives our bodily functions such as biological, emotional, health, or wellbeing of people. The effects adjust daily rhythms and increased alertness.</br>
🔹 __Vertical Farming:__ Vertical Farming is growing of crops or plants by using light or LEDs appropriate for photosynthesis.</br>




