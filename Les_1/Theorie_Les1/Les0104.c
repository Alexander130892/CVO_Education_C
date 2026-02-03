#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=6;
    int b=4;
    if (a>b){
        printf("a is groter dan b\n");
    } else{
        printf("a is kleiner of gelijk aan b\n");
    }

    for (int i=0; i<5; i++){
        printf("Waarde van i: %d\n", i);
    }
    int teller=0;
    while (teller<3){
        printf("Teller: %d\n", teller);
        teller++;
    }
    return EXIT_SUCCESS;
}