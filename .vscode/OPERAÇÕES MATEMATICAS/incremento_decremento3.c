#include <stdio.h>

int main() {
 /*
 Incremento (++)
 Pré-Incremento ++a
 Pós-Incremento a++
 Decremento (--)
 Pré-Decremento --a
 Pós-Decremento a--
 */

 int numero1= 1, resultado;
 
 printf("Antes Incremento: %d\n", numero1);
 // NUMERO1 = NUMERO1 +1
 resultado = numero1++;
 printf("Após Pós-Incremento - numero1: %d - Resultado: %d\n", numero1, resultado);


 resultado = ++numero1;
 printf("Após Pré-Incremento - numero1: %d - Resultado: %d\n", numero1, resultado);
 

 resultado = numero1--;
 printf("Após Pós-decremento - numero1: %d - Resultado :%d\n", numero1, resultado);

 resultado = --numero1;
 printf("Após Pós-decremento  - numero1: %d - Resultado :%d\n", numero1, resultado);

 








}