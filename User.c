#include <stdio.h>

int main(){
int idade;

    printf("Quantos anos voce tem?:");
        scanf("%d", &idade); // Lembre-se de colocar o & pois se não não ira guardar

    printf("Voce tem %d anos de idade!", idade);

return 0;
}