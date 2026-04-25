#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    void moverTorre(int casaTorre)
    {
        if (casaTorre > 0)
        {
            printf("DIREITA \n");
            moverTorre(casaTorre - 1);
        }
    }

        void moverRainha(int casaRainha)
    {
        if (casaRainha > 0)
        { 
            printf("ESQUERDA \n");
            moverRainha(casaRainha - 1);
        }
    }
    
    void moverBispo(int casaBispo)
    {

        if (casaBispo > 0)
        {
            
        for (int i = 0; i < 1; i++ )
        {
            printf("CIMA | ");
            for (int j = 0; j < 1; j++ )
            {
                printf("DIREITA \n");
            }
        }
                        moverBispo(casaBispo - 1);
    }
    }

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
            printf("MOVIMENTO TORRE \n");
            moverTorre(5);
            return 0;

            break;

        case 2:
            printf("MOVIMENTO RAINHA \n");
            moverRainha(8);
            return 0;
        
            break;

        case 3:
            printf("MOVIMENTO BISPO \n");
            moverBispo(5);
            return 0;

            break;

        case 4:
            for (int i = 0, j = 0; ; i++)
            {
                if (i < 2)
                {
                    printf("CIMA \n");
                    continue; // volta pro início do loop
                }

                if (j < 1)
                {
                    printf("DIREITA \n");
                    j++;
                    break; // movimento completo → sai do loop
                }
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