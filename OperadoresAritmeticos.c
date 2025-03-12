#include <stdio.h>

int main(){
    /*
     * Operadores Aritméticos:
     *
     * +   : Adição
     * -   : Subtração
     * *   : Multiplicação
     * /   : Divisão
     * %   : Módulo (resto da divisão inteira)
     * ++  : Incremento
     * --  : Decremento
     */

int x = 5;
int y = 2; // ou float y = 2; 
    /*
     * Para obter um resultado fracionário, como em 5 / 2 = 2.5, 
     * é necessário que pelo menos um dos operandos seja do tipo float.
     * Se ambos os operandos forem inteiros, a operação realizará a divisão inteira,
     * retornando apenas a parte inteira (por exemplo, 5 / 2 resultará em 2).
     * Assim, converter ao menos um dos valores para float garante o resultado correto.
     */

// float z = x / (float) y; // Ou então transforme na frente do divisor assim: (float)
// int z = x % y;

x++;
y--;

    printf("%d", y);

return 0;
}