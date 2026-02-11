#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#define N 10

void fillArray(char arr[], int len){
    srand(time(NULL));
    
    for(int i=0; i<len;i++){
        arr[i]=rand()%26+'A';
    }
    return;
}
void printArray(char arr[], int len){
    for(int i=0; i<len; i++){
        printf("%c ",arr[i]);
    }
    printf("\n");
    return;
}
int bubbleSort(char arr[], int len){
    char temp;
    int swaps=0;
    for (int i=0; i < len-1 ; i++){
        for (int j=i+1; j < len ; j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                swaps++;
            }
        }
    }
    return swaps;
}
int bubbleSort2(char arr[], int len){
    bool sorted=false;
    char temp;
    int swaps=0;
    while(!sorted){
        for (int i=0; i < len-1 ; i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp; 
                swaps++;
                //printf("%d - %c <--> %c -- %d:    ",swaps, arr[i],arr[i+1], i);
                //printArray(arr,N);
                i=-1; //i++ resets to 0
            }
            // no more swaps detected last loop
            if(i==len-2){
                sorted=true;
            }
        }    
    }
    return swaps;
}
int selectionSort(char arr[], int len){
    int swaps=0;
    int min=0;
    char temp;
    for (int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        swaps++;
        min=i+1;        
    }

    return swaps;
}


int main(){
    char input[N];
    int swaps=0;
    //char input[]={'U', 'U', 'E', 'A', 'R', 'V', 'R', 'Q', 'Q', 'G'};
    fillArray(input,N);
    printArray(input,N);
    swaps=selectionSort(input,N);
    printArray(input,N);
    printf("%d swaps were needed \n", swaps);
    return EXIT_SUCCESS;
}