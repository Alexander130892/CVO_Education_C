#include <stdio.h>
#include <stdlib.h>

float average(float a, float b){
    return ((a+b)/2);
}

int main(){
    float getal1 = 231.43;
    float getal2= 1123.90;
    printf("Het gemiddelde van %.2f en %.2f is %.2f\n", getal1, getal2, average(getal1, getal2));
    return EXIT_SUCCESS;
}