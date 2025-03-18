#include <stdio.h>
#include <math.h>

int main(){
double bomb;

// double A = sqrt(bomb); esse jeito esta errado, pois ele calcula a raiz quadrada primeiro antes de se atribuir qualquer valor, por isso o resultado e sempre 0.00
double A = sqrt(9); // essa é a função de raiz quadrada
double B = pow(2,4); // Essa é a função de elevar um numero a outro

int C = round(3.49); // Essa e a função de se arredondar
                    // Do .49 ele arredonda para baixo, do .50 ele arredonda para cima
int D = ceil(3.14); // Esse caba arredonda para cima
int E = floor(3.99); // Esse arredonda para baixo

double F = fabs(-100); // Valor absoluto = se o número for negativo, a função retorna sua versão positiva; se o número for positivo, ele permanece inalterado.
double G = log(3); // Logaritmo do número
double H = sin(45); // Seno
double I = cos(45); // Cosseno
double J = tan(45); // Tangente

    printf("Seno:%lf\nCosseno:%lf\nTangente:%lf", H, I, J);

return 0;
}