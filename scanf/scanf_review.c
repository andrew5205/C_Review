#include <stdio.h>

// if scanf() to read a value for one of the basic variable types, precede the variable name with "&"
// if scanf() to read a string into a character array, don't use "&"


int main()
{
    char str[100];
    int i;

    printf("Enter a number:");
    
    scanf("%d %s", &i, str);

    printf("\nYou entered: %d::::%s", i, str); 



    return 0;
}



