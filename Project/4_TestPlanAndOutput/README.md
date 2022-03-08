# Test Plan
* For every feature, define a test case </br>
 :point_right: How to run that feature </br>
 :point_right: Define expected behaviour </br>
 :point_right: Capture the actual result

## Table
* ID, Description of Test case, Input values, Expected Output, Actual Output & Status.</br>

Table : </br>

|Test ID|	Description|	Input values|	Expected Output| Actual Output | Status|
|:------|:-----------|:-------|:-------|:---|:---|
| H_01 |	Day/Night Sensing|	LDR Sensor data values | LUX between 1-500 |  LUX between 1-500 | ✅|
| H_02 |	Detecting Person | Ultrasonic data values	|	Distance ranging between 1-50cm | Distance ranging between 1-50cm | ✅|
| H_03 |	LED turns ON |	Both LDR & Ultrasonic data values | LED turns on if both are true | LED turns on if both are true | ✅|

# OUTPUTS

* In Daylight the LED is OFF

<img width="515" alt="Light_enough" src="https://user-images.githubusercontent.com/98833151/157128568-f274ed69-03c5-4382-9aa5-c03aca36ec62.png">

* In Night when no person is detected

<img width="527" alt="Dark_NotSense" src="https://user-images.githubusercontent.com/98833151/157128630-d60e59e9-9717-49fa-a170-fe3910eeca0a.png">

* In Night when person is detected

<img width="547" alt="Dark_Sense" src="https://user-images.githubusercontent.com/98833151/157128676-1391b112-2fca-405d-b9af-b853ff342059.png">
