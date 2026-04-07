#include <stdio.h>

int main() {
    int nota;

    printf("Digite a sua nota: \n");
    scanf("%d", &nota);

    if(nota >= 90){
        printf("Conceito A! \n");
    } else if (nota >= 80 && nota < 90){
        printf("Conceito B! \n");
    } else if (nota >= 70 && nota < 80){
        printf("Conceito C! \n");
    } else if (nota >= 60 && nota < 70){
        printf("Conceito D! \n");
    } else if (nota >= 50 && nota < 60){
        printf("Conceito E! \n");
    } else {
        printf("Conceito F! \n");
    }
}