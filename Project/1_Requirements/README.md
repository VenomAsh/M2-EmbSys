# **Automatic Lighting System**

![light_on_off](https://user-images.githubusercontent.com/98833151/154866445-e8370c38-fb8c-4778-a0e2-8909de315dfa.jpg)

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

## Description:

:pushpin: The term lighting controls is generally taken to refer to some form of electronic, or automatic solution, rather than the simple, mains ON/OFF switch.</br>
:pushpin: Automatic lightings help conserve costs and save energy. As automatic lights function only on sensing persons, waste of electricity caused by active lights in unused areas can be avoided.</br>

#### Working: 

:small_orange_diamond: When a person comes in the range of the sensor while entering the room, the sensor detects the person and the microcontroller will turn on the light.</br>
:small_orange_diamond: If the room is bright enough then the PIR motion sensor does not activates.</br>
:small_orange_diamond: If the room is dark only then PIR motion sensor detects the person entering the room.</br>

## 5W's & 1H:

<img width="524" alt="5W's 1H" src="https://user-images.githubusercontent.com/98833151/155694801-b29fdab9-9a97-403e-93b7-b4b9a8dfbfac.png">

