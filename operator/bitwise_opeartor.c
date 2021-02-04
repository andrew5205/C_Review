
// bitwise only one symbol
// AND => &
// OR  => |
// XOR  => ^
// left shift => <<
// right shift => >>

// byte = 8 bits 
// int => 4 byte => 32 bits 

#include <stdio.h>

int main()
{
    // use unsigned to present binary format
    // unsigned value can only be positive 
    unsigned int a = 60;        // 0011 1100    // 0000 0000 0000 0000 0000 0000 0011 1100
    unsigned int b = 13;        // 0000 1101    // 0000 0000 0000 0000 0000 0000 0000 1101
    int result = 0;

    result = a & b;             // 0000 1100
    printf("result is: %d \n", result);     //12 

    result = a | b;             // 0011 1101
    printf("result is: %d \n", result);     // 61

    result = a ^ b;             // 0011 0001
    printf("result is: %d \n", result);     // 49

    result = a << 2;            // 1111 0000
    printf("result is: %d \n", result);    // 240

    result = a >> 4;            // 0000 0011
    printf("result is: %d \n", result);    // 3
    return 0;
}





