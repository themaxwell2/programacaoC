#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char tipoComparacao;
    int menu;
    int numeroJogador, numComputador, resultado;

    srand(time(0));
    numComputador = rand() % 100 + 1;

    printf(" ***** COMPARAÇÃO DE NÚMEROS ***** \n");
    printf("Bem vindo ao jogo Maior, Menor ou Igual! \n");
    printf("Voce deve escolher um numero e o tipo de comparação. \n");
    printf("M - Maior \n");
    printf("N - Menor \n");
    printf("I - Igual \n");
    printf("Escolha uma opção: ");
    scanf("%c", &tipoComparacao);

    printf("Digite um número entre 1 e 100: ");
    scanf("%d", &numeroJogador);

    printf("O número do computador é: %d \n", numComputador);

    switch(tipoComparacao){
        case 'M':
        case 'm':
                printf("Voce escolheu a opção maior! \n");
                resultado = numeroJogador > numComputador ? 1 : 0;
                

        break;
        case 'N':
        case 'n':
                printf("Voce escolheu a opção menor! \n");
                resultado = numeroJogador < numComputador ? 1 : 0;

        break;
        case 'I':
        case 'i':
                printf("Voce escolheu a opção igual! \n");
                resultado = numeroJogador == numComputador ? 1 : 0;

        break;
        default:
            printf("Opção inválida! \n");
            break;


            
    }
    printf("O numero do computador é: %d , e o do jogador é: %d\n", numComputador, numeroJogador);

    if (resultado == 1){
        printf("Parabéns! Você venceu! \n");
    } else {
        printf("Que pena! Você perdeu! \n");
    }

}