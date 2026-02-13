#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

#define N 30
#define MIN 0
#define MAX 100

void randomArray(int arr[]){
    srand(time(NULL));
    for (int i=0;i<N;i++){
        arr[i]=rand()%(MAX-MIN)+MIN;
    }
    return;
}
void printArray(int arr[], int len){
    for(int i=0; i<len; i++){
        printf("%d, ",arr[i]);
    }
    printf("\n");
    return;
}
int bubbleSort(int arr[], int len, bool min_first){
    int swaps=0;
    int temp=0;
    if (min_first){
        for (int i = 0; i<len-1;i++){
            for(int j=0;j<len-1-i;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swaps++;
                }
            }
        }
    }else{
       for (int i = 0; i<len-1;i++){
            for(int j=0;j<len-1-i;j++){
                if(arr[j]<arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swaps++;
                }
            }
        } 
    }
    return swaps;
}
int selectionSort(int arr[], int len, bool min_first){
    int swaps;
    int temp=0;
    int min_i=0;
    if(min_first){
        for (int i = 0; i<len-1;i++){
            min_i=i;
            for (int j=i+1;j<len;j++){
                if(arr[j]<arr[min_i]){
                    min_i=j;
                }
            }
            if(i!=min_i){
                temp=arr[i];
                arr[i]=arr[min_i];
                arr[min_i]=temp;
                swaps++;
           }
        }
    }else{
        for (int i = 0; i<len-1;i++){
            min_i=i;
            for (int j=i+1;j<len;j++){
                if(arr[j]>arr[min_i]){
                    min_i=j;
                }
            }
            if(i!=min_i){
                temp=arr[i];
                arr[i]=arr[min_i];
                arr[min_i]=temp;
                swaps++;
           }
        }
    }
    return swaps;
}

int main(){
    int input[N];
    int swaps=0;
    bool minFirst=false;
    randomArray(input);    
    printArray(input,N);
    swaps=selectionSort(input,N,minFirst);
    //swaps=bubbleSort(input,N,minFirst);
    printArray(input,N);
    printf("%d swaps were needed \n", swaps);
    return EXIT_SUCCESS;
}