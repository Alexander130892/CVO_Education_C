#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float calcSum(float a, float b){
    return a+b;
}
int main(){
    //seeding rng
    srand(time(NULL));
    //Seeding: Always use srand(time(NULL)); once at the beginning of your main() function. 
    //If you don't, rand() will produce the same sequence of numbers every time you run the program.
    
    // Generate a random float between 0.0 and 10.0
    for(int i=0; i<3;i++){    
        float getal1 = 10*(float)rand() / RAND_MAX;
        float getal2 = 10*(float)rand() / RAND_MAX;
        printf("De som van %.1f en %.1f is: %.1f\n", getal1, getal2, calcSum(getal1,getal2));
    }
    return EXIT_SUCCESS;
}