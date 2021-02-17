
#include <stdio.h>


// array notation
int arraySum(int array[], const int n){
    int sum = 0; 
    int *ptr;
    int *const arrayEnd = array + n;

    // ptr point @ array, address, starting point 
    // ptr loop till end of the address arrayEnd, which is also an address 
    // for( ptr = &array[0]; ptr < arrayEnd; ++ptr)
    for( ptr = array; ptr < arrayEnd; ++ptr){
        sum += *ptr;        // sum up all element of the value
    }
    return sum;
}


int main(void)
{
    int arraySum(int array[], const int n);
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(values, 10));
    return 0;
}
// ********************************************************************************** //



// pointer notation
// skip the init
int arraySum(int *array, const int n){
    int sum = 0;
    int *const arrayEnd = array + n;

    for( ; array < arrayEnd; ++array){
        sum += *array;
    }
    return sum;
}

int main(void){
    int arraySum(int *array, const int n);
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(values, 10));
    return 0;
}




