#include <stdio.h>
#include <math.h>

int main() {
    int  num1 , num2 , num3 ;
    int mult ;
    float racine3 ;

    printf("Entre le premiere nombre : ");
    scanf("%d" , &num1);
    printf("Entrer le deuxieme nombre : ");
    scanf("%d" , &num2);
    printf("Entre le troixsieme nombre : ");
    scanf("%d" , &num3);
    mult = num1 * num2 * num3 ;
    racine3 = cbrt(mult);
    printf("Racine troisieme de (%d * %d * %d) = %.2f" , num1 , num2 , num3 , racine3);
    return 0;
}