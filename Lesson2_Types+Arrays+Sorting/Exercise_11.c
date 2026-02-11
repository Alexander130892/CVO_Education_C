#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#define max_rows 3
#define max_colls 7

int sumMatrix(int matrix[max_rows][max_colls]){
    int sum=0;
    for(int i=0;i<max_rows;i++){
        for(int j=0;j<max_colls;j++){
            sum+=matrix[i][j];
        }
    }
    return sum;
}

int main(){
    srand(time(NULL));
    int min=30;
    int max=300;
    int r=0;
    int matrix[max_rows][max_colls];
    for(int i=0; i< max_rows; i++){
        for(int j=0; j < max_colls ; j++){
            r=rand()%(max-min)+min;
            matrix[i][j]=r;
            printf("| %4d ", matrix[i][j]);
        }
        printf("|\n");
        
    }
    printf("The sum of all elements is equal to: %d\n", sumMatrix(matrix));
    return EXIT_SUCCESS;
}