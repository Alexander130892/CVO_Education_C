#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float average(float a, float b, float c){
    return ((a+b+c)/3);
}
int main(){
    float getal1, getal2, getal3;
    printf("Geef 3 getallem in: ");
    scanf("%f %f %f", &getal1, &getal2, &getal3);
    printf("Het gemidelde van %.1f, %.1f en %.1f is gelijk aan %.1f\n", getal1, getal2, getal3, average(getal1, getal2, getal3));
    return EXIT_SUCCESS;
}