
#include <stdio.h>


int main(void)
{
    long num1 = 0L;         // 0
    long num2 = 0L;         // 0
    long *pnum = NULL;      // 0x0

    pnum = &num1;           // get address of num1 
    *pnum = 2L;             // use pointer, set num1 to 2
    ++num2;                 // increase num2                            -> became 1
    num2 += *pnum;          // by using pointer, add num1 to num2       -> became 2 + 1 = 3

    pnum = &num2;           // pnum get new address     // get address of num2 - pointer point @ num2 now 
    ++*pnum;                // increase num2 increasingly

    printf("num1 = %ld, num2 = %ld, *pnum = %ld, *pnum + num2 = %ld\n", num1, num2, *pnum, *pnum + num2);
    // num1 = 2, num2 = 4, *pnum = 4, *pnum + num2 = 8

    return 0; 
}







