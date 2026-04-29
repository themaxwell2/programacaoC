#include <stdio.h>
 
// praticando para entender
int main() {
    int matriz[5][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}};
    int evenCount = 0, oddCount = 0; // contagem par e contagem impar em ingles

    // Contagem de elementos pares e ímpares
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] % 2 == 0){
                evenCount++; // Incrementa o contador de pares
            } else {
                oddCount++; // Incrementa o contador de ímpares
            }
        }
    }

    printf("Número de elementos pares: %d\n", evenCount);
    printf("Número de elementos ímpares: %d\n", oddCount);

}



    // aula
    /*
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int evenCount = 0, oddCount = 0;
 
    // Contagem de elementos pares e ímpares
    for (int i = 0; i < 3; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 3; j++) {  // Loop interno para as colunas
            if (matriz[i][j] % 2 == 0) {
                evenCount++; // Incrementa o contador de pares
            } else {
                oddCount++; // Incrementa o contador de ímpares
            }
        }
    }
 
    // Impressão dos resultados
    printf("Número de elementos pares: %d\n", evenCount);
    printf("Número de elementos ímpares: %d\n", oddCount);
 
    return 0;
} */