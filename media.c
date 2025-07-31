#include <stdio.h>

int main (){
int nota1, nota2, nota3;
float media;

printf ("***Programa de cálculo de média***\n");

printf ("Digite a sua primeira nota: \n");
scanf ("%d", &nota1);

printf ("Digite a sua segunda nota: \n");
scanf ("%d", &nota2);

printf ("Digite a sua terceira nota: \n");
scanf ("%d", &nota3);

media = (float) (nota1 + nota2 + nota3) / 3.0;

printf (" A média é: %.2f", media);

    return 0;
}