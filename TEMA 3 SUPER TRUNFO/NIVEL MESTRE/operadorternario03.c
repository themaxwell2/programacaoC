#include <stdio.h>

int main(){
    int num1 = 40, num2 = 20;
    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2); // num1 > num2 ?, é praticamente o if e : (maior = num2) é praticamente o else

    printf("O numero maior é: %d \n", maior);

    return 0;
}