#include <stdio.h>
#include <math.h>

int main(void) {
    double bomb;
    double A;

    // Solicita ao usuário que insira um valor
    printf("Digite um número: ");
    scanf("%lf", &bomb);

    // Verifica se o valor é negativo, já que sqrt() requer número não negativo
    if (bomb < 0) {
        printf("Número negativo não é permitido para calcular a raiz quadrada.\n");
        return 1; // Encerra o programa com erro
    }

    // Agora, com o valor de bomb definido, calcula a raiz quadrada
    A = sqrt(bomb);

    // Exibe o resultado com duas casas decimais
    printf("\n%.2lf\n", A);

    return 0;
}