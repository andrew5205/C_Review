
#include <stdio.h>

int main()
{
    // {} is not mandatory

    // if(condition)
    //     statement;
    // else if (condition)
    //     statement;
    // else
    //     statement;

    int number_to_test, remainder;

    printf("Enter your number to be tested: ");
    scanf("%i \n", &number_to_test);

    remainder = number_to_test % 2;

    if (remainder == 0) {
        printf("The number is even \n");
    }
    else {
        printf("The number is odd \n");
    }

    // ternary operatator
    // condition ? expression1 for true : expression2 for false
    // x = y > 7 ? 25 : 50 
    // result x = 25

    return 0;
}











