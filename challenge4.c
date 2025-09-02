#include <stdio.h>

int main() {
    int kparh ;
    float mpars ;

    printf("Entrer une vitesse par k/m : ");
    scanf("%d" , &kparh);
    mpars = kparh * 0.27778;

    printf("%d c'est %.2f m/s." ,kparh , mpars );
    return 0;
}