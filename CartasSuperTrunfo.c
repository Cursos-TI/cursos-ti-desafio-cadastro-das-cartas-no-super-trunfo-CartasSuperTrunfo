#include <stdio.h>

int main (){

    /* Abaixo inclui as variaveis das cartas 1 e 2 do jogo super trunfo */
        char estado1, estado2; 
            char codigo1[4], codigo2[4];
            char cidade1[20], cidade2[20];
            unsigned long int populacao1, populacao2;  //Utilizarei o unsigned long int, pois abrange numeros grandes (epscificador de formato %lu)
            float area1, area2;
            float pib1, pib2;
            int atracoes1, atracoes2; //variaveis de pontos turisticos
                                    
            /*Abaixo será inserido as informacoes da carta 1*/
            printf("|Insira das infomações da Carta 1|\n\n");
            printf("Insira a Letra do Estado (A ate H): ");
                                                    scanf(" %c", &estado1);
                                                        printf("Insira um codigo (01-04): ");
                                                            scanf("%s", codigo1);
                                                                printf("Insira o nome da Cidade: ");
                                                                    scanf(" %19[^\n]", cidade1);
                                                                        printf("População: ");
                                                                            scanf("%lu", &populacao1);
                                                                                printf("Área em km2: ");
                                                                                    scanf("%f", &area1);
                                                                                        printf("Renda per capita: ");
                                                                                            scanf("%f", &pib1);
                                                                                                printf("Quantidade de Pontos Turisticos: ");
                                                                                                    scanf("%d", &atracoes1);
                                                                                                        
                                                                                                            /*Abaixo será exibido as informacoes inseridas da carta 1*/
                                                                                                                printf(" ___________________________________\n");
                                                                                                                    printf("|             CARTA 1               \n");
                                                                                                                        printf("|Codido da carta: %c%s              \n", estado1,codigo1);//nao entendi uma forma de melhorar
                                                                                                                            printf("|Cidade: %s                         \n", cidade1);
                                                                                                                                printf("|População: %lu                     \n", populacao1);
                                                                                                                                    printf("|Área: %.2f km2                     \n", area1);
                                                                                                                                        printf("|PIB: %.2f                          \n", pib1);
                                                                                                                                            printf("|Pontos turisticos: %d              \n", atracoes1);
                                                                                                                                                printf("|___________________________________\n");
                                                                                                                                                    printf("\n\n");
                                                                                                                                                      
                                                                                                                                                         
                                                                                                                                                             /*Abaixo será inserido as informacoes da carta 2*/
                                                                                                                                                                 printf("|Insira das infomações da Carta 2|\n\n");
                                                                                                                                                                     printf("Insira a Letra do Estado (A ate H): ");
                                                                                                                                                                         scanf(" %c", &estado2);
                                                                                                                                                                             printf("Insira um codigo (01-04): ");
                                                                                                                                                                                 scanf("%s", codigo2);
                                                                                                                                                                                     printf("Insira o nome da Cidade: ");
                                                                                                                                                                                         scanf(" %19[^\n]", cidade2);
                                                                                                                                                                                             printf("População: ");
                                                                                                                                                                                                 scanf("%lu", &populacao2);
                                                                                                                                                                                                     printf("Área em km2: ");
                                                                                                                                                                                                         scanf("%f", &area2);
                                                                                                                                                                                                             printf("Renda per capita: ");
                                                                                                                                                                                                                 scanf("%f", &pib2);
                                                                                                                                                                                                                     printf("Quantidade de Pontos Turisticos: ");
                                                                                                                                                                                                                         scanf("%d", &atracoes2);
                                                                                                                                                                                                                             
                                                                                                                                                                                                                                 /*Abaixo será exibido as informacoes inseridas da carta 2*/
                                                                                                                                                                                                                                     printf(" ___________________________________\n");
                                                                                                                                                                                                                                         printf("|             CARTA 2               \n");
                                                                                                                                                                                                                                             printf("|Codido da carta: %c%s              \n", estado2,codigo2);
                                                                                                                                                                                                                                                 printf("|Cidade: %s                         \n", cidade2);
                                                                                                                                                                                                                                                     printf("|População: %lu                     \n", populacao2);
                                                                                                                                                                                                                                                         printf("|Área: %.2f km2                     \n", area2);
                                                                                                                                                                                                                                                             printf("|PIB: %.2f                          \n", pib2);
                                                                                                                                                                                                                                                                printf("|Pontos turisticos: %d              \n", atracoes2);
                                                                                                                                                                                                                                                                     printf("|___________________________________\n");
                                                                                                                                                                                                                                                                         printf("\n\n");

                                                                                                                                                                                                                                                                         return 0;


                                                                                                                                                                                                                                                                         }