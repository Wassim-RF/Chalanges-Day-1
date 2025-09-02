#include <stdio.h>

int main() {
    int kparh ;
    float mpars ;

    printf("Entrer une vitesse par km/h : ");
    scanf("%d" , &kparh);
    mpars = kparh * 0.27778;

    printf("%d c'est %.2f m/s." ,kparh , mpars );
    return 0;
}