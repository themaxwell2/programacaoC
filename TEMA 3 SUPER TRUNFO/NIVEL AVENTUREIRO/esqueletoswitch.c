#include <stdio.h>

int main() {
    int variavel;

    printf("Digite um valor: \n");
    scanf("%d", &variavel);

    switch (variavel){
    case 1:
        // codigo a ser executado se variavel == valor1
        printf("codigo a ser executado se variavel == valor1 \n");
        printf("teste \n");
        break;
    case 2:
        // codigo a ser executado se variavel == valor2
        printf("codigo a ser executado se variavel == valor2 \n");
        break;
        default:
        // codigo a ser executado se variavel nao for igual a nenhum dos casos anteriores
        printf("codigo a ser executado se variavel nao for 1 ou 2 \n");
    }

}