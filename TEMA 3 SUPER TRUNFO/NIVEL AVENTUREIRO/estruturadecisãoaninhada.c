#include <stdio.h>

int main() {
    int idade;
    float renda;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua renda mensal: \n");
    scanf("%2.f", &renda);

    if(idade <= 18 || idade >= 60)
    {
        if(renda > 1999)
        {
            printf("Voce tem direito ao desconto! \n");
        } else {
            printf("Voce nao tem direito ao desconto devido a renda! \n");
        }
    } else {
        printf("Voce nao atende aos criterios devido a idade! \n");
    }
}