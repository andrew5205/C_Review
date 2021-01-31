
#include <stdio.h>

int main()
{
    // create a enum type called 'gender', which has only two value male and female
    enum gender {male, female};

    // myGender is a enum type gender variable
    enum gender myGender;
    // assign a value to variable
    myGender = male;

    enum gender anotherGender = female;

    // display as index in defined enum
    printf("%d", myGender);             // 0
    printf("%d", anotherGender);        // 1


    // break character in single qupte ''
    char newLine = '\n';
    printf("%c", newLine);

    return 0;
}
