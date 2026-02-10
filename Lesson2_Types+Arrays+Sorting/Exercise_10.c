#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int max_rows=9;
    int max_colls=5;
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
    return EXIT_SUCCESS;
}