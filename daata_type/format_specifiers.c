
// Type                    Constant            printf char 
// ------------------------------------------------
// char                    'a', '\n'           %c
// _Bool                   0, 1                %i, %u
// short int                                   %hi, %hx, %ho
// unsigned short int                          %hi, %hx, %ho
// int                     1, 23, 999          %i, %x, %o
// unsigned int            12u, 0XFFu          %i, %x, %o
// long int                12L, 0xffeeUL       %i, %x, %o
// long long int           0xe5e5e5LL          %lli, %llx, &llo
// unsigned long long int  12ull               %lli, %llx, &llo
// float                   12.938271           %f, %e, %g, %a
// double                  12.23, 3e+15        %f, %e, %g, %a
// long double             13.241, 3.1e-5l     %LF, $Le, %Lg
// string                  "hello"             %s




#include <stdio.h>

int main()
{
    int     integerVar = 100;
    float   floatVar = 331.7958291;
    double  doubleVar = 8.44e+11;
    char    charVar = 'W';
    _Bool   boolVar = 0;

    printf("integerVar = %i \n", integerVar);
    printf("floatVar = %f \n", floatVar);
    printf("floatVar = %2.f \n", floatVar);
    printf("floatVar = %.2f \n", floatVar);
    printf("doubleVar = %e \n", doubleVar);
    printf("doubleVar = %g \n", doubleVar);
    printf("boolVar = %i \n", boolVar);

    return 0;

}













