
#include <stdio.h>

int main(void)
{
    int number = 0;
    int *pNumber = NULL;

    number = 10;

    printf("Number's address is %p\n", &number);                    // Number's address is 0x7ffee88626d8
    printf("number's value is %d\n", number);                       // number's value is 10


    pNumber = &number;
    // %p use (void*) while referencing pointer address
    printf("pNumber's address is %p\n", (void*)&pNumber);           // pNumber's address is 0x7ffee88626d0
    printf("pNumber's size is %d\n", sizeof(pNumber));              // pNumber's size is 8
    printf("pNumber's value is %p\n", pNumber);                     // pNumber's value is 0x7ffee88626d8
    printf("value pointed to: %d\n", *pNumber);                     // value pointed to: 10

    return 0; 
}




