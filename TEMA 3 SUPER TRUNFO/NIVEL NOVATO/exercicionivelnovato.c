#include <stdio.h>

int main (){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("A temperatura esta alta!\n");
    } else {
        printf("A temperatura esta dentro dos parametros!\n");
    }

    if (umidade > 50){
        printf("A umidade elevada!\n");
    } else {
        printf("A umidade esta dentro dos parametros!\n");
    }

    if(estoque <= estoqueMinimo){
        printf("ALERTA CRITICO: estoque esta baixo!\n");
    } else {
        printf("O estoque esta dentro dos parametros!\n");

    }




}