#include <stdio.h>
#include <stdlib.h>

void exchangeWeek(int*, int*);

int main(){
    int pers1=31;
    int pers2=25;

    printf("Before exchange:\n");
    printf("Holiday week person 1: wk%d & person 2: wk%d\n", pers1, pers2);
    exchangeWeek(&pers1,&pers2);
    printf("After exchange:\n");
    printf("Holiday week person 1: wk%d & person 2: wk%d\n", pers1, pers2);
   
    printf("\n");
    return EXIT_SUCCESS;
}

void exchangeWeek(int* wk1, int* wk2){
    int temp=*wk1;
    *wk1=*wk2;
    *wk2=temp;
    return;
}
