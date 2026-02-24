#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define COUNT 50

void randomArray(int[], int);
void printArray(int[], int);
void selectionSort(int [], int);
int binarySearch(int [], int, int, int*);

int main(void){
    int nr_steps=0,target;
    printf("Give the target number:\n");
    scanf("%d",&target);
    printf("The target number is: %d\n", target);
    int array[COUNT];
    randomArray(array, COUNT);
    printArray(array, COUNT);
    selectionSort(array, COUNT);
    printArray(array, COUNT);

    printf("Result of search: %d in %d steps\n", binarySearch(array, COUNT, target, &nr_steps), nr_steps);
    return EXIT_SUCCESS;
}

void randomArray(int arr[], int len){ //create random array
    srand(time(NULL));
    for(int i=0;i<len;i++){
        arr[i]=rand()%100;
    }
}
void printArray(int arr[], int len){ //create random array
    printf("[");
    for(int i=0;i<len-1;i++){
        printf("%d, ", arr[i]);
    }
    printf("%d]\n",arr[len-1]);
}
void selectionSort(int arr[], int len){//selectionSort - Small to Large
    int temp, min;
    for (int i = 0; i < len ; i++){
        min = i;
        for (int j = i; j < len ; j++){
            if (arr[j]<arr[min]){
                temp=arr[j];
                arr[j]=arr[min];
                arr[min]=temp;
            }
        } 
    }
    return;
}
int binarySearch(int arr[], int len, int target, int* steps){
    int lp=0,rp=len-1;
    int cnt=0;
    while(lp<=rp){
        int mid = (lp+rp)/2;
        cnt++;
        if(arr[mid] == target){
            *steps=cnt;
            return mid;
        }else if (arr[mid] < target){
            lp=mid+1;
        }else
            rp=mid-1;
    }
    return -1;
};