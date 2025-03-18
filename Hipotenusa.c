#include <stdio.h>
#include <math.h>

int main(){
double A;
double B;
double C;

    printf("\nA seguir coloque o tamanha dos lados do triangulo\nLado A: \n");
        scanf("%lf", &A);
    printf("\nLado B:\n");
        scanf("%lf", &B);
    C = sqrt(pow(A, 2) + pow(B, 2));

    printf("O tamanho da hipotenusa ou lado C do triangulo e de: %.2lf\n", C);

return 0;
}