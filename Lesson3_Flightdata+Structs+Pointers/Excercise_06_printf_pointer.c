#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define SIZE 100

int main(){
    srand(time(NULL));
    int arr[SIZE];
    for(int*p=arr;p<arr+SIZE;p++){
        *p=rand()%10;
        printf("%d, ", *p);
    }
    printf("\n");
    return EXIT_SUCCESS;
}
