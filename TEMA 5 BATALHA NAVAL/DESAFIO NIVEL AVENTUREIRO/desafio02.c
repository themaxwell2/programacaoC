#include <stdio.h> // Biblioteca padrão para entrada e saída (printf, etc)

int main (){

    // Vetor de caracteres representando as colunas do tabuleiro (A até J)
    char colunas[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Cria uma matriz 10x10 (tabuleiro) inicializada com zeros
    int tabuleiro[10][10] = {0};

    // =========================
    // BARCO 1 (horizontal)
    // =========================

    // Define a posição inicial do barco (linha 3, coluna 4)
    int linhaBarco = 3;
    int colBarco = 4;

    // Loop para desenhar o barco horizontalmente
    // Ele ocupa 3 posições na mesma linha
    for(int k = 0; k < 3; k++){
        tabuleiro[linhaBarco][colBarco + k] = 3;
        // linha fixa, coluna aumenta → horizontal
        // valor 3 representa parte de um barco
    }

    // =========================
    // BARCO 2 (vertical)
    // =========================

    // Define a posição inicial do segundo barco
    int linhaBarco02 = 7;
    int colBarco02 = 2;

    // Loop para desenhar o barco verticalmente
    // Ele ocupa 4 posições na mesma coluna
    for(int k = 0; k < 4; k++){
        tabuleiro[linhaBarco02 + k][colBarco02] = 3;
        // coluna fixa, linha aumenta → vertical
    }

    // =========================
    // BARCO 3 (diagonal)
    // =========================

    // Define a posição inicial do terceiro barco
    int linhaBarco03 = 7; // Exemplo de posição inicial para o barco diagonal
    int colBarco03 = 6; //

    // Loop para desenhar o barco diagonalmente
    // Ele ocupa 3 posições, aumentando tanto a linha quanto a coluna
    for(int k = 0; k < 3; k++){
        tabuleiro[linhaBarco03 + k][colBarco03 + k] = 3;
        // linha e coluna aumentam → diagonal
    }

    // =========================
    // BARCO 4 (diagonal inversa)
    // =========================

    // Define a posição inicial do quarto barco
    int linhaBarco04 = 2; // Exemplo de posição inicial para o barco diagonal inverso
    int colBarco04 = 2; // Exemplo de posição inicial para o barco

    // Loop para desenhar o barco diagonalmente (inverso)
    // Ele ocupa 3 posições, aumentando a linha e diminuindo a coluna
    for(int k = 0; k < 3; k++){
        tabuleiro[linhaBarco04 - k][colBarco04 - k] = 3; // aqui eu controlo para onde eu quero que o barco vá, -- volta para o "0" e ++ avança para o "0"
        // linha aumenta, coluna diminui → diagonal inversa
    }


    // =========================
    // IMPRESSÃO DO CABEÇALHO (COLUNAS)
    // =========================

    printf("   "); // Espaço inicial para alinhar com os números das linhas

    // Imprime as letras das colunas (A até J)
    for(int j = 0; j < 10; j++){
        printf("%2c ", colunas[j]);
    }

    // =========================
    // DESENHO DO TABULEIRO
    // =========================

    printf("\n"); // Pula linha antes de começar o tabuleiro

    // Loop das linhas
    for(int i = 0; i < 10; i++){

        // Imprime o número da linha (1 até 10)
        printf("%2d ", i + 1);

        // Loop das colunas
        for(int j = 0; j < 10; j++){

            // Imprime o valor de cada posição da matriz
            printf("%2d ", tabuleiro[i][j]);
        }

        // Pula linha ao final de cada linha do tabuleiro
        printf("\n");
    }

    return 0; // Indica que o programa terminou corretamente
}