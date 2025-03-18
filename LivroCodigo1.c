#include <stdio.h>
#include <stdlib.h>

int main(){
const char Bip = '\a';
const double PI = 3.141592;

double raio, area;

    printf("\nDigite o raio da esfera:  ");
        scanf("%lf", &raio);

    area = 4.0 * PI * raio * raio;

    printf("%c%c", Bip, Bip);
    printf("\nArea da esfera = %.2lf\n", area);

    system("PAUSE");
return 0;
}