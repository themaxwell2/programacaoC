#include <stdio.h>

// armazenamento de notas usando um array (vetor)

int main (){
    float notas[5] = {85.5, 90.0, 78.3}; // array de notas

    printf("Nota do aluno 1 é: %.1f\n", notas[0]);
    printf("Nota do aluno 2 é: %.1f\n", notas[1]);
    printf("Nota do aluno 3 é: %.1f\n", notas[2]);

    return 0;
}