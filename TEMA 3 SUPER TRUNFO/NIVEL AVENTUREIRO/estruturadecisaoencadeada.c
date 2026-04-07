#include <stdio.h>

int main(){
    int idade;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    if (idade >= 60){
        printf("Voce é um idoso! \n");
    } else if (idade >= 18 && idade < 60){
        printf("Voce é um adulto! \n");
    } else if (idade >= 12 && idade < 18){
        printf("Voce é um adolescente! \n");
    } else {
        printf("Voce é uma crianca! \n");
    }
}