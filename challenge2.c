#include <stdio.h>

int main() {
    float temperatureC;
    double temperaturek;

    printf("Entrer la temperature en C : ");
    scanf("%f" , &temperatureC);
    temperaturek = temperatureC + 273.15;
    printf("La temperature en C c'est %.2f et en K c'est %.2f ." , temperatureC , temperaturek);
    return 0;
}