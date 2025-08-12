#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.00;
    printf("Escolha uma opção:\n");
    printf("1. Verificar o Saldo\n");
    printf("2. Fazer Depósito\n");
    printf("3. Fazer Saque\n");
    scanf("%d", &opcao);

    switch (opcao)

    {
    case 1 :  
        printf("Oseu Saldo é: R$ %f\n", saldo); 
     break;
     
    case 2 : 
        printf("Digite o Banco que você deseja depositar\n");
        printf("Digite o Agencia que você deseja depositar\n");
        printf("Digite o Conta que você deseja depositar\n");
     break;

    case 3 : 
        printf("Digite o Valor a Sacar\n");
     break; 
     default:
        printf("Opção Inválida!\n");   

    }


}