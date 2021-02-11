
// in C, string is array pf char,
// have to look in char by char

// assign a single character to a char variable, use single quotation 

// plusSign = '+';


// anything between bouble quotation is interpreted by compiler as a string 
// printf("");

// \" string delimiter 
// printf("For \" you write \\\".");

#include <stdio.h>

int main()
{
    // "" and without {} 
    char longStr[] = "This is crazy long str, just use double quoye without {}.";
    char input[10];

    unsigned int count = 0;

    printf("Please enter your name: ");
    // no need to use & (address operator) on a string 
    // scanf() only read untill space \0
    scanf("%s", input);


    while(input[count] != '\0');
        count++;
    printf("the length of input is: %d", count);

    return 0;
}


