#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

void asciiString(char word[]){
    int index=0;
    while(word[index]!='\0'){
        printf("%d ",word[index]);
        index++;
    }
    printf("\n");
    return;
}

int main(){
    char input[] = "AB%!#$DCC";
    asciiString(input);
    return EXIT_SUCCESS;
}