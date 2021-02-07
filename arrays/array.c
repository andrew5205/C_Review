
#include <stdio.h>

// can't change size of array after creation
// data type must be the same
// [size]

int main()
{
    // create an array called grade with size of 10
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    printf("\nEnter 10 grades:\n");

    int i;
    for(i =0; i < count; ++i)
    {
        printf("%2u>", i+1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    // change sum data type to float 
    average = (float)sum / count;
    printf("\nAverage of the ten grades is: %.2f\n", average);

    return 0;
}




