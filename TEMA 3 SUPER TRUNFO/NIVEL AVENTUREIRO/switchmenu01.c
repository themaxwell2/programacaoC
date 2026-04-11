#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.00;

    printf("Escolha uma opcao: \n");
    printf("1 - verificar saldo \n");
    printf("2 - fazer deposito \n");
    printf("3 - fazer saque \n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("O seu saldo é: R$ %f\n", saldo);
            break;
        case 2:
            printf("Digite o banco que voce deseja depositar: \n");
            printf("Digite a agencia que voce deseja depositar: \n");
            printf("Digite a conta que voce deseja depositar: \n");
            break;
        case 3:
            printf("Digite o valor que voce deseja sacar: \n");
            break;
        default:
            printf("Opcao invalida!\n");
    }
}