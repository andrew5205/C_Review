
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char buf[80];
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0; 

    printf("Enter an interesting string of less then %d char:\n", 100);
    scanf("%s", buf);

    int i = 0; 
    while(buf[i]){
        if(isalpha(buf[i])){
            nLetters++;
        }
        else if(isdigit(buf[i])){
            nDigits++;
        }
        else if(ispunct(buf[i])){
            nPunct++;
        }
        i++;
    }

    printf("\nyour string contained %d letters, %d digits and %d punctuation", nLetters, nDigits, nPunct);
    return 0;
}







