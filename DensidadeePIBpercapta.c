#include <stdio.h>

 int main()
 {
     // variaveis da carta 1
     char Estado1 = "A";
     char Codigodacarta1[4] = "A01";
     char Nomedacidade1[10] = "Sãopaulo";
     int Populacao1 = 12325000;
     float Area1 = 1521.11;
     float PIB1 = 699.28;
     int Numeropt1 = 50;
     float Densidade1 = Populacao1 / Area1 ;
     float PIBcapta1 = (float) PIB1 / Populacao1;
     
   // variaveis da carta 2
     char Estado2 = "B";
     char Codigodacarta2[4] = "B02";
     char Nomedacidade2[10] = "RiodeJaneiro";
     char Nomedacidade2[20] = "RiodeJaneiro";
     int Populacao2 = 6748000;
     float Area2 = 1200.25;
     float PIB2 = 300.50;
     int Numeropt2 = 30;
     float Densidade2 = Populacao2 / Area2;
     float PIBcapta2 = (float) PIB2/ Populacao2;
 
     printf("Estado :%s \n", Estado1);
     printf("Código da carta : %s\n", Codigodacarta1);
     printf("Nome da Cidade : %s\n", Nomedacidade1);
     printf("População : %d\n", Populacao1);
     printf("Área : %f km²\n", Area1);
     printf("PIB : %f bilhões de reais\n", PIB1);
     printf("Número de Pontos turísticos : %d\n", Numeropt2);
     printf("Densidade populacional: %.2f hab/km²", Densidade1);
     print("PIB percapta : %.2f reais\n", PIBcapta1);
   
     printf("Estado :%s \n", Estado2);
     printf("Código da carta : %s\n", Codigodacarta2);
     printf("Nome da Cidade : %s\n", Nomedacidade2);
     printf("População : %d\n", Populacao2);
     printf("Área : %f km²\n", Area2);
     printf("PIB : %f bilhões de reais\n", PIB2);
     printf("Número de Pontos turísticos : %d\n", Numeropt2);
     printf("Densidade populacional: %.2f hab/km²\n", Densidade2);
     print("PIB percapta : %.2f reais\n", PIBcapta1);
  
    return 0;
 }
