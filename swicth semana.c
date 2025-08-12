#include <stdio.h>

int main() {
     int dia;

  printf("Entre o Valor do Dia!\n");
  scanf("%d", &dia);

    switch (dia) {
      case 1:
         printf("Domingo\n");
         break;
      case 2:
         printf("Segunda-Feira\n");
         break;
      case 3:
         printf("Terça-Feira\n");
     break;
      case 4:
         printf("Quarta-Feira\n");
     break;
      case 5:
         printf("Quinta-Feira\n");
     break;
      case 6:
        printf("Sexta-Feira\n");
     break;
      case 7:
        printf("Sábado\n");
     break;    
     default:
         printf("Dia Invalido!");
        }
}
