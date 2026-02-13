#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

#define N 10

void printArray(char arr[N][20], int len){
    for(int i=0; i<len; i++){
        printf("%s, ",arr[i]);
    }
    printf("\n");
    return;
}
int bubbleSort(char arr[N][20], int len, bool min_first){
    char temp[20];
    int swaps=0;
    if(min_first){
        for (int i=0; i< len-1 ; i++){
            for (int j=0 ; j<len-i-1 ; j++){
                if(strcmp(arr[j+1],arr[j])<0){
                    strcpy(temp,arr[j+1]);
                    strcpy(arr[j+1],arr[j]);
                    strcpy(arr[j], temp);                    
                    swaps++;
                }
            }
        }
    }else{
        for (int i=0; i< len-1 ; i++){
            for (int j=0 ; j<len-i-1 ; j++){
                if(strcmp(arr[j+1],arr[j])>0){
                    strcpy(temp,arr[j+1]);
                    strcpy(arr[j+1],arr[j]);
                    strcpy(arr[j], temp);                    
                    swaps++;
                }
            }
        }
    }
    return swaps;
}
int selectionSort(char arr[N][20], int len, bool min_first){
    int swaps=0;
    int min_i=0;
    char temp[20];
    if(min_first){
        for(int i=0;i<len-1;i++){
            min_i=i;
            for(int j=i+1;j<len;j++){
                if(strcmp(arr[j], arr[min_i])<0){
                    min_i=j;
                }
            }
            if(min_i!=i){
                strcpy(temp,arr[min_i]);
                strcpy(arr[min_i],arr[i]);
                strcpy(arr[i],temp);
                swaps++;
            }
        }
    }else{
        for(int i=0;i<len-1;i++){
            min_i=i;
            for(int j=i+1;j<len;j++){
                if(strcmp(arr[j], arr[min_i])>0){
                    min_i=j;
                }
            }
            if(min_i!=i){
                strcpy(temp,arr[min_i]);
                strcpy(arr[min_i],arr[i]);
                strcpy(arr[i],temp);
                swaps++;
            }
        }
    }
    return swaps;
}

int main(){
    char input[N][20]={"Test", "Probeersel", "Alexander", "AAAlexander", "@Lexander", "Meter", "Headset", "Volvo", "Nog Twee", "Laatste"};
    int swaps=0;
    bool minFirst=false;  
    printArray(input,N);
    swaps=selectionSort(input,N,minFirst);
    // swaps=bubbleSort(input,N,minFirst);
    printArray(input,N);
    printf("%d swaps were needed \n", swaps);
    return EXIT_SUCCESS;
}