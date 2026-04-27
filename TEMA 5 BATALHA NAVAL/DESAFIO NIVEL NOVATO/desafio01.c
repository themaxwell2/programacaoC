#include <stdio.h>

int main (){
    char colunas[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};

    printf("   ");
     for(int j = 0; j < 10; j++){
        printf("%2c ", colunas[j]);
}
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