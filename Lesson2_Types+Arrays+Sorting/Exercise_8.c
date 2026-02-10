#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int sum=0;
    double count=10000.0;
    int min=54;
    int max=99;
    int r=0;
    for(int i=0; i< count; i++){
        r=rand()%(max-min)+min;
        printf("Number %d: %d\n",i,r);
        sum+=r;
    }
    printf("The average is: %.2f\n",sum/count);
    return EXIT_SUCCESS;
}