#include <stdio.h>
#include <stdlib.h>


void vencedor(int *saldo, double categ1, double categ2, char nome1[15], char nome2[15])
{
/*
@brief compara dois valores, printa o nome do vencedor na tela 
e acrescenta um valor ao conteudo de saldo
*/
    if(categ1 != categ2)
    {
        if(categ1 > categ2)
        {
            printf("Vencedor: %s\n\n", nome1);
            *saldo += 1;
        }
        else
        {
            printf("Vencedor: %s\n\n", nome2);
            *saldo -=1;
        }
    }
    else
    {
        printf("Empate!\n\n");
    }
}


int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    int saldo = 0;
        //variaveis da cidade1
    char nome_cidade1[15], estado_cidade1[15], codigo_cidade1[10];
    unsigned pop_cidade1, pontosTuristicos_cidade1;
    double area_cidade1, pib_cidade1, densidadePop_cidade1, pibPerCapta_cidade1;
    long double super_poder_cidade1 = 0.0;
        
        // variaveis da cidade2
    char nome_cidade2[15], estado_cidade2[15], codigo_cidade2[10];
    unsigned pop_cidade2, pontosTuristicos_cidade2;
    double area_cidade2, pib_cidade2, densidadePop_cidade2, pibPerCapta_cidade2;
    long double super_poder_cidade2 = 0.0;
    
/*-----------------------Entrada de dados ----------------------------*/
printf("\t\t~~~~ Bem-Vindo ao Super Trunfo ~~~~\n\n");

printf("Cadastre suas cartas: \n");
    // cadastro da cidade 1
    printf("~~~~Cadastro da cidade 1~~~~\n");
    printf("Nome da cidade:\n");
    scanf(" %s", nome_cidade1);

    printf("Codigo da cidade:\n");
    scanf(" %s", codigo_cidade1);

    printf("População:\n");
    scanf(" %u", &pop_cidade1);


    printf("Area(km²):\n");
    scanf(" %lf", &area_cidade1);

    printf("Pib:\n");
    scanf(" %lf", &pib_cidade1);

    printf("Pontos turisticos:\n");
    scanf(" %u", &pontosTuristicos_cidade1);

    // calculo da densidade e pib per capta
    pibPerCapta_cidade1 = pib_cidade1 / (float) pop_cidade1;
    densidadePop_cidade1 = (float) pop_cidade1 / area_cidade1; 

    // calculo do super poder
    super_poder_cidade1 = pib_cidade1 + area_cidade1 + pibPerCapta_cidade1 + densidadePop_cidade1 + 
    (float) pop_cidade1 + (float) pontosTuristicos_cidade1;

    // cadastro da cidade 2
    printf("~~~~Cadastro da cidade 2~~~~\n");
    printf("Nome da cidade:\n");
    scanf(" %s", nome_cidade2);

    printf("Codigo da cidade:\n");
    scanf(" %s", codigo_cidade2);

    printf("População:\n");
    scanf(" %u", &pop_cidade2);


    printf("Area(km²):\n");
    scanf(" %lf", &area_cidade2);

    printf("Pib:\n");
    scanf(" %lf", &pib_cidade2);

    printf("Pontos turisticos:\n");
    scanf(" %u", &pontosTuristicos_cidade2);

    // calculo da densidade e pib per capta
    pibPerCapta_cidade2 = pib_cidade2 / (float) pop_cidade2;
    densidadePop_cidade2 = (float) pop_cidade2 / area_cidade2; 
    
    // calculo do super poder
    super_poder_cidade2 = pib_cidade2 + area_cidade2 + pibPerCapta_cidade2 + densidadePop_cidade2 + 
    (float) pop_cidade2 + (float) pontosTuristicos_cidade2;

/*------------------------------------------------------------------*/

system("clear");

/*--------------------------saida de dados--------------------------*/
    printf("cidades:\t\t\t %s \t\t-\t\t %s\n\n", nome_cidade1, nome_cidade2);

    printf("População:\t\t\t %i \t\t\t-\t\t %i\n", pop_cidade1, pop_cidade2);
    // verifica qual carta tem mais população 
    vencedor(&saldo,(float) pop_cidade1,(float)pop_cidade2, nome_cidade1, nome_cidade2 );

    printf("Área:\t\t\t\t %.2fKm² \t\t-\t\t %.2fkm²\n", area_cidade1, area_cidade2);
    // verifica qual carta tem maior área
    vencedor(&saldo, area_cidade1, area_cidade2, nome_cidade1, nome_cidade2);

    printf("Pib:\t\t\t\t R$:%.2f \t\t-\t\t R$:%.2f\n", pib_cidade1, pib_cidade2);
    // verifica qual carta tem o maior pib
    vencedor(&saldo, pib_cidade1, pib_cidade2, nome_cidade1, nome_cidade2);

    printf("Pib per capta:\t\t\t R$:%.2f \t\t-\t\t R$:%.2f\n", pibPerCapta_cidade1, pibPerCapta_cidade2);
    // verifica qual carta tem o maior pib per capta
    vencedor(&saldo, pibPerCapta_cidade1, pibPerCapta_cidade2, nome_cidade1, nome_cidade2);

    printf("Quantidade de pontos turisticos: %i \t\t\t-\t\t %i\n", pontosTuristicos_cidade1, pontosTuristicos_cidade2);
    // verifica qual carta tem mais pontos turisticos
    vencedor(&saldo, (float) pontosTuristicos_cidade1, (float) pontosTuristicos_cidade2, nome_cidade1, nome_cidade2);

    printf("Densidade populacional:\t\t %.2f \t\t-\t\t %.2f\n", densidadePop_cidade1, densidadePop_cidade2);
    // verifica qual carta tem a menor densidade populacional
    if(densidadePop_cidade1 != densidadePop_cidade2)
    {
        if(densidadePop_cidade1 > densidadePop_cidade2)
        {
            printf("Vencedor: %s\n\n", nome_cidade1);
            saldo +=1;
        }
        else
        {
            printf("Vencedor: %s\n\n", nome_cidade2);
        }
    }
    else
    {
        printf("Empate\n\n");
    }

    printf("Super Poder: \t\t\t %.2Lf \t\t-\t\t %.2Lf\n", super_poder_cidade1, super_poder_cidade2);
    // verifica qual carta tem o maior super poder
    vencedor(&saldo, super_poder_cidade1, super_poder_cidade2, nome_cidade1, nome_cidade2);

    // verifica qual carta venceu em mais categorias
    if(saldo != 0)
    {
        if(saldo > 0)
        {
            printf("Vencedor Geral: %s\n\n", nome_cidade1);
        }
        else
        {
            printf("Vencedor Geral: %s\n\n", nome_cidade2);
        }
    }
    else
    {
        printf("Empate Geral\n\n");
    }

    puts("\t\t ~~~~ FIM DO PROGRAMA ~~~~");
/*---------------------------------------------------------------------*/
}