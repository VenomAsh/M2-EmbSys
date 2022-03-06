# Test Plan
* For every feature, define a test case </br>
 :point_right: How to run that feature </br>
 :point_right: Define expected behaviour </br>
 :point_right: Capture the actual result

# Table
* ID, Description of Test case, Input values, Expected Output</br>

Table : </br>

|Test ID|	Description|	Input values|	Expected Output|
|:------|:-----------|:-------|:-------|
| H_01 |	Check if the layout is created |	Choose the symbol 'X' or 'O'. |	3x3 grid is formed |
| H_02 |	Check if player1/player2 got 3 of his symbols consecutively in vertical, horizontal or diagonal format. |	'X' or 'O' symbols as inputs from the player1/player2. |	The player1/player2 won the game. |
| H_03 |	Check for draw. |	9 inputs from player1 and player2 together. |	Game Over. |
