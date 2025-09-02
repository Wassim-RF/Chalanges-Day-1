#include <stdio.h>

int main() {
    int num ;

    printf("Entrer un nombre de 4 chiffre : ");
    scanf("%d" , &num);

    printf("L'inverse de votre nombre est : ");
    printf("%d" , num % 10);
    printf("%d" , (num / 10) % 10);
    printf("%d" , (num / 100) % 10);
    printf("%d" , num / 1000);
    return 0;
}