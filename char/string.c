#include <stdio.h>
#include <string.h>

// #include <string.h>
// // getting length of a string 
// strlen()

// // copy one char string to another 
// strcpy() 
// strncpy() - check size before fit in 

// // concatenation two string 
// strcat()
// strncat()

// // determining if two string are equal 
// strcmp()
// strncmp()


int main()
{
    char src[50], dest[50];

    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    printf("%s\n", src);
    printf("%d\n", strlen(src));        // 14 
    printf("%s\n", dest);
    printf("%d\n", strlen(dest));       // 20
    // ************************************************************************************************* //


    char temp[50];

    // 3 arg in strncpy(dest, src, sizeof())
    strncpy(temp, src, sizeof(temp));
    printf("%s\n", temp);
    // ************************************************************************************************* //


    // strcat(org, addon, sizeof())
    strncat(src, dest, 15);
    printf("Final cat string is: %s\n", src);     // Final cat string is: This is sourceThis is destina
    // ************************************************************************************************* //


    // strcmp()
    // if return < 0 indicates str1 < str2 
    // if return > 0 indicates str1 > str2 
    char a[] = "abcde";
    char b[] = "abcdefghi";
    char c[] = "this is a huge long string";
    printf("%d\n",strcmp(a, b));      // -112    str1 < str2 
    printf("%d\n", strcmp(c,b));      // 19    tr1 > str2 


    // if (strncmp("astronomy", "astro", 5) == 0) {
    //     printf("Found");
    // }


    return 0; 
}





