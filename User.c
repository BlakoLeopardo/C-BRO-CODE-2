#include <stdio.h>
#include <string.h>

int main(){
int idade;
char nome[1024];

    printf("\nQual o seu nome?\n");
    /* 
     * fgets() lê uma linha inteira da entrada padrão (stdin), incluindo os espaços, 
     * e armazena no array 'nome'. O segundo parâmetro especifica o tamanho máximo 
     * a ser lido, evitando assim estouro do buffer.
     */
        if (fgets(nome, sizeof(nome), stdin) != NULL)
        {
        /* 
         * A função strcspn() procura a posição do caractere '\n' (nova linha) na string.
         * Caso encontrado, substituímos esse caractere por '\0' para remover a nova linha
         * que fgets() pode ter deixado no final da string.
            nome[strcspn(nome, "\n")] = '\0';
         */
        nome[strlen(nome) -1] = '\0';
        }


    printf("\nQuantos anos voce tem?:");
        scanf("%d", &idade); // Lembre-se de colocar o & pois se não não ira guardar

    printf("\nOla %s!\n", nome);
    printf("Voce tem %d anos de idade!\n", idade);

return 0;
}