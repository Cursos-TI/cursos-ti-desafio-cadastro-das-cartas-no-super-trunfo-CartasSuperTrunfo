#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1 = 12345678, num2 = 8, num3 = 3, num4 = 4;
    long int num5 = 100000000;
    float num6 = 2.5;
    char result[2];

    int soma = num1 + num2;
    printf("\n%d\n", soma);
    printf("int + long int = \n%d\n", (num1 + num5));
    printf("int + float = \n%.2f\n", ((double)num1 + (double)num6));
    long double soma1 = (double)num5 + (double)num6;
    printf("long double \n%.2Lf\n", soma1);
    // vou ter que mudar em todos que tenham float, o que a IA faz falta agora não é brincadeira
    

    ((num1 + num2) >= (num3 + num4)) ? (((num1 + num2) == (num3 + num4)) ? printf("\nigual\n") : printf("\nmaior\n") ) : printf("\nmenor\n") ;

    int esc1 = (num1 < num2) ? num1 : num2;
    int esc2 = (num1 > num2) ? num1 : num2;
    sprintf(result, "%d%d", esc1, esc2);
    int result1 = atoi(result);

    printf("esc1 e esc2 = \n%d%d\n", esc1, esc2);
    printf("result = \n%s\n", result);
    printf("result1 = \n%d\n", result1);

    switch (result1) {
        case 12:
            printf("\nesc1 concatenado com esc2 = 12\n");
            break;
        case 21:
            printf("\nesc1 concatenado com esc2 = 21\n");
            break;
        default:
            printf("\nerror\n");
            break;
    }

    return 0;
}