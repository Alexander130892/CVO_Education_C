#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int sum=0;
    int max=100;
    int r=0;
    for(int i=0; i< 1000; i++){
        r=rand()%max;
        printf("Number %d: %d\n",i,r);
        sum+=r;
    }
    printf("The average is: %.2f\n",sum/1000.0);
    return EXIT_SUCCESS;
}