Goal- The goal of this program is to gain a good understanding of java by creating a basic ATM system for RETH (Ridiculously Easy to Hack)
bank. There will be a single admin who can add and inteact with current bank users, and there will be users, which have savings and 
checking accounts that they and the admin can interact with. The goal of admin.java is to create a system where either the admin or user 
can login and select options for the ATM from their respective menus (like for the admin editing users and their accounts or the users
interacting with their own accounts). The goal of user.java is to contain the appropriate getters and setters for attributes of the users,
as well as containing the total balances and pins/account numbers for a current account and the tools to manipulate them.

Input- admin.java will take input from the console as well as the attributes contained in user.java. user.java will take inputs from
admin.java in order to get and set attributes as well as manipulate them.

Output- admin.java will output the prompts for logging in and selection menus for the admin and user and the options that follow.
user.java will output the the updated atributes to admin.java in the form of getters.

Steps- As explained in the previous two sections, user.java will take the information gathered in admin.java, and manipulate and output
this data to admin.java when it is needed. admin.java will gather this information and prvide the prompts for the admin and users to do 
so.

*Note: I am writing this after I turned in my code and can no longer update it as it is past due. I had a hard time with this project and
was not able to make it as complex or complete as I should have so I wanted to note some errors in my program I noticed after I turned it
in. For user.java I realized I forgot to make a protected int for the users accountNumber and accidentally made the getter and setter
for accountNumber set and get my protected int pin, which is for the pin of the account and not the accountNumber. There were definently
errors in admin.java, so to name one I found and made a solution; in both the admin and user sections when exit is selected it only allows
for the admin or user to logout and not fully exit the program, to fix this I couldve added a text prompt after they select exit to logout
(which would set login=0 when selected) or to fully exit the program (which would set loop=0 when selected). I know there are other errors,
as my program did not compile correctly, however I could not find them. 
