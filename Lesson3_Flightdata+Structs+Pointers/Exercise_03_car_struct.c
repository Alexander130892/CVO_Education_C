#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char* make;
    int year;
    int mileage;
}car;


int main(){
    car cars[3]={
        {"Volvo XC40", 2023, 35412},
        {"Polestar 2", 2022, 12240},
        {"Skoda Octavia", 2020, 40124}
    };

    printf("3 cars available for sale: \n");
    for(int i=0;i<3;i++){
        printf("%d.\t%s built in %d, mileage: %d km\n", i+1, cars[i].make, cars[i].year, cars[i].mileage);
    }
    return EXIT_SUCCESS;
}
