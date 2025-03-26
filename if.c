#include <stdio.h>

int main(){
int idade;

    printf("\nColoque a sua idade: ");
        scanf("%d", &idade);

if (idade > 100){
    printf("\nVoce ja esta muito velho, ja pensou em se matar?\n");
}
else if (idade >= 18){
    printf("\nVoce esta oficialmente inscrito!\n");
}
else if (idade < 0){
    printf("Tu ainda nem nasceu desgraca!");
}
else{
    printf("\nVoce nao tem idade o suficiente para se inscrever, se mate!\n");
}

return 0;
}