#include <stdio.h>

int main() {
  int idade;
  float renda;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: \n");
  scanf("%f", &renda);

  if (idade < 18 || idade > 60) {
    if (renda < 2000.0) {
      printf("Você está qualificado para o desconto especial\n");
    } else {
      printf("Você não está qualificado para o desconto devido à renda\n");
    }
  } else {
    printf("Você não está qualificado para o desconto devido à idade\n");
  }

  return 0;
}
