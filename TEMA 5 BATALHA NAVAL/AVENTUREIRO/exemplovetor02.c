#include <stdio.h>


// praticando vetores, matrizes e loops
int main(){
    int matriz[3][2] = {{1,2}, {3,4}, {5,6}};
    int matriz2[3][2] = {{7,8}, {9,10}, {11,12}};
    int matrizSoma[3][2]; 

    for(int i = 0; i < 3; i++){
        for(int j =0; j < 2; j++){
            matrizSoma[i][j] = matriz[i][j] + matriz2[i][j];
            printf("Matriz Soma[%d] + [%d] = %d\n", i, j, matrizSoma[i][j]);
        }
    }
}

// materia da aula
    /*int matriz[2][2] = {{1,2}, {3,4}};
    int matriz2[2][2] = {{5,6}, {7,8}};
    int matrizSoma[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matrizSoma[i][j] = matriz[i][j] + matriz2[i][j]; // Somando as matrizes
            printf("matrizSoma[%d][%d] = %d\n", i, j, matrizSoma[i][j]);
        }

    }


} */
