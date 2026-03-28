#include <stdio.h>


int main () {
    int numeroSinal = 3000000000; // este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000; // este valor é válido para um unsigned int

    printf("Valor com sinal (int): %d\n", numeroSinal); // pode resultar em um valor negativo devido ao estouro
    printf("Valor sem sinal (unsigned int): %u\n", numeroSemSinal);


    

    return 0;
}
