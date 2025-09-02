#include <stdio.h>

int main() {
    int larg , lon;
    int surface ;

    printf("Entrer la longueur du rectangle : ");
    scanf("%d" , &lon);
    printf("Entrer la largeur du rectangle : ");
    scanf("%d" , &larg);
    surface = lon * larg;
    printf("La volume de votre rectangle : %d" , surface);
    return 0;
}