#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome[50], nome2[50];
    char codigo[4], codigo2[4];
    int pontosTuristicos, pontosTuristicos2, atributo1, atributo2;
    unsigned long int populacao, populacao2;
    float area, area2, pib, pib2;
    float densidadePopulacional, densidadePopulacional2, pibPerCapita, pibPerCapita2;
    float soma1, soma2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("*** SUPERTRUNFO ***\n");
    printf("Escolha o atributo que decidirá qual carta vencerá!\n");
    printf("1. Populacão\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional (menor é melhor)\n");

    printf("Atributo 1: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    switch (atributo1)
    {
    case 1:
        printf("2. Área\n3. PIB\n4. Número de pontos turísticos\n5. Densidade populacional (menor é melhor)\n");
        break;
    case 2:
        printf("1. População\n3. PIB\n4. Número de pontos turísticos\n5. Densidade populacional (menor é melhor)\n");
        break;
    case 3:
        printf("1. População\n2. Área\n4. Número de pontos turísticos\n5. Densidade populacional (menor é melhor)\n");
        break;
    case 4:
        printf("1. População\n2. Área\n3. PIB\n5. Densidade populacional (menor é melhor)\n");
        break;
    case 5:
        printf("1. População\n2. Área\n3. PIB\n4. Número de pontos turísticos\n");
        break;
    default:
        printf("Opção inválida!\n");
        return 1;
    }

    printf("\nAtributo 2: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("\nO segundo atributo deve ser diferente do primeiro. Tente novamente:\n");
        switch (atributo1)
        {
        case 1:
            printf("2. Área\n3. PIB\n4. Número de pontos turísticos\n5. Densidade populacional (menor é melhor)\n");
            break;
        case 2:
            printf("1. População\n3. PIB\n4. Número de pontos turísticos\n5. Densidade populacional (menor é melhor)\n");
            break;
        case 3:
            printf("1. População\n2. Área\n4. Número de pontos turísticos\n5. Densidade populacional (menor é melhor)\n");
            break;
        case 4:
            printf("1. População\n2. Área\n3. PIB\n5. Densidade populacional (menor é melhor)\n");
            break;
        case 5:
            printf("1. População\n2. Área\n3. PIB\n4. Número de pontos turísticos\n");
            break;
        }
        printf("Atributo 2: ");
        scanf("%d", &atributo2);
    }

    printf("\nAgora cadastre os dados da primeira cidade\n");

    printf("Nome da cidade: \n");
    scanf("%49s", nome);

    printf("Código da cidade: \n");
    scanf("%3s", codigo);

    printf("População da cidade: \n");
    scanf("%lu", &populacao);

    printf("Área da cidade: \n");
    scanf("%f", &area);

    printf("PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional = populacao / area;

    printf("\nAgora cadastre os dados da segunda cidade\n");
    printf("Nome da cidade: \n");
    scanf("%49s", nome2);

    printf("Código da cidade: \n");
    scanf("%3s", codigo2);

    printf("População da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Área da cidade: \n");
    scanf("%f", &area2);

    printf("PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    densidadePopulacional2 = populacao2 / area2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Cartas cadastradas com sucesso! \n");

    // printf("Aqui estão suas cartas:\n");
    // printf("\n");

    // printf("Carta 1:\n");
    // printf("Nome: %s \n", nome);
    // printf("Código: %s \n", codigo);
    // printf("População: %lu habitantes\n", populacao);
    // printf("Área: %.2f km² \n", area);
    // printf("PIB: R$ %f\n", pib);
    // printf("Pontos turísticos: %d \n", pontosTuristicos);
    // printf("Densidade populacional: %.2f hab/km² \n", densidadePopulacional);

    // printf("\n");

    // printf("Carta 2:\n");
    // printf("Nome: %s \n", nome2);
    // printf("Código: %s \n", codigo2);
    // printf("População: %lu habitantes\n", populacao2);
    // printf("Área: %.2f km² \n", area2);
    // printf("PIB: R$ %f \n", pib2);
    // printf("Pontos turísticos: %d \n", pontosTuristicos2);
    // printf("Densidade populacional: %.2f hab/km² \n", densidadePopulacional2);
    // printf("\n");

    printf("\n*** COMPARAÇÃO DAS CARTAS ***\n");
    printf("\n%s vs %s\n", nome, nome2);

    switch (atributo1)
    {
    case 1: // População
        switch (atributo2)
        {
        case 2: // Área
            printf("Atributos comparados: População e Área\n");
            printf("População e Área %s: %lu habitantes / %.2f km²\n", nome, populacao, area);
            printf("População e Área %s: %lu habitantes / %.2f km²\n", nome2, populacao2, area2);
            soma1 = populacao + area;
            soma2 = populacao2 + area2;
            printf("Soma de atributos %s: %.2f\n", nome, soma1);
            printf("Soma de atributos %s: %.2f\n", nome2, soma2);
            break;
        case 3: // PIB
            printf("Atributos comparados: População e PIB\n");
            printf("População e PIB %s: %lu habitantes / R$ %.2f\n", nome, populacao, pib);
            printf("População e PIB %s: %lu habitantes / R$ %.2f\n", nome2, populacao2, pib2);
            soma1 = populacao + pib;
            soma2 = populacao2 + pib2;
            printf("Soma de atributos %s: %.2f\n", nome, soma1);
            printf("Soma de atributos %s: %.2f\n", nome2, soma2);
            break;
        case 4: // Pontos turísticos
            printf("Atributos comparados: População e Pontos Turísticos\n");
            printf("População e Pontos turísticos %s: %lu habitantes / %d pontos turísticos\n", nome, populacao, pontosTuristicos);
            printf("População e Pontos turísticos %s: %lu habitantes / %d pontos turísticos\n", nome2, populacao2, pontosTuristicos2);
            soma1 = populacao + pontosTuristicos;
            soma2 = populacao2 + pontosTuristicos2;
            printf("Soma de atributos %s: %.2f\n", nome, soma1);
            printf("Soma de atributos %s: %.2f\n", nome2, soma2);
            break;
        case 5: // Densidade populacional
            printf("Somente será comparada a Densidade Populacional, pois o país com a menor vence o jogo\n");
            printf("Densidade populacional %s: %.2f hab/km²\n", nome, densidadePopulacional);
            printf("Densidade populacional %s: %.2f hab/km²\n", nome2, densidadePopulacional2);

            if (densidadePopulacional < densidadePopulacional2)
            {
                printf("%s venceu! (Menor densidade populacional)\n", nome);
            }
            else if (densidadePopulacional > densidadePopulacional2)
            {
                printf("%s venceu! (Menor densidade populacional)\n", nome2);
            }
            else
            {
                printf("Empate na densidade populacional!\n");
            }
            return 0;
        }
        break;
    case 2: // Área
        switch (atributo2)
        {
        case 1: // População
            printf("Atributos comparados: Área e População\n");
            printf("Área e População %s: %.2f km² / %lu habitantes\n", nome, area, populacao);
            printf("Área e População %s: %.2f km² / %lu habitantes\n", nome2, area2, populacao2);
            soma1 = area + populacao;
            soma2 = area2 + populacao2;
            printf("Soma de atributos %s: %.2f\n", nome, soma1);
            printf("Soma de atributos %s: %.2f\n", nome2, soma2);
            break;
        case 3: // PIB
            printf("Atributos comparados: Área e PIB\n");
            printf("Área e PIB %s: %.2f km² / R$ %.2f\n", nome, area, pib);
            printf("Área e PIB %s: %.2f km² / R$ %.2f\n", nome2, area2, pib2);
            soma1 = area + pib;
            soma2 = area2 + pib2;
            printf("Soma de atributos %s: %.2f\n", nome, soma1);
            printf("Soma de atributos %s: %.2f\n", nome2, soma2);
            break;
        case 4: // Pontos turísticos
            printf("Atributos comparados: Área e Pontos Turísticos\n");
            printf("Área e Pontos turísticos %s: %.2f km² / %d pontos turísticos\n", nome, area, pontosTuristicos);
            printf("Área e Pontos turísticos %s: %.2f km² / %d pontos turísticos\n", nome2, area2, pontosTuristicos2);
            soma1 = area + pontosTuristicos;
            soma2 = area2 + pontosTuristicos2;
            printf("Soma de atributos %s: %.2f\n", nome, soma1);
            printf("Soma de atributos %s: %.2f\n", nome2, soma2);
            break;
        case 5: // Densidade populacional
            printf("Somente será comparada a Densidade Populacional, pois o país com a menor vence o jogo\n");
            printf("Densidade populacional %s: %.2f hab/km²\n", nome, densidadePopulacional);
            printf("Densidade populacional %s: %.2f hab/km²\n", nome2, densidadePopulacional2);

            if (densidadePopulacional < densidadePopulacional2)
            {
                printf("%s venceu! (Menor densidade populacional)\n", nome);
            }
            else if (densidadePopulacional > densidadePopulacional2)
            {
                printf("%s venceu! (Menor densidade populacional)\n", nome2);
            }
            else
            {
                printf("Empate na densidade populacional!\n");
            }
            return 0;
        }
        break;
    case 3: // PIB
        switch (atributo2)
        {
        case 1: // População
            printf("Atributos comparados: PIB e População\n");
            printf("PIB e População %s: R$ %.2f / %lu habitantes\n", nome, pib, populacao);
            printf("PIB e População %s: R$ %.2f / %lu habitantes\n", nome2, pib2, populacao2);
            soma1 = pib + populacao;
            soma2 = pib2 + populacao2;
            printf("Soma de atributos %s: %.2f\n", nome, soma1);
            printf("Soma de atributos %s: %.2f\n", nome2, soma2);
            break;
        case 2: // Área
            printf("Atributos comparados: PIB e Área\n");
            printf("PIB e Área %s: R$ %.2f / %.2f km²\n", nome, pib, area);
            printf("PIB e Área %s: R$ %.2f / %.2f km²\n", nome2, pib2, area2);
            soma1 = pib + area;
            soma2 = pib2 + area2;
            printf("Soma de atributos %s: %.2f\n", nome, soma1);
            printf("Soma de atributos %s: %.2f\n", nome2, soma2);
            break;
        case 4: // Pontos turísticos
            printf("Atributos comparados: PIB e Pontos Turísticos\n");
            printf("PIB e Pontos turísticos %s: R$ %.2f / %d pontos turísticos\n", nome, pib, pontosTuristicos);
            printf("PIB e Pontos turísticos %s: R$ %.2f / %d pontos turísticos\n", nome2, pib2, pontosTuristicos2);
            soma1 = pib + pontosTuristicos;
            soma2 = pib2 + pontosTuristicos2;
            printf("Soma de atributos %s: %.2f\n", nome, soma1);
            printf("Soma de atributos %s: %.2f\n", nome2, soma2);
            break;
        case 5: // Densidade populacional
            printf("Somente será comparada a Densidade Populacional, pois o país com a menor vence o jogo\n");
            printf("Densidade populacional %s: %.2f hab/km²\n", nome, densidadePopulacional);
            printf("Densidade populacional %s: %.2f hab/km²\n", nome2, densidadePopulacional2);

            if (densidadePopulacional < densidadePopulacional2)
            {
                printf("%s venceu! (Menor densidade populacional)\n", nome);
            }
            else if (densidadePopulacional > densidadePopulacional2)
            {
                printf("%s venceu! (Menor densidade populacional)\n", nome2);
            }
            else
            {
                printf("Empate na densidade populacional!\n");
            }
            return 0;
        }
        break;
    case 4: // Pontos turísticos
        switch (atributo2)
        {
        case 1: // População
            printf("Atributos comparados: Pontos Turísticos e População\n");
            printf("Pontos turísticos e População %s: %d pontos turísticos / %lu habitantes\n", nome, pontosTuristicos, populacao);
            printf("Pontos turísticos e População %s: %d pontos turísticos / %lu habitantes\n", nome2, pontosTuristicos2, populacao2);
            soma1 = pontosTuristicos + populacao;
            soma2 = pontosTuristicos2 + populacao2;
            printf("Soma de atributos %s: %.2f\n", nome, soma1);
            printf("Soma de atributos %s: %.2f\n", nome2, soma2);
            break;
        case 2: // Área
            printf("Atributos comparados: Pontos Turísticos e Área\n");
            printf("Pontos turísticos e Área %s: %d pontos turísticos / %.2f km²\n", nome, pontosTuristicos, area);
            printf("Pontos turísticos e Área %s: %d pontos turísticos / %.2f km²\n", nome2, pontosTuristicos2, area2);
            soma1 = pontosTuristicos + area;
            soma2 = pontosTuristicos2 + area2;
            printf("Soma de atributos %s: %.2f\n", nome, soma1);
            printf("Soma de atributos %s: %.2f\n", nome2, soma2);
            break;
        case 3: // PIB
            printf("Atributos comparados: Pontos Turísticos e PIB\n");
            printf("Pontos turísticos e PIB %s: %d pontos turísticos / R$ %.2f\n", nome, pontosTuristicos, pib);
            printf("Pontos turísticos e PIB %s: %d pontos turísticos / R$ %.2f\n", nome2, pontosTuristicos2, pib2);
            soma1 = pontosTuristicos + pib;
            soma2 = pontosTuristicos2 + pib2;
            printf("Soma de atributos %s: %.2f\n", nome, soma1);
            printf("Soma de atributos %s: %.2f\n", nome2, soma2);
            break;
        case 5: // Densidade populacional
            printf("Somente será comparada a Densidade Populacional, pois o país com a menor vence o jogo\n");
            printf("Densidade populacional %s: %.2f hab/km²\n", nome, densidadePopulacional);
            printf("Densidade populacional %s: %.2f hab/km²\n", nome2, densidadePopulacional2);

            if (densidadePopulacional < densidadePopulacional2)
            {
                printf("%s venceu! (Menor densidade populacional)\n", nome);
            }
            else if (densidadePopulacional > densidadePopulacional2)
            {
                printf("%s venceu! (Menor densidade populacional)\n", nome2);
            }
            else
            {
                printf("Empate na densidade populacional!\n");
            }
            return 0;
        }
        break;
    case 5: // Densidade populacional
        printf("Somente será comparada a Densidade Populacional, pois o país com a menor vence o jogo\n");
        printf("Densidade populacional %s: %.2f hab/km²\n", nome, densidadePopulacional);
        printf("Densidade populacional %s: %.2f hab/km²\n", nome2, densidadePopulacional2);

        if (densidadePopulacional < densidadePopulacional2)
        {
            printf("%s venceu! (Menor densidade populacional)\n", nome);
        }
        else if (densidadePopulacional > densidadePopulacional2)
        {
            printf("%s venceu! (Menor densidade populacional)\n", nome2);
        }
        else
        {
            printf("Empate na densidade populacional!\n");
        }
        return 0;
    default:
        printf("Opção inválida!");
        return 1;
    }

    int vencedor = (soma1 > soma2) ? 1 : (soma1 < soma2) ? 2 : 0;

    if (vencedor == 1)
    {
        printf("%s venceu!\n", nome);
    }
    else if (vencedor == 2)
    {
        printf("%s venceu!\n", nome2);
    }
    else
    {
        printf("Houve um empate!\n");
    }

    return 0;
}
