
#include <stdio.h>

// accessing data by means of only variables is very limiting 
// with pointers, can access any location - treate any address of memory as a variable 
// perform arithmetic with pointers 

// int number = 99;
// int *pNumber = &number;

// &number is an address 



//   pNumber 
// ----------
// |  1008  |    <------------------- &number 
// ----------                            |
//                                       |
//                                     Address: 1008 
//                                       |
//                                       |
//                                     number 
//                                 -------------
//                                 |    99     |
//                                 -------------


// initial to NULL make sure it does not point to anything
// int *pi = NULL;            // pointer to an integer variable 
// char *pc = NULL;           // pointer to a char variable 
// float  *pf, *pg;    // pointer to float variable 


// %p is a format specidier for pointer

// address operator: &
// int number = 99;
// int *pNumber = &number;
// printf("pNumber value is: %p", pNumber);     // in Hex


// int number = 15;
// int *pNumber = &number;
// int result = 0;

// result = *pNumber + 5;      // result = 15 + 5


// printf("The size of the pNumber is %d byte\n", (int)sizeof(pNumber));


