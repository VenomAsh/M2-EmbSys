# Automatic Lighting System

## Block Diagram:

<img width="343" alt="AUTOMATIC_LIGHT SYSTEM" src="https://user-images.githubusercontent.com/98833151/154864876-bacc4b9a-c38a-4450-a974-de043da691e2.png">

## Description:

:pushpin: The term lighting controls is generally taken to refer to some form of electronic, or automatic solution, rather than the simple, mains ON/OFF switch.</br>
:pushpin: Automatic lightings help conserve costs and save energy. As automatic lights function only on sensing persons, waste of electricity caused by active lights in unused areas can be avoided.</br>

#### Sensor:

**Photoelectric sensor** is a device used to determine the distance, absence, or presence of an object by using infrared rays and a photoelectric receiver.

#### Working: 

:small_orange_diamond: When a person comes in the range of the sensor while entering the room, the sensor detects the person and the microcontroller will turn on the light.</br>
:small_orange_diamond: If there are more visitor, the microcontroller will keep the light turned on and increments the visitor counter accordingly.</br>
:small_orange_diamond: When the last person leaves the room the counter value is reset and the lights are turned off.</br>

## Requirement Modelling:

### High Level Requirements:

|ID|Description|
|:---|:---|
|HR01|Sensor shall detect the person/s.|
|HR02|Counter value shall be increased.|
|HR03|Lights should on/off.|

## Low Level Requirements

|ID|Description|HLR ID|
|:---|:---|:---|
|LR01|The sensor detects the persons entering and exiting the room as and when.|HR01|
|LR02|The sensor provides the information to the microcontroller which controlls the switch.|HR01|
|LR03|Counter value will be increased as the number of persons increase and decrease as the persons decrease.|HR02|
|LR04|The counter value is reset to zero if there is nobody in the room.|HR02|
|LR05|The Lights turn on when counter value is greater than zero.|HR03|
|LR05|The Lights turn off when counter value is hits zero.|HR03|
