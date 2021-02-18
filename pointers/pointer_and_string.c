
#include <stdio.h>
#include <string.h>


void copyString(char *to, char *from)
{
    // loop through string by using pointer
    while( *from )       // *from pointer not point to NULL
        *to++ = *from++;
    
    *to = '\0';
}



int main(void)
{
    char string1[] = "A string to be copyed";
    char string2[50];

    copyString(string2, string1);
    printf("%s\n", string2);        // A string to be copyed
    return 0;
}




