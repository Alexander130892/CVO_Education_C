#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

#define N 10

void printArray(char arr[][20], int len){
    for(int i=0; i<len; i++){
        printf("%s, ",arr[i]);
    }
    printf("\n");
    return;
}
int bubbleSort(char arr[][20], int len){
    char temp[20];
    int swaps=0;
    for (int i=0; i < len-1 ; i++){
        for (int j=0; j < len-i-1 ; j++){
            if(strcmp(arr[j],arr[j+1])>0){
                strcpy(temp,arr[j+1]);
                strcpy(arr[j+1],arr[j]);
                strcpy(arr[j],temp);
                swaps++;
            }
        }
    }
    return swaps;
}
int selectionSort(char arr[][20], int len){
    int swaps=0;
    int min=0;
    char temp[20];
    for (int i=0;i<len-1;i++){
        min=i;  
        for(int j=i+1;j<len;j++){
            if(strcmp(arr[j],arr[min])<0){
                min=j;
            }
        }
        if(min!=i){
            strcpy(temp,arr[i]);
            strcpy(arr[i],arr[min]);
            strcpy(arr[min],temp);
            swaps++;
        }         
    }
    return swaps;
}

int main(){
    char input[N][20]={"Test", "Probeersel", "Alexander", "AAAlexander", "@Lexander", "Meter", "Headset", "Volvo", "Nog Twee", "Laatste"};
    int swaps=0;
    printArray(input,N);
    swaps=selectionSort(input,N);
    printArray(input,N);
    printf("%d swaps were needed \n", swaps);
    return EXIT_SUCCESS;
}