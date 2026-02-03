#include <stdio.h>

int main(){
    int aantal = 5;
    float prijs = 12.99;
    char munt = '$';

    printf("Aantal: %d\n", aantal);
    printf("Prijs: %.2f %c", prijs, munt);
    return 0;
}