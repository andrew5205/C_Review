
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40,50};
    int *arrPtr;

    // point to the first element in arrar
    arrPtr = &arr[0];

    printf("First element in arr is %d\n", *arrPtr);

    for(int i = 0; i < 5; i++){
        printf("%d\n", arrPtr[i]);
    }
    return 0; 
}


