#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 7;
    int b = 4;

    printf("a gedeeld door b = %d, voorgesteld als int. \n", a/b);
    printf("a gedeeld door b = %f, voorgesteld als float. \n", (float) a/b);
    printf("a gedeeld door b = %.2f, voorgesteld als float met 2 decimalen. \n", (float) a/b);
    
    return EXIT_SUCCESS;
}