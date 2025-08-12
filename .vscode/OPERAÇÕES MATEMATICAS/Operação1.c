#include <stdio.h>

int main () {

    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;
    
    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n");
    scanf("%d", &numero2);


    //OPERAÇÃO SOMA
    soma = numero1 + numero2;
    
    // OPERAÇÃO SUBTRAÇÃO
    subtracao = numero1 - numero2;
    
    //OPERAÇÃO MULTIPLICAÇÃO
    multiplicacao = numero1 * numero2;
    
    //OPERAÇÃO DIVISÃO
    divisao = numero1 / numero2;


    printf("A soma é: %d\n", soma);
    printf("A Subtração é: %d\n", subtracao);
    printf("A Multiplicação é: %d\n", multiplicacao);
    printf("A Divisão é: %d\n", divisao);

    return 0;
    






}