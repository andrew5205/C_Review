

// pass by value - when a function copies the actual value of an argument into the formal parameter of the func 
// pass by reference - copies the address which is used to access the actual arguement used in the call
                        // means the changes made to the parameter affect the passed arguement

#include <stdio.h>
#include <string.h>

// pass by value
void swap( int x, int y){
    int temp; 

    temp = x; 
    x = y;
    y = temp;

    return;
}


// pass by reference 
void swap_pointer( int *x, int *y){
    int temp; 

    temp = *x; 
    *x = *y;
    *y = temp;

    return;
}

int main(void) 
{
    // local variable
    int a = 100; 
    int b = 200;

    printf("Before swap, value of a: %d\n", a);
    printf("Before swap, value of b: %d\n", b);

    swap( a, b);

    printf("After swap, value of a: %d\n", a);
    printf("After swap, value of b: %d\n\n", b);

    // pass by value
    // Before swap, value of a: 100
    // Before swap, value of b: 200
    // After swap, value of a: 100
    // After swap, value of b: 200

    // ************************************************************************* //

    printf("********** below is swap by reference********************\n\n");

    printf("Before swap_by_pointer, value of a: %d\n", a);
    printf("Before swap_by_pointer, value of b: %d\n", b);

    swap_pointer( &a, &b);

    printf("After swap_by_pointer, value of a: %d\n", a);
    printf("After swap_by_pointer, value of b: %d\n", b);

    // Before swap_by_pointer, value of a: 100
    // Before swap_by_pointer, value of b: 200
    // After swap_by_pointer, value of a: 200
    // After swap_by_pointer, value of b: 100

    return 0;
}







