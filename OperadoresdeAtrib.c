/*
 * Operadores de atribuição aumentada:
 * São utilizados para simplificar operações onde a variável é usada
 * como argumento e recebe o resultado da operação.
 * Exemplo:
 *    x = x + 1;   // Incrementa x em 1
 *    x += 1;      // Equivalente à operação acima
 */

#include <stdio.h>

int main(){
    int x = 10;

    // Exemplos de operações com operadores de atribuição aumentada:

    // Incremento:
    // x = x + 2;
    // x += 2;

    // Decremento:
    // x = x - 3;
    // x -= 3;

    // Multiplicação:
    // x = x * 4;
    // x *= 4;

    // Divisão:
    // x = x / 5;
    // x /= 5;

    // Módulo (resto da divisão):
    // x = x % 2;
    // x %= 2;

    printf("%d", x);
    return 0;
}