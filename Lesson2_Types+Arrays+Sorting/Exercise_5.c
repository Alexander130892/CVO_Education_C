#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

enum weekday{
    MONDAY=1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

int main(){
    enum weekday day = TUESDAY;
    printf("This is day number %d\n",day);
    return EXIT_SUCCESS;
}