#include <stdio.h>
 

// PRATICANDO PARA ENTENDER
int main() {
    int matriz[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    // Modificação condicional dos elementos da matriz
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] > 10){ // se o elemento fo maior que 10 vira negativo
                matriz[i][j] = -matriz[i][j];
            }
        }
    }
            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 4; j++){
            printf("%4d ", matriz[i][j]);
            }
            printf("\n");
        }  
    return 0;
}










//AULA

/*{
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
 
    // Modificação condicional dos elementos da matriz
    for (int i = 0; i < 3; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 3; j++) {  // Loop interno para as colunas
            if (matriz[i][j] > 5) {
                matriz[i][j] = -matriz[i][j]; // Se o elemento for maior que 5, torna-o negativo
            }
        }
    }
 
    // Impressão da matriz modificada
    for (int i = 0; i < 3; i++) {      // Loop para imprimir cada linha
        for (int j = 0; j < 3; j++) {  // Loop para imprimir cada coluna
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
 
    return 0;
} */