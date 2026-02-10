//Testfile to test the theory
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

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

    return EXIT_SUCCESS;
}