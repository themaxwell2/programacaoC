#include <stdio.h>

void main() {
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    letra = letra + ('A' - 'a'); // Converte para maiúscula
    printf("Caractere = %c \n", letra);
    return 0;


}
