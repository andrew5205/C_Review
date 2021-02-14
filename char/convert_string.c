
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// toupper() - return type int 
// tolower() - return type int 

// for(int i = 0; (buf[i] = (char)toupper(buf[i])) != '\0'; i++);

int main()
{
    char text[100];
    char substring[40];

    printf("Enter the string to be searched (less than %d char):\n ", 100);
    scanf("%s", text);

    printf("\n Enter the string sought( less than %d char):\n", 40);
    scanf("%s", substring);

    printf("First print entered: %d", text);
    printf("Second string entered: %d", substring);

    // convert both string to upper case
    // char by char in for loop 
    for(int i =0; (text[i] = (char)toupper(text[i])) != '\0'; i++);
    for(int i =0; (substring[i] = (char)toupper(substring[i])) != '\0'; i++);

    printf("The second string %s found in the first. \n", (strstr(text, substring) == NULL ? "Was not" : "was"));

    return 0; 
}






