#include <stdio.h>
#include <stdlib.h>



int main(){
    int a,b;
    printf("Voer twee getallen in gescheiden door een spatie, Return of TAB : ");
    scanf("%d %d", &a, &b);
    printf("Je hebt %d en %d ingevoerd.\n", a,b);
    return EXIT_SUCCESS;
}

