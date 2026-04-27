#include <stdio.h>

int main (){
    char colunas[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};

    int linhaBarco = 3;
    int colBarco = 4;
    for(int k = 0; k < 3; k++){
        tabuleiro[linhaBarco][colBarco + k] = 3;
    }

    int linhaBarco02 = 7;
    int colBarco02 = 2;
    for(int k = 0; k < 4; k++){
        tabuleiro[linhaBarco02 + k][colBarco02] = 3;
    }


    // colunas
    printf("   ");
     for(int j = 0; j < 10; j++){
        printf("%2c ", colunas[j]);
}

// desenho tabuleiro
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%2d ", i + 1);
        for(int j = 0; j < 10; j++){
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}