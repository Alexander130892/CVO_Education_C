#include <stdio.h>
#include <stdlib.h>


int main(){
    char naam[50];
    printf("Voer je naam in: ");
    scanf("%s", naam);
    printf("Hallo %s!\n", naam);
    return EXIT_SUCCESS;
}

