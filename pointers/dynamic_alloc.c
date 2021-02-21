
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// under stdlib.h
// malloc()
// calloc()
// realloc()


int main(void){

    char *str = NULL;
    // init memory allocation 
    str = (char*)malloc(15*sizeof(char));
    strcpy(str, "Andrew");
    printf("String = %s, Address = %p\n", str, str);        // String = Andrew, Address = 0x7fd8f5c05a10

    // Reallocating memory 
    str = (char*)realloc(str, 25 * sizeof(char));
    strcat(str, ".com");
    printf("String = %s, Address = %p\n", str, str);        // String = Andrew.com, Address = 0x7fd8f5c05a10

    free(str);

    return 0; 
}



// malloc() - return a pointer of type pointer to void, so have to cast 
// use cast (int*), which converts the address returned by the function to the type pointer to int 


// // pNumber will point at the first location of 100 byte 
// // can hold 25 int values, int requires 4 byte, but system may vary
// int *pNumber = (int*)malloc(100);

// // use sizeof() operator, to each type, more flexible
// int *pNumber = (int*)malloc(25*sizeof(int));
// // check right after allocate
// if(!pNumber){
// }

// // to release memory 
// free(pNumber);
// pNumber = NULL;





// calloc() - given size, 

// // all memory area initialized to 0
// int *pNumber = (int*)calloc(75, sizeof(int));


// realloc() - re size memory 




