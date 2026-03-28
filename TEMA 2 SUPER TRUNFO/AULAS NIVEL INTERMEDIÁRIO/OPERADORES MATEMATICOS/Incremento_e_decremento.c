#include <stdio.h>

int main (){
    int numero1 =1, resultado;

    printf("Antes do incremento: %d\n", numero1);
    // numero1 = numero1 + 1;
    // numero1 += 1;
    resultado = numero1++;
    printf("Após pós-incremento - Numero 1: %d - Resultado:  %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Após pre-incremento - Numero 1: %d - Resultado:  %d\n", numero1, resultado);

    

    resultado = numero1--;
    printf("Após pos-decremento - Numero 1: %d - Resultado:  %d\n", numero1, resultado);


    resultado = --numero1;
    printf("Após pre-decremento - Numero 1: %d - Resultado:  %d\n", numero1, resultado);
}