#include <stdio.h>
#include <math.h>

int main(){
const double PI = 3.14159;

double raio;
double circun;
double area;

    printf("\nColoque o Raio do circulo:");
        scanf("%lf", &raio);

    circun = 2 * PI *raio;
    area = PI * pow(raio, 2);

    printf("\nA circunferencia do circulo e de: %.2lf metros/cm\n", circun);
    printf("A area tem o tamanho de: %.2lf metros quadrados", area);

return 0;
}