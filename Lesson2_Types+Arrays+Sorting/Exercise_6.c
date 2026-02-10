#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef enum errors{
    INPUT_ERROR=-1,
    NO_TOOLS=0,
    WRONG_FILE=1
}error;

int main(){
    error error_code=WRONG_FILE;
    return EXIT_SUCCESS;
}