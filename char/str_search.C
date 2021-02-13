
#include <stdio.h>
#include <string.h>

// searching a string 
// strchr() - search char 
// strstr() - search sub-string

// tokenizing a string - 
// a token is a sequence of char within a string that i bounded by a delimiter (space, comma, period)

// breaking a sentence into words is tokening
// strtok() 


// islower()
// isupper()
// isalpha()
// isdigit()


int main()
{
    char str[] = "The quick brown fox";     // string to be searched 
    char ch = 'q';                  // the searched char 
    char *pGot_char = NULL;          // Pointer initialized to NULL

    pGot_char = strchr(str, ch);

    printf("%s\n", pGot_char);        // pGot_char will point to the value: quick brown fox
    printf("%c\n", *pGot_char);       // 
    // **************************************************************************************** //


    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *pFound = NULL;

    pFound = strstr(text, word);

    printf("%s\n", pFound);         // dog has his day
    printf("%c\n", *pFound);        // d
    // **************************************************************************************** //


    char strT[80] = " Hello how are you - my name is - Andrew";
    const char s[2] = "-";
    char *token;

    token = strtok(strT, s);

    while( token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }

    // Hello how are you 
    // my name is 
    // Andrew

    return 0;
}






