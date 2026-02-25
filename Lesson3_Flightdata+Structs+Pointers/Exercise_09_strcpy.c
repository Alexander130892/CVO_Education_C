#include <stdio.h>
#include <stdlib.h>

void copyString(char*, char*);

int main(){
    char src[]= "Please copy me!";
    int len = sizeof(src)/sizeof(src[0]);
    char target[len]; 
  
    copyString(src, target);

    
    printf("Original: %s\n", src);
    printf("Copy: %s\n", target);
    return EXIT_SUCCESS;
}

void copyString(char* source, char* target){
    while(*source != '\0'){
    *target++ = *source++;
    }
    *target = '\0'; //terminate to avoid infinite loop in printf in main 
    return;
}