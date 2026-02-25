#include <stdio.h>
#include <stdlib.h>

int main(){
    int var=5;

    for(int*p=&var;p<&var+5;p++){
        printf("%d, ", *p);
    }
    printf("\n");
    return EXIT_SUCCESS;
}
