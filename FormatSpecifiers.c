#include <stdio.h>

int main(){
    // especificadores de formato % = define e formata um tipo de dados a serem exibidos
    
    // %c = caractere
    // %s = string (array de caracteres)
    // %f = float
    // %lf = double
    // %d = inteiro

    // %.1 = precisão decimal
    // %1 = tamanho de campo minimo
    // %- = alinhar a esquerda
float item1 = 5.75;
float item2 = 10.00;
float item3 = 100.99;

    printf("Item 1: R$%-8.2f\n", item1);
    printf("Item 2: R$%-8.2f\n", item2);
    printf("Item 3: R$%-8.2f\n", item3);

return 0;
}