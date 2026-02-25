#include <stdio.h>
#include <stdlib.h>




int main(){
    
    int arr[]={10,20,30};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        printf("%dth value traditionally: %d\t with pointer arithmetic: %d\n", i+1,arr[i] ,*(arr+i));
    }

    return EXIT_SUCCESS;
}
