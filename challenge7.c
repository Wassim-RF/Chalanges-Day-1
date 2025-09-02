#include <stdio.h>

int main() {
    int  num1 , num2 , num3 ;
    float moyenne;

    printf("Entre le premiere nombre : ");
    scanf("%d" , &num1);
    printf("Entrer le deuxieme nombre : ");
    scanf("%d" , &num2);
    printf("Entre le troixsieme nombre : ");
    scanf("%d" , &num3);
    moyenne = (num1 * 2 + num2 * 3 +  num3 * 5) / (2 + 3 + 5);
    printf("Votre moyenne avec cofficient specifique est : %.2f" , moyenne);
    return 0;
}