#include <stdio.h> 
    int main() {
        /*
        Soma (+)
        subtracao()
        multipicacao()
        divisao(/)
        */
    // Operadores aritméticos
    int numero1, numero2;
    int soma ,subtracao, multiplicacao, divisao;

    printf("=========================\n");
        printf("Digite o número 1: ");
        scanf("%d", &numero1);
        printf("Digite o número 2: ");
        scanf("%d", &numero2);

        soma = numero1 + numero2;
        //opração soma

        subtracao = numero1 - numero2;
        //opração subtração

        multiplicacao = numero1 * numero2;
        //opração multiplicação

        divisao = numero1 / numero2;    
    //opração divisão
        printf("A Soma é: %d\n", soma);
        printf("A Subtração é: %d\n", subtracao);
        printf("A Multiplicaçãoé : %d\n", multiplicacao);
        printf("A Divisão é : %d\n", divisao);
        printf("=========================\n\n");
       //Solicitar ao usuário um número
       //Receber o número fornecido
      //Se o número for divisível por 2 então
      //  Exibir "O número é par"
      //Senão
      //  Exibir "O número é ímpar"



    return 0;
}// Corrigido o erro de digitação de "studio.h" para "stdio.h"
