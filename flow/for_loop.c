
#include <stdio.h>

// for(int i = 0; i <= 10; i++)
// {
//     printf("%d", i);
// }

int main()
{
    unsigned int sum = 0LL;
    unsigned int count = 0;

    printf("\nEnter the number of integers you want to sum: ");
    scanf("%u", &count);

    unsigned int i;
    for(i = 1; i <= count; ++i)
    {
        printf("inside loop");
        printf("%u\n", i);
        sum += i;
    }

    printf("\nTotal of the first %u numbers is %llu\n", count, sum);
    return 0;
}



// int i = 0;
// printf("i: %d\n", i);
// printf("i++: %d\n", i++);
// printf("++i: %d\n", ++i);


// i: 0
// i++: 0
// ++i: 2


// i++ -> assign -> increment
// ++i -> increment -> assign


