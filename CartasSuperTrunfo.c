#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Função para calcular a densidade populacional
float calcular_densidade_populacional(unsigned long int populacao, float area)
{
    return (float)populacao / area;
}

// Função para calcular o PIB per capita
float calcular_pib_per_capita(float pib_bilhoes, unsigned long int populacao)
{
    return (pib_bilhoes * 1000000000) / populacao;
}

// Função para calcular o Super Poder
float calcular_super_poder(unsigned long int populacao, float area, float pib, int pontos_turisticos, float pib_per_capita, float densidade_populacional)
{
    return (float)populacao + area + pib + (float)pontos_turisticos + pib_per_capita + (1.0 / densidade_populacional);
}

// Função para comparar dois valores (retorna 1 se valor1 > valor2, 0 caso contrário)
int comparar_maior(float valor1, float valor2)
{
    return valor1 > valor2;
}

// Função para comparar densidade populacional (retorna 1 se valor1 < valor2, 0 caso contrário)
int comparar_densidade(float densidade1, float densidade2)
{
    return densidade1 < densidade2;
}

// Função para determinar o vencedor de um atributo
// Retorna: 1 se carta1 vence, 2 se carta2 vence, 0 se empate
int determinar_vencedor_atributo(int numero_atributo, float valor_carta1, float valor_carta2)
{
    if (numero_atributo == 5) // Densidade demográfica - menor vence
    {
        if (valor_carta1 < valor_carta2)
            return 1;
        else if (valor_carta2 < valor_carta1)
            return 2;
        else
            return 0;
    }
    else // Outros atributos - maior vence
    {
        if (valor_carta1 > valor_carta2)
            return 1;
        else if (valor_carta2 > valor_carta1)
            return 2;
        else
            return 0;
    }
}

