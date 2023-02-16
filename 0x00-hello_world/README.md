# 0. 0-preprocessor--script that runs a C file through the preprocessor and its result is saved into another file. 
# The C file name will be saved in the variable $CFILE and output to file c. 
#Also created a main.c file with #include <stdio.h> declaration to return (0) and export CFILE= main.c,  a c file was created.  (Script#  gcc -E $CFILE -o c) 
 
# 1. 1-compiler--script that compiles a C file but does not link. The C file name will be saved in the variable $CFILE. 
# After creating the executable script gcc -c $CFILE and using the ./1-Compiler command, main.o was created. 

# 2. 2-assembler--script that generates the assembly code of a C code and save it in an output file. The C file name will be saved in the variable $CFILE.
# After creating the executable script gcc -S $CFILE and using the ./2-assembler command, main.s was created.

