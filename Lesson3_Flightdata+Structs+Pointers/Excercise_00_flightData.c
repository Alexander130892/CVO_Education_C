//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//consts
#define PACKET_COUNT 100
const char parameterNames[10][20]={
    "Throttle", "Flaps", "Speed", "Height", "Altitude", "Fuel", "Temperature", "Pressure", "Heading", "Vertical Speed"
};
const char parameterUnits[10][10] = {
    "%", "deg", "km/h", "ft", "ft", "L", "C", "hPa", "deg", "ft/min"
};
const int parameterAccuracy[10] = { // decimals (e.g. 2 = 0.01 accuracy / 1 = 0.1 accuracy)
    1, 2, 0, 0, 0, 1, 1, 0, 1, 1
};
//Typedefs
typedef enum {
    THROTTLE, FLAPS, SPEED, HEIGHT, ALTITUDE, FUEL, TEMP, PRESSURE, HEADING, VERTICAL_SPEED
}flightParameter;

//Prototype functions
void fakeData(int[][2]);
void printData(int [][2]);

// MAIN
int main(void){
    //init
    int flightData[PACKET_COUNT][2];
    fakeData(flightData);
    printData(flightData);
    
    return EXIT_SUCCESS;
}

//Helper-functions
void fakeData(int matrix[][2]){
    srand(time(NULL));
    for(int i=0; i < PACKET_COUNT ; i++){
        matrix[i][0]=rand()%10;
        int limit = pow(10,3+parameterAccuracy[matrix[i][0]])+1;
        matrix[i][1]=rand() % limit;
    }
    return;
}
void printData(int matrix[][2]){
    printf("Overview incoming flightdata:\n");
    printf("---------------------------------------\n");
    printf("| %-15s | %-8s | %-6s |\n", "Parameter", "Value", "Unit");
    printf("---------------------------------------\n");
    for(int i=0; i < PACKET_COUNT ; i++){
        printf("| %-15s | %8.2f | %-6s |\n", parameterNames[matrix[i][0]], matrix[i][1]/(pow(10.0,parameterAccuracy[matrix[i][0]])), parameterUnits[matrix[i][0]]);
    }
    printf("---------------------------------------\n");
    return;
}