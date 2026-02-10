#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

enum traffic_light{
    GREEN,
    YELLOW,
    RED,
    DEFECT
};
int main(){
    enum traffic_light color = GREEN;
    for (color=GREEN; color <= DEFECT; color++){
        switch (color)
        {
        case GREEN:
            printf("Go!\n");
            break;
        case YELLOW:
            printf("Carefull...\n");
            break;
        case RED:
            printf("Stop!\n");  
            break;
        case DEFECT:
            printf("Under Construction\n");
        break;
        default:
            break;
        }
    }
    return EXIT_SUCCESS;
}