#include <stdio.h>

int main() {
  int idade;

  printf("Digite a sua idade: \n");
  scanf("%d", &idade);

  if (idade < 12) {
    printf("Você é uma criança!\n");

  } else if (idade >= 12 && idade < 18) {
    printf("Você é um adolescente!\n");

  } else if (idade >= 18 && idade < 60) {

    printf("Você é um adulto!\n");
  } else {
    printf("Você é um idoso!\n");
  } }