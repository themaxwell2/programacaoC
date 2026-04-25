#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int escolha;
    int cavaloMove = 1;  // Inicializa com número de movimentos do cavalo

    printf("*** JOGO DE XADREZ ***\n");
    printf("O que voce deseja mover? \n");
    printf("1 - TORRE \n");
    printf("2 - RAINHA \n");
    printf("3 - BISPO \n");
    printf("4 - CAVALO \n");
    printf("0 - SAIR DO JOGO \n");
    printf("Sua escolha: ");
    scanf("%d", &escolha);


    switch(escolha){
        case 1:
            printf("Movimento da TORRE \n");
            for (int i = 0; i < 5; i++)
            {
                printf("DIREITA\n");
            }

        break;

        case 2:
            printf("Movimento da Rainha \n");
            int i = 0;
            while(i <= 5 - 1)
            {
                printf("DIREITA\n");
                i++;
            }
        
        break;

        case 3:
            printf("Movimento do Bispo\n");
            int j = 0;
            do {
                printf("Cima | Direita\n");
                j++;

            } while (j <= 5 - 1);

            break;

        case 4:
        while(cavaloMove--)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("CIMA \n");
            }
            printf("DIREITA \n");
        }

        break;
        default:
            printf("Opção invalida! \n");
            break;
    }
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}