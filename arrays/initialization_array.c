
#include <stdio.h>

// int counter = {0, 1, 2, 3, 4, 5};

// if fewer value are specified, the remaining values are set to ZERO

// in different order
// int arr[500] = { [2] = 500.5, [10] = 100.99, [333] = 99.99};


// repeat same value in array - not in C, unless its default 0

// numpy.repeat(3, 10)
// array([3,3,3,3,3,3,3,3,3,3])


#define MONTH 12

int main()
{
    int days[MONTH] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // int days[MONTH] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    int index;

    for(index = 0; index < MONTH; index++)
    {
        printf("Month %d has %2d days\n", index +1, days[index]);
    }
    return 0; 
}




