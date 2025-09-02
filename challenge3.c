#include <stdio.h>

int main() {
    int km;
    float yard;

    printf("Entrer la messure en Km pour le transformer en yard : ");
    scanf("%d" , &km);
    yard = km * 1093.61;
    printf("Votre mesure en yarrd c'est : %.2f yard" , yard);
    return 0;
}