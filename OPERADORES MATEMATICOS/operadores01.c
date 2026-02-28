#include <stdio.h>

int main (){
    int numero1, numero2;
    int soma, multiplicacao, subtracao, divisao;

    printf("Digite o primeiro numero ");
    scanf("%d", &numero1);
    printf("Dgite o segundo numero ");
    scanf("%d", &numero2);

    soma = numero1 + numero2; // operacao soma
    subtracao = numero1 - numero2; // operacao subtracao
    multiplicacao = numero1 * numero2; // operacao multiplicacao
    divisao = numero1 / numero2; // operacao divisao


    printf("A soma dos numeros e %d\n", soma);
    printf("A subtracao dos numeros e %d\n", subtracao);
    printf("A multiplicacao dos numero e %d\n", multiplicacao);
    printf("A divisao dos numeros e %d\n", divisao);
}