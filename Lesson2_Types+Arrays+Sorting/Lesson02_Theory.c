//Testfile to test the theory
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <time.h>

enum weekday{
    MONDAY=1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};
void printArray(int arr[], int size);

int main(){
    //intx_t / signed_unsigned
// ! %d vs %u
    int8_t a=-17;
    printf("8-bit integer: %d\n", a);
    int16_t smallNumber = -32000;
    uint16_t largeNumber = 65000;
    printf("Signed int16_t: %d\n", smallNumber);
    printf("Unsigned int16_t: %d\n", largeNumber);

    // Chars
// ! %c for chars
// ! ASCII is 7 bit-standard (1 parity) > Extended ASCII (8-bit) multiple 'standards'
    char c ='A';
    unsigned char d = 97;
    printf("Char c als getal: %d\n", d);
    printf("Char c as a character: %c\n", d);
    
    // Booleans
// ! Any non-zero value = true
    bool e = true;
    bool f = false;
    printf("Waarde van a: %d\n", e);
    printf("Waarde van b: %d\n", f);

    // Consts
//! Alternate - #define PI 3.14 -- preprocessor will replace
    const int MAX_COUNT=10;
    printf("The maximum value is: %d\n", MAX_COUNT);

    // Enums
// ! Useful for readable iteration
// ! Explicit values can be assigned (cfr. dict)
    enum weekday today = WEDNESDAY;
    printf("Today is day number %d\n", today);

    // rand()
// ! pseudo rand
// ! seed before rand 
    srand(time(NULL));
    printf("RAND_MAX = %d\n", RAND_MAX);
    int max=170;
    int min=10;
    int r=rand()%(max-min)+min;
    printf("Random number: %d\n", r);

    // Arrays
    int number[]={1,2,3,4,5};
    for (int i=0;i<5;i++){
        printf("number[%d] = %d\n",i, number[i]);
    }
    int matrix[2][3]={
        {11,12,13},
        {21,22,23}
    };
    printf("Element on row 1, collumn 2: %d\n", matrix[1][2]);
    char naam[]="Alexander";
    printf("My string: %s\n", naam);
    
    int values[]={10, 20 ,30, 40, 50};
    printArray(values,5);
    
    
    return EXIT_SUCCESS;
}

void printArray(int arr[], int size){
    for (int i =0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return;
}