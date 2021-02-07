
#include <stdio.h>

// switch(expression)
// {
//     case val1:
//         program statement 
//         break;
//     case valn:
//         program statement 
//         break;
//     defualt:
//         program statement 
//         break;
// }


int main()
{
    enum weekday {Monday, Tuesday, Wednesday, THursday, Friday, Saturday, Sunday};
    enum weekday today = Monday;

    switch(today)
    {
        case Sunday:
            printf("Today is Sunday \n");
            break;
        case Monday:
            printf("Today is Monday \n");
            break;
        case Tuesday:
            printf("Today is Tuesday \n");
            break;
        default:
            printf("Whatever day it is !! \n");
    }
    return 0;
}