int main()
{
    // Declaração das variáveis
    char codigo1[4], codigo2[4];
    char estado1[3], estado2[3];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");
    printf("Digite o código da primeira cidade (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o estado da primeira cidade (ex: MG): ");
    scanf("%s", estado1);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da primeira cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da primeira cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda carta
    printf("\n=== CADASTRO DA SEGUNDA CARTA ===\n");
    printf("Digite o código da segunda cidade (ex: A02): ");
    scanf("%s", codigo2);

    printf("Digite o estado da segunda cidade (ex: SP): ");
    scanf("%s", estado2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da segunda cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da segunda cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para a primeira carta
    densidade_populacional1 = calcular_densidade_populacional(populacao1, area1);
    pib_per_capita1 = calcular_pib_per_capita(pib1, populacao1);
    super_poder1 = calcular_super_poder(populacao1, area1, pib1, pontos_turisticos1, pib_per_capita1, densidade_populacional1);

    // Cálculos para a segunda carta
    densidade_populacional2 = calcular_densidade_populacional(populacao2, area2);
    pib_per_capita2 = calcular_pib_per_capita(pib2, populacao2);
    super_poder2 = calcular_super_poder(populacao2, area2, pib2, pontos_turisticos2, pib_per_capita2, densidade_populacional2);

    // Exibição dos dados da primeira carta
    printf("\n=== CARTA 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição dos dados da segunda carta
    printf("\n=== CARTA 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Menu dinâmico para escolha de dois atributos diferentes
    int atributo1 = 0, atributo2 = 0;
    int sair = 0;
    do
    {
        printf("\n=== MENU DE COMPARAÇÃO FINAL ===\n");
        printf("Escolha o primeiro atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade demográfica\n");
        printf("6 - Sair\n");
        printf("Digite o número da opção desejada: ");
        scanf("%d", &atributo1);

        if (atributo1 == 6)
        {
            sair = 1;
            break;
        }
        if (atributo1 < 1 || atributo1 > 6)
        {
            printf("Opção inválida! Tente novamente.\n");
            continue;
        }

        // Menu para o segundo atributo
        do
        {
            printf("\nEscolha o segundo atributo para comparar:\n");
            printf("Não pode ser o mesmo do primeiro!\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de pontos turísticos\n");
            printf("5 - Densidade demográfica\n");
            printf("Digite o número da opção desejada: ");
            scanf("%d", &atributo2);

            if (atributo2 < 1 || atributo2 > 5)
            {
                printf("Opção inválida! Tente novamente.\n");
            }
            else if (atributo2 == atributo1)
            {
                printf("Escolha um atributo diferente do primeiro!\n");
            }
        } while (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1);

        // Função para obter valor do atributo
        float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
        char nome_atributo1[30], nome_atributo2[30];

        switch (atributo1)
        {
        case 1:
            valor1_carta1 = (float)populacao1;
            valor1_carta2 = (float)populacao2;
            sprintf(nome_atributo1, "População");
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            sprintf(nome_atributo1, "Área");
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            sprintf(nome_atributo1, "PIB");
            break;
        case 4:
            valor1_carta1 = (float)pontos_turisticos1;
            valor1_carta2 = (float)pontos_turisticos2;
            sprintf(nome_atributo1, "Pontos Turísticos");
            break;
        case 5:
            valor1_carta1 = densidade_populacional1;
            valor1_carta2 = densidade_populacional2;
            sprintf(nome_atributo1, "Densidade Demográfica");
            break;
        }
        switch (atributo2)
        {
        case 1:
            valor2_carta1 = (float)populacao1;
            valor2_carta2 = (float)populacao2;
            sprintf(nome_atributo2, "População");
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            sprintf(nome_atributo2, "Área");
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            sprintf(nome_atributo2, "PIB");
            break;
        case 4:
            valor2_carta1 = (float)pontos_turisticos1;
            valor2_carta2 = (float)pontos_turisticos2;
            sprintf(nome_atributo2, "Pontos Turísticos");
            break;
        case 5:
            valor2_carta1 = densidade_populacional1;
            valor2_carta2 = densidade_populacional2;
            sprintf(nome_atributo2, "Densidade Demográfica");
            break;
        }

        // Comparação dos atributos individualmente usando a função criada
        int vencedor1, vencedor2;
        vencedor1 = determinar_vencedor_atributo(atributo1, valor1_carta1, valor1_carta2);
        vencedor2 = determinar_vencedor_atributo(atributo2, valor2_carta1, valor2_carta2);

        // Soma dos atributos
        float soma_carta1 = valor1_carta1 + valor2_carta1;
        float soma_carta2 = valor1_carta2 + valor2_carta2;

        printf("\n=== RESULTADO DA COMPARAÇÃO FINAL ===\n");
        printf("Carta 1 - %s (%s):\n", cidade1, estado1);
        printf("  %s: %.2f\n", nome_atributo1, valor1_carta1);
        printf("  %s: %.2f\n", nome_atributo2, valor2_carta1);
        printf("  Soma dos atributos: %.2f\n", soma_carta1);
        printf("Carta 2 - %s (%s):\n", cidade2, estado2);
        printf("  %s: %.2f\n", nome_atributo1, valor1_carta2);
        printf("  %s: %.2f\n", nome_atributo2, valor2_carta2);
        printf("  Soma dos atributos: %.2f\n", soma_carta2);

        // Exibe vencedor de cada atributo
        printf("\nVencedor no atributo %s: %s\n", nome_atributo1, vencedor1 == 1 ? cidade1 : (vencedor1 == 2 ? cidade2 : "Empate"));
        printf("Vencedor no atributo %s: %s\n", nome_atributo2, vencedor2 == 1 ? cidade1 : (vencedor2 == 2 ? cidade2 : "Empate"));

        // Exibe vencedor da soma
        if (soma_carta1 > soma_carta2)
            printf("\nVencedor da rodada: Carta 1 (%s)\n", cidade1);
        else if (soma_carta2 > soma_carta1)
            printf("\nVencedor da rodada: Carta 2 (%s)\n", cidade2);
        else
            printf("\nEmpate!\n");

        printf("\nPressione Enter para continuar...");
        getchar();
        getchar();

    } while (!sair);

    return 0;
}
