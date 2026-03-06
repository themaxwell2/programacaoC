#include <stdio.h>


int main () {
    int numeroNormal = 2147483647; // Valor maximo de int
    long int numeroGrande = 2147483647;

    printf("Numero regular (int): %d\n", numeroNormal);
    printf("Numero grande (long int): %ld\n", numeroGrande);

    numeroGrande = 2147483648; // Valor maior que o maximo de int, mas valido para long int
    printf("Numero grande atualizado (long int): %ld\n", numeroGrande);

    return 0;

}