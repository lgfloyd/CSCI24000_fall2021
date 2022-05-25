Goal- The goal of this program is to practice a number of aspects of OOP, specifically the construction
of an abstract data type (or two), inheritence from an abstract class or interface, and data persistence
through object serialization. I will be doing this in the form of a virtual pet. Main will call all of
the other functions in the program. Pet will either load an existing pet or ask the user to input info
in the console for a new pet. This info will be strings that conatain the pet species and name, and ints
that contain the pet age and playtime. To go with them I will have functions for printing their contents/
values and functions used to modify them, such as changing species/name, and adding age/playtime (I will
refer to these functions as modifier functions for the rest of this algorithm). Finally, savePet will
serialize and save the data in a .ser file.

Input- Main wont take input as it calls the functions. Pet will take the .ser file as input or the console
as input. The print functions will take which ever string/int they are going to print as input. The modifier
functions will take which ever string/int they are going to modify as input and console input as well. 
savePet will take all the pet data as input.

Output- Main will call the functions as output. Pet will output the data in the .ser file or output the 
inputted data values from the console. The print functions will output which ever string/int they take as
input. The modifier functions will output whatever data they modify. savePet will output a message detailing
whether the data was saved or not.

Steps- As explained in the previous sections, Main will call the functions, Pet will either output existing
data from the .ser or gather data for it, print functions will print the values, modifier functions will
modify the values, and savePet will save the gathered data in a .ser file.

*Unless stated otherwise taking input from the console means inputting yes (y) or no (n) to determine what the
function will do or if it will do anything at all.
