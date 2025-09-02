#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    int r , r3;
    float volume;
    printf("Entrer le rayon du sphere : ");
    scanf("%d" , &r);
    r3 = pow(r , 3);
    volume = (4/3) * PI * r3 ;
    printf("Le volume du sphere est : %.2f" , volume);
    return 0;
}