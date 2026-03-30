#include <stdio.h>

int main(){
    int idade = 17;
    float altura = 1.75;

    if (idade >= 18 && idade <= 30 && altura > 1.70){
        printf("Voce esta na faixa etaria e tem a altura adequada. \n");
    } else {
        printf("Voce NÃO atende aos criterios. \n");
    }
}