#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char namen[4][50]={"Alex", "Jan", "Els", "Bjorn"};
    int age[4]={34,22,45,53};
    int score[4]={92,62,85,43};
    printf("Naam\tLeeftijd\tScore\n");
    for (int i=0; i<sizeof(age) / sizeof(age[0]); i++){
        printf("%s\t%d\t\t%d\n", namen[i], age[i],score[i]);
    }
    return EXIT_SUCCESS;
}