#include <stdio.h>
 
#define LINHA 10
#define COLUNA 10

int main() {
    int matriz[LINHA][COLUNA];
    int target = 9;
    int found = 0;
    int soma = 1;

    for (int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            matriz[i][j] = soma;
            soma++;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
 
    // Busca condicional do elemento alvo
    for (int i = 0; i < LINHA; i++) {      // Loop externo para as linhas
        for (int j = 0; j < COLUNA; j++) {  // Loop interno para as colunas
            if (matriz[i][j] == target) {
                printf("Elemento %d encontrado no indice (%d, %d)\n", target, i, j); // posição do elemento encontrado
                found = 1;
                break;
            }
        }
        if (found) break;
    }
 
    if (!found) {
        printf("Elemento %d não encontrado na matriz\n", target);
    }
 
    return 0;
}