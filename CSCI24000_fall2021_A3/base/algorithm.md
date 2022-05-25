Goal- The goal of this program is to create a horse race with a track thats 15 units long and 5 units wide,
due to there being 5 horses. On each turn, each horse will (figuratively) flip a coin, which determines if it
advances one unit on the track or stays still. The race ends when one of the horses passes the finish line. The goal
of function startRace is to start the race and continue running the race as long as one of the horses hasnt
surpassed the 15 unit finish line. If this happens it will display which horse won. The goal of function
advancePosition is to perform the flip coin action mentioned earlier and advance the position of the horse accordingly.
The goal of function printLane is to print each lane of the horse race with the updated horse positions. The goal of 
function getPosition is to get the current position of a horse when called.

Input- This program will use an inputted number to seed the random number generator. The function startRace will use
the number of horses, the horse array, and the length of the race as inputs. The function advancePosition will use a
horses position and the seeded random as input. The function printLane will use the number of the current horse, the
horses position, and the length of the race as inputs. The function get position will use an int representing the horsesposition as input.

Output- When the program runs it will output a message that asks the user to input a number, it outputs each finished
race track with the updated horse positions until a horse wins, and then it displays which horse won. The function
startRace will output each finished race track with the updated horse positions until a horse wins, and then it
displays which horse won. The function advancePostition will output the result of the coin flip (1 or 0) and the
updated position of a horse. The function printLane will print out each lane for each horse. The function
getPosition will output the current position of a horse.

Steps- In order to accomplish all of this the program must first seed the random number generator, then it will call
the function startRace to start the race. The function startRace will contain a while loop that will check whether the
race is over or not. The while loop will contain a for loop that iterates through the number of horses, running the
advancePosition and printLane functions until one of the horses positions is at the finish line, which will be checked
by an if statement at the end of the loop. At this point the while loop and race will end and the number of the horse
that won will be printed out as the winner. The function advancePosition will use rand() and modulo to perform a coin
flip and set the result of this coin flip (1 or 0) to an int. This int will be used in an if statement to determine
whether the coin flip has produced the result 1 or 0, where 1 advances the position of the horse by 1 and 0 does not.
Finally advancesPosition will return the updated position via return. The function printLane will use a for loop that
iterates over the length of the race and an if-else statement that will check to see if the horse whos number is being
checked is at the position thats being iterated through. If the check is yes then it prints out the horses number, 
else it prints out . to represent an empty track space. The function getPosition will use an int representing the
horses posiition as input and output the horses position via return. 
