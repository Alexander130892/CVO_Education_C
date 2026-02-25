#include <stdio.h>
#include <stdlib.h>


int main(){
    int x = 10;
    int *ptr=&x;

    printf("The value of x is: %d\n", x);
    printf("The address of x is: %p\n", &x);
    printf("pointer ptr contains address of x: %p\n", ptr);
    printf("The value at address ptr is: %d\n", *ptr);
    

    int arr[]={10,20,30};
    int *p=arr;
    for(int i=0;i<10;i++){//deliberate out of bounds
        printf("%dth value: %d\n", i+1, *(p+i));
    }
    return EXIT_SUCCESS;
}
