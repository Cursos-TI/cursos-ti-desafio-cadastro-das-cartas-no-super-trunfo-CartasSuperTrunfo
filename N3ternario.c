#include <stdio.h>


int main() {
   int opcao;
   float nota1, nota2, media;
   
  printf("Menu de Gerenciamento de Estudantes\n");
  printf("1. Caculando a média\n");
  printf("2. Determinando o Status\n");
  printf("3. Sair\n");
  scanf("%d", &opcao);
   

  switch (opcao)
  {
  case 1:
    printf("1. Caculando a média\n");
    printf("Digite a primeira nota");
    scanf("%f", &nota1);
    printf("Digite a segunda nota");
    scanf("%f", &nota2);
    if ( (nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) )
    {
      media = (nota1 + nota2) / 2;
      printf("A Média é %.2f\n", media);
    } else {
      printf("Entrada com valores errado de notas!\n");
    }
    break;
  case 2:
    printf("2. Determinando o Status\n");
    printf(" Entrar com a media: ");
    scanf("%f", &media);
    //media >=5 ? printf("Aprovadíssimo\n") : printf("Rebaixado\n");

    if (media >= 7)
    {
      printf("Aprovadíssimo\n");
    } else if (media >=5)
    {
      printf("recuperaçao!!!\n");
    }
    else
    {
      printf("Rebaixado\n");
    }
    
    
    break;
    case 3:
    printf("3. Sair do Prorama...\n");
    break;
  default:
  printf("Opçao Invalida... :-( \n");
    break;
  }


  // condicao ? verdadeiro : faldos;
//resultado = idade >= 20 ? 1 : 0;

//if(resultado == 1){
  //printf("Você é maior de idade!\n"); 
///} else {
  ///printf("Você é menor de idade!");
//}

return 0;
}