#include <stdio.h>

// if scanf() to read a value for one of the basic variable types, precede the variable name with "&"
// if scanf() to read a string into a character array, don't use "&"

// scanf() for double - %lf


int main()
{
    double x;
    
    // scanf() for double - %lf
    scanf("%lf", &x);

    printf("\nYou entered: %f", x); 



    return 0;
}



