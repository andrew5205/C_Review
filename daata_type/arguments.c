
#include <stdio.h>

int main(int argc, char *argv[])        // command line arguments 
{
    int numOfArguments = argc;
    // argv[0] is always the current file name 
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of arguments: %d\n", numOfArguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line argument: %s\n", argument2);
    
}










