1. cpp main.c > c:

 runs the c file in the c preprocessor and outputs in the c file 

2. gcc -c -o ${CFILE%.*} $CFiLE:
 this script command compiles but does not link and changes the the .c extension of the base name to .o
