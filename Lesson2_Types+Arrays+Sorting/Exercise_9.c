#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int size=10;
    int min=0;
    int max=1000;
    int r=0;
    int arr[size];
    for(int i=0; i< size; i++){
        r=rand()%(max-min)+min;
        arr[i]=r;
    }
    for(int i=size-1; i>=0; i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}