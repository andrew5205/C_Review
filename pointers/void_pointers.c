
#include <stdio.h>

// type name void means absence of any type

int main(void)
{
    int i = 10;
    float f = 12.35;
    char ch = 'k';

    // pointer is type of Void - need to know data type while referencing it: *(type*)VariableName 
    void *Vptr;

    Vptr = &i;
    printf("Value of i = %d\n", *(int*)Vptr);               // Value of i = 10

    Vptr = &f;
    printf("Value of f = %.2f\n", *(float*)Vptr);           // Value of f = 12.35

    Vptr = &ch;
    printf("Value of ch = %c\n", *(char*)Vptr);             // Value of ch = k

    return 0; 
} 






