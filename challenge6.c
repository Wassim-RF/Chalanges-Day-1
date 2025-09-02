#include <stdio.h>

int main() {
    int num1 , num2 ;
    int add , sub , mult ;
    float div;

    printf("Entre le premiere nombre : ");
    scanf("%d" , &num1);
    printf("Entrer le deuxieme nombre : ");
    scanf("%d" , &num2);
    add = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1/num2 ;

    printf("%d + %d = %d\n" , num1 , num2 , add);
    printf("%d - %d = %d\n" , num1 , num2 , sub);
    printf("%d * %d = %d\n" , num1 , num2 , mult);
    printf("%d / %d = %.2f\n" , num1 , num2 , div);

    return 0;

}