#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float average(float a, float b, float c){
    return ((a+b+c)/3);
}
int main(){
    int hours, mins, secs;
    printf("Geef een aantal seconden: ");
    scanf("%d", &secs);
    hours = secs / (60*60);
    mins = (secs - 60*60*hours) / 60;
    secs = (secs - 60*60*hours) % 60;
    printf("Dat is gelijk aan %d uren, %d minuten en %d seconden\n", hours, mins, secs);
    return EXIT_SUCCESS;
}