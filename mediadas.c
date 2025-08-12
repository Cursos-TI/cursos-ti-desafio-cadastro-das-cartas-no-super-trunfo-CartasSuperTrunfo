#include <stdio.h>

int main() {
  int idade;
  float renda;
  int dependentes;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: \n");
  scanf("%f", &renda);
  printf("Digite o número de Dependentes: ");
  scanf("%d", &dependentes);

  if(idade >= 18 && idade < 65){
    if (renda < 3000){
        if (dependentes > 2)
        {
            printf(" Voce atende a todos os critérios !\n");
        } else {
            printf("Você não atende ao critério dependente !\n");
        }
    } else {
            printf("Você não atende ao critério renda!\n");
        } 
  } else {
            printf("Você não atende ao critério idade!\n");
        }
}