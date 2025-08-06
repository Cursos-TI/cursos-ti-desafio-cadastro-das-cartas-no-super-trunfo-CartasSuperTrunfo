#include <stdio.h>
#include <string.h>
typedef struct
{
    char codigo[4];
    char estado[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;
Carta carta1, carta2;
void calcularIndicadores(Carta *carta)
{
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;
    if (carta->densidadePopulacional > 1000)
    {
        printf("\nAlta densidade populacional!");
    }
    if (carta->pibPerCapita > 50000)
    {
        printf("\nCidade com alto desenvolvimento econômico!");
    }
    else if (carta->pibPerCapita > 25000)
    {
        printf("\nCidade com médio desenvolvimento econômico!");
    }
    else
    {
        printf("\nCidade em desenvolvimento econômico!");
    }
}
void entradaDados(Carta *carta, int numeroCarta)
{
    printf("\n=== Super Trunfo - Países - Carta %d ===\n", numeroCarta);

    printf("┌─────────────────────────────────┐\n");
    printf("│ Digite o código (ex: A1):      ");
    scanf("%s", carta->codigo);
    printf("│ Código: %s                      \n", carta->codigo);
    printf("└─────────────────────────────────┘\n");
    printf("┌─────────────────────────────────┐\n");
    printf("│ Digite o estado (ex: SP):      ");
    scanf("%s", carta->estado);
    printf("│ Estado: %s                      \n", carta->estado);
    printf("└─────────────────────────────────┘\n");
    printf("┌─────────────────────────────────┐\n");
    printf("│ Digite a cidade:              ");
    while (getchar() != '\n')
        ;
    fgets(carta->cidade, 50, stdin);
    carta->cidade[strcspn(carta->cidade, "\n")] = 0;
    printf("│ Cidade: %s                      \n", carta->cidade);
    printf("└─────────────────────────────────┘\n");
    printf("┌─────────────────────────────────┐\n");
    printf("│ Digite a população:            ");
    scanf("%d", &carta->populacao);
    printf("│ População: %d                   \n", carta->populacao);
    printf("└─────────────────────────────────┘\n");

    printf("┌─────────────────────────────────┐\n");
    printf("│ Digite a área:                 ");
    scanf("%f", &carta->area);
    printf("│ Área: %.2f                      \n", carta->area);
    printf("└─────────────────────────────────┘\n");

    printf("┌─────────────────────────────────┐\n");
    printf("│ Digite o PIB:                  ");
    scanf("%f", &carta->pib);
    printf("│ PIB: %.2f                       \n", carta->pib);
    printf("└─────────────────────────────────┘\n");

    printf("┌─────────────────────────────────┐\n");
    printf("│ Digite os pontos turísticos:   ");
    scanf("%d", &carta->pontosTuristicos);
    printf("│ Pontos Turísticos: %d           \n", carta->pontosTuristicos);
    printf("└─────────────────────────────────┘\n");
}

void mostrarCarta(Carta *carta, int numeroCarta)
{
    printf("\n┌─────────────────────────────────┐\n");
    printf("│ CARTA CADASTRADA                \n");
    printf("│ Carta: %d                      \n", numeroCarta);
    printf("│ Código: %s                      \n", carta->codigo);
    printf("│ Cidade: %s                      \n", carta->cidade);
    printf("│ Estado: %s                      \n", carta->estado);
    printf("│ População: %d                   \n", carta->populacao);
    printf("│ Área: %.2f                      \n", carta->area);
    printf("│ PIB: %.2f                       \n", carta->pib);
    printf("│ Densidade Populacional: %.2f    \n",
           carta->densidadePopulacional);
    printf("│ PIB Per Capita: %.2f            \n", carta->pibPerCapita);
    printf("│ Pontos Turísticos: %d           \n", carta->pontosTuristicos);
    printf("└─────────────────────────────────┘\n");
}
void exibirMenu()
{
    printf("\n┌─────────────────────────────────┐\n");
    printf("│ MENU DE COMPARAÇÃO              \n");
    printf("│                                 \n");
    printf("│ Escolha um atributo:            \n");
    printf("│ 1. População                    \n");
    printf("│ 2. Área                         \n");
    printf("│ 3. PIB                          \n");
    printf("│ 4. Pontos Turísticos            \n");
    printf("│ 5. Densidade Populacional       \n");
    printf("│ 6. PIB per Capita               \n");
    printf("│                                 \n");
    printf("└─────────────────────────────────┘\n");
    printf("Digite sua escolha (1-6): ");
}
void compararCartas()
{
    int opcao;
    exibirMenu();
    scanf("%d", &opcao);

    printf("\n┌─────────────────────────────────┐\n");
    printf("│ COMPARAÇÃO DE CARTAS            \n");
    switch (opcao)
    {
        case 1:
            printf("│ Atributo: PIB per capita        \n");
            printf("│                                 \n");
            printf("│ Carta 1 - %s (%s): %.2f         \n", carta1.cidade,
                   carta1.estado, carta1.pibPerCapita);
            printf("│ Carta 2 - %s (%s): %.2f         \n", carta2.cidade,
                   carta2.estado, carta2.pibPerCapita);
            printf("│                                 \n");
            if (carta1.pibPerCapita > carta2.pibPerCapita)
            {
                printf("│ Carta 1 é a melhor!            \n");
            }
            else if (carta1.pibPerCapita < carta2.pibPerCapita)
            {
                printf("│ Carta 2 é a melhor!            \n");
            }
            else
            {
                printf("│ Empate!                        \n");
            }
            break;
        case 2: // Área
            printf("│ Atributo: Área                 \n");
            printf("│                                 \n");
            printf("│ Carta 1 - %s (%s): %.2f         \n", carta1.cidade,
                   carta1.estado, carta1.area);
            printf("│ Carta 2 - %s (%s): %.2f         \n", carta2.cidade,
                   carta2.estado, carta2.area);
            printf("│                                 \n");
            if (carta1.area > carta2.area)
            {
                printf("│ Carta 1 é a melhor!            \n");
            }
            else if (carta1.area < carta2.area)
            {
                printf("│ Carta 2 é a melhor!            \n");
            }
            else
            {
                printf("│ Empate!                        \n");
            }
            break;

        case 3: // PIB
            printf("│ Atributo: PIB                  \n");
            printf("│                                 \n");
            printf("│ Carta 1 - %s (%s): %.2f         \n", carta1.cidade,
                   carta1.estado, carta1.pib);
            printf("│ Carta 2 - %s (%s): %.2f         \n", carta2.cidade,
                   carta2.estado, carta2.pib);
            printf("│                                 \n");
            if (carta1.pib > carta2.pib)
            {
                printf("│ Carta 1 é a melhor!            \n");
            }
            else if (carta1.pib < carta2.pib)
            {
                printf("│ Carta 2 é a melhor!            \n");
            }
            else
            {
                printf("│ Empate!                        \n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("│ Atributo: Pontos Turísticos    \n");
            printf("│                                 \n");
            printf("│ Carta 1 - %s (%s): %d         \n", carta1.cidade,
                   carta1.estado, carta1.pontosTuristicos);
            printf("│ Carta 2 - %s (%s): %d         \n", carta2.cidade,
                   carta2.estado, carta2.pontosTuristicos);
            printf("│                                 \n");
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
            {
                printf("│ Carta 1 é a melhor!            \n");
            }
            else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
            {
                printf("│ Carta 2 é a melhor!            \n");
            }
            else
            {
                printf("│ Empate!                        \n");
            }
            break;

        case 5: // Densidade Populacional (regra inversa)
            printf("│ Atributo: Densidade Populacional\n");
            printf("│ (Menor valor é melhor)          \n");
            printf("│                                 \n");
            printf("│ Carta 1 - %s (%s): %.2f         \n", carta1.cidade,
                   carta1.estado, carta1.densidadePopulacional);
            printf("│ Carta 2 - %s (%s): %.2f         \n", carta2.cidade,
                   carta2.estado, carta2.densidadePopulacional);
            printf("│                                 \n");
            if (carta1.densidadePopulacional < carta2.densidadePopulacional)
            {
                printf("│ Carta 1 é a melhor!            \n");
            }
            else if (carta1.densidadePopulacional >
                     carta2.densidadePopulacional)
            {
                printf("│ Carta 2 é a melhor!            \n");
            }
            else
            {
                printf("│ Empate!                        \n");
            }
            break;

        case 6: // PIB per Capita
            printf("│ Atributo: PIB per capita        \n");
            printf("│                                 \n");
            printf("│ Carta 1 - %s (%s): %.2f         \n", carta1.cidade,
                   carta1.estado, carta1.pibPerCapita);
            printf("│ Carta 2 - %s (%s): %.2f         \n", carta2.cidade,
                   carta2.estado, carta2.pibPerCapita);
            printf("│                                 \n");
            if (carta1.pibPerCapita > carta2.pibPerCapita)
            {
                printf("│ Carta 1 é a melhor!            \n");
            }
            else if (carta1.pibPerCapita < carta2.pibPerCapita)
            {
                printf("│ Carta 2 é a melhor!            \n");
            }
            else
            {
                printf("│ Empate!                        \n");
            }
            break;

        default:
            printf("│ Opção inválida!                \n");
            printf("│ Usando PIB per capita como padrão\n");
            printf("│                                 \n");
            printf("│ Carta 1 - %s (%s): %.2f         \n", carta1.cidade,
                   carta1.estado, carta1.pibPerCapita);
            printf("│ Carta 2 - %s (%s): %.2f         \n", carta2.cidade,
                   carta2.estado, carta2.pibPerCapita);
            printf("│                                 \n");
            if (carta1.pibPerCapita > carta2.pibPerCapita)
            {
                printf("│ Carta 1 é a melhor!            \n");
            }
            else if (carta1.pibPerCapita < carta2.pibPerCapita)
            {
                printf("│ Carta 2 é a melhor!            \n");
            }
            else
            {
                printf("│ Empate!                        \n");
            }
    }
    printf("└─────────────────────────────────┘\n");
}
int main()
{
    entradaDados(&carta1, 1);
    calcularIndicadores(&carta1);
    mostrarCarta(&carta1, 1);

    entradaDados(&carta2, 2);
    calcularIndicadores(&carta2);
    mostrarCarta(&carta2, 2);

    compararCartas();
    return 0;
}
