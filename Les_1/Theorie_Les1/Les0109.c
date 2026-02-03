#include <stdio.h>
#include <stdlib.h>


int main(){
    char naam[50];
    int leeftijd;
    float lengte;
    printf("Voer je naam, leeftijd en lengte in, gescheiden door spaties: ");
    scanf("%s %d %f", naam, &leeftijd, &lengte);
    
    printf("Naam: %s\n", naam);
    printf("Leeftijd: %d\n", leeftijd);
    printf("Lengte: %.2f meter\n", lengte);
    return EXIT_SUCCESS;
}

