#include <stdio.h>
int main () {
    /*
    Inremento (++)
    Pré-incremento (++a)
    Pós-incremento a++
    Decremento (--)
    Pré-decremento --a
    Pós-decremento a--
    */

    int numero1 = 1, resultado ++;

    printf("=========================\n");
    printf("Antes do incremento: %d\n", numero1);
     //numero1 = numero1 + 1;
    //numero1 +- 1;
    //Pos-incremento;
    //resultado = numero1;
    //resultado = ++;
    resultado = numero1++;
    //printf("Após o incremento: %d\n", numero1 );
    printf("Após  Pós-incremento - Numero 1 %d - Resultado: %d\n", numero1. resultado);

    resultado = ++numero1;
    printf("Após  Pré-incremento - Numero 1 %d - Resultado: %d\n", numero1. resultado);

 
    //numero1 = numero1 - 1;
    //numero1 -= 1;
    //printf("Após o decremento: %d\n", numero1);     

}