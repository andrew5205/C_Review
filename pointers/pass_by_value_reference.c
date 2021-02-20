
#include <stdio.h>
#include <stdlib.h>

void passByValue(int i){
    i = 99;
    return;
}

void passByAddress(int *i){
    *i = 65;
    return;
}




int main(){

    int tuna = 20;

    // passByValue(20);
    passByValue(tuna);
    printf("Passing by value, tuna is now %d\n", tuna);     // Passing by value, tuna is now 20

    passByAddress(&tuna);
    printf("Passing by address, tuna is now %d\n", tuna);   // Passing by address, tuna is now 65

    return 0; 
}






