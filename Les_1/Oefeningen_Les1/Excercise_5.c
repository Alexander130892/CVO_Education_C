#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float calcSum(float a, float b){
    return a+b;
}
int main(){
    float temp_c=20;
    float temp_f= temp_c *(9.0/5) +32;
    printf("Een temperatuur van %.1fC is equivalent met %.1fF\n", temp_c, temp_f);
    return EXIT_SUCCESS;
}