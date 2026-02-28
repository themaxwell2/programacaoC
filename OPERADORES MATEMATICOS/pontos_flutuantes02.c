#include <stdio.h>

int main (){
    float a = 5.5;
    float b = 2.2;
    float soma = a + b;
    float diferenca = a - b;
    float produto = a * b;
    float quociente = a / b; // resultado será 3, pois é uma divisão

    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);

}