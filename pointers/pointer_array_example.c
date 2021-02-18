
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char multiple[] = "a string";
    char *p = multiple;

    for( i = 0; i < strlen(multiple); ++i){
        printf("multiple[%d] = %c  *(p+%d) = %c &multiple[%d] = %p p+%d = %p\n",i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);
    }
    return 0;
}

// multiple[0] = a  *(p+0) = a &multiple[0] = 0x7ffeec6066cf p+0 = 0x7ffeec6066cf
// multiple[1] =    *(p+1) =   &multiple[1] = 0x7ffeec6066d0 p+1 = 0x7ffeec6066d0
// multiple[2] = s  *(p+2) = s &multiple[2] = 0x7ffeec6066d1 p+2 = 0x7ffeec6066d1
// multiple[3] = t  *(p+3) = t &multiple[3] = 0x7ffeec6066d2 p+3 = 0x7ffeec6066d2
// multiple[4] = r  *(p+4) = r &multiple[4] = 0x7ffeec6066d3 p+4 = 0x7ffeec6066d3
// multiple[5] = i  *(p+5) = i &multiple[5] = 0x7ffeec6066d4 p+5 = 0x7ffeec6066d4
// multiple[6] = n  *(p+6) = n &multiple[6] = 0x7ffeec6066d5 p+6 = 0x7ffeec6066d5
// multiple[7] = g  *(p+7) = g &multiple[7] = 0x7ffeec6066d6 p+7 = 0x7ffeec6066d6




