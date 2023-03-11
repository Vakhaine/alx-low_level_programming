C - Static libraries

TASKS 

INSTRUCTION


[0. A library is not a luxury but one of the necessities of life](libmy.a)


Create the static library libmy.a containing all the functions listed below:


If you haven’t coded all of the above functions create empty ones with the right prototype.


Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.


[1. Without libraries what have we? We have no past and no future](create_static_lib.sh)


Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

PROCEDURE

Task 0

create this README.md file

create main.h file

create all .c files using vi, vim or emacs

gcc -c *.c to compile all .c files created

use the command ar rcs libmy.a to create a static library

run ls to list all files

use the command ar -rc libmy.a *.o to copy all .o files into the static library

to check the files created run the ar -t libmy.a command

to display a list of content in the static library run nm libmy.a

push to remote repo.

----------------------------------------Follow @: [Vakhaine](github.com/vakhaine)---------------------------------------------------

Task 1

create this file create_static_lib.sh

copy the script command below into the file, save and quit:

-- #!/bin/bash
-- gcc -Wall -pedantic -Werror -Wextra -c *.c
-- ar -rc liball.a *.o
-- ranlib liball.a

convert to an executable file with the command chmod u+x create_static_lib.sh

run the executable file using the command ./create_static_lib.sh

ls to confirm liball.a is present

push to remote repo.

----------------------------------------Follow @: [Vakhaine](github.com/vakhaine)---------------------------------------------------
