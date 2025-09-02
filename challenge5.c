#include <stdio.h>

int main() {
    int temperature;

    printf("Entrer la temperature de l'eau en c : ");
    scanf("%d" , &temperature);

    if (temperature < 0) {
        printf("L'eau est solide.");
    } else if (temperature >= 0 && temperature < 100) {
        printf("L'eau est liquide.");
    } else if (temperature >= 100) {
        printf("L'eau est vapeur.");
    }
    return 0;
}