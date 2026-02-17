#include <stdio.h>
#include <stdlib.h> // para transformar string em inteiro

int main()
{

    // Declaração das variáveis para os atributos das cidades

    int populacao, pontosturisticos, populacao2, pontosturisticos2, menu, menu2, atributo, atributo2, escolhamultipla1, escolhamultipla2;
    long int pib, pib2, superpoder, superpoder2;
    // mudei o pib, pois o valor do pib é muito grande, e o tipo float não é adequado para armazenar valores tão grandes, pois pode ocorrer perda de precisão. O tipo long int é mais apropriado para armazenar valores inteiros grandes, como o PIB de uma cidade.
    float area, densidade, pibpercapta, area2, densidade2, pibpercapta2;
    char pais[50], estado[50], pais2[50], estado2[50], codigo[10], codigo2[10];
    // mudei os nomes das variáveis para país e estado, acho que me confundi nas primeiras versões do código.

    // menu interativo com switch para o jogo:

    printf("\n--- Menu  Principal ---\n");
    printf("1. Cadastrar Cartas Super Trunfo\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &menu);

    switch (menu)
    {

    case 1:
        printf("\nVocê escolheu cadastrar as cartas Super Trunfo.\n");
        // requerimentos do usuário para 1ª carta:

        printf("\n=== Cadastro da 1ª Carta Super Trunfo ===\n");
        printf("Digite o nome do 1º país: ");
        scanf("%s", pais);
        printf("Digite o nome do 1ª estado: ");
        scanf(" %[^\n]", estado); // "%[^\n]" lê até a quebra de linha (nome com espaços) -- vi no arquivo de um colega aqui no github
        printf("Digite o código do estado: ");
        scanf("%s", codigo);
        printf("Digite o número de habitantes: ");
        scanf("%d", &populacao);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontosturisticos);
        printf("Digite a área do estado: ");
        scanf("%f", &area);
        printf("Digite o PIB do estado: ");
        scanf("%ld", &pib);

        // requerimentos do usuário para 2ª carta:

        printf("\n=== Cadastro da 2ª Carta Super Trunfo ===\n");
        printf("Digite o nome do 2º país: ");
        scanf("%s", pais2);
        printf("Digite o nome do 2º estado: ");
        scanf(" %[^\n]", estado2);
        printf("Digite o código do estado: ");
        scanf("%s", codigo2);
        printf("Digite o número de habitantes: ");
        scanf("%d", &populacao2);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontosturisticos2);
        printf("Digite a área do estado: ");
        scanf("%f", &area2);
        printf("Digite o PIB do estado: ");
        scanf("%ld", &pib2);
        break;
    case 2:
        printf("\nRegras do Jogo Super Trunfo:\n");
        printf("1. Cada carta representa uma cidade com atributos específicos.\n");
        printf("2. Os jogadores comparam os atributos das cartas para determinar o vencedor.\n");
        printf("3. O jogador com a carta de maior valor em um atributo específico vence a rodada.\n");
        printf("4. O jogo continua até que todas as cartas sejam comparadas.\n");
        printf("5. O jogador com mais vitórias ao final do jogo é o vencedor.\n\n");
        break;
    case 3:
        printf("\nSaindo do jogo. Obrigado por jogar!\n");
        break;
    default:
        printf("\nOpção inválida. Por favor, escolha uma opção válida.\n");
        break;
    }

    // Cálculo de densidade populacional e PIB per capita e Super Poder:

    // Carta 1:
    densidade = (float)populacao / area;
    pibpercapta = (float)pib / populacao;
    superpoder = populacao + pontosturisticos + area + pib + pibpercapta + 1 / densidade;

    // Carta 2:
    densidade2 = (float)populacao2 / area2;
    pibpercapta2 = (float)pib2 / populacao2;
    superpoder2 = populacao2 + pontosturisticos2 + area2 + pib2 + pibpercapta2 + 1 / densidade2;

    // variáveis para armazenar as possibilidades de comparação entre as cartas
    char carta1[100];
    char carta2[100];
    sprintf(carta1, "Carta 1 - %s | %s", pais, codigo);
    sprintf(carta2, "Carta 2 - %s | %s", pais2, codigo2);
    // as variáveis carta1 e carta2 armazenam as informações básicas das cartas, como país, estado e código, para facilitar a comparação e exibição durante o jogo.

    char *cartas[] = {carta1, carta2};
    char *ganhador[] = {"Carta 1 vence!", "Carta 2 vence!"};

    // segundo menu interativo com switch para o jogo:
    printf("\n--- Continuar Jogo ---\n");
    printf("1. Exibir Cartas\n");
    printf("2. Comparação geral\n");
    printf("3. Comparação detalhada\n");
    printf("4. Comparação super detalhada\n");
    printf("5. Comparação com Múltiplos Atributos\n");
    printf("6. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &menu2);

    switch (menu2)
    {
    case 1:
        // exibição 1ª carta:
        printf("\n--- Carta 1 ---\n");
        printf("País: %s\n", pais);
        printf("Estado: %s\n", estado);
        printf("Código: %s\n", codigo);
        printf("População: %d\n", populacao);
        printf("Pontos Turísticos: %d\n", pontosturisticos);
        printf("Área: %.2f km²\n", area);
        printf("PIB: R$%ld\n", pib);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade);
        printf("PIB per Capita: R$%.2f\n", pibpercapta);

        // exibição 2ª carta:
        printf("\n--- Carta 2 ---\n");
        printf("País: %s\n", pais2);
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("População: %d\n", populacao2);
        printf("Pontos Turísticos: %d\n", pontosturisticos2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$%ld\n", pib2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: R$%.2f\n", pibpercapta2);
        break;
    case 2:
        // comparação entre as cartas usando operadores de comparação e operadores relacionais:
        printf("\n--- Comparação entre as Cartas ---\n");
        printf("Comparação de População entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[populacao < populacao2]);
        printf("Comparação de Pontos Turísticos entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[pontosturisticos < pontosturisticos2]);
        printf("Comparação de Área entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[area < area2]);
        printf("Comparação de PIB entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[pib < pib2]);
        printf("Comparação de Densidade Populacional entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[densidade > densidade2]);
        printf("Comparação de PIB per Capita entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[pibpercapta < pibpercapta2]);
        printf("Comparação de Super Poder entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[superpoder < superpoder2]);
        break;
    case 3:
        // implementação de sistema de comparação de cartas usando if e if-else:
        printf("\n--- Resultados das Comparações Detalhadas ---\n");
        if (superpoder > superpoder2)
        {
            printf("%s é a carta vencedora com Super Poder de %.2ld!\n", cartas[0], superpoder);
        }
        else if (superpoder < superpoder2)
        {
            printf("%s é a carta vencedora com Super Poder de %.2ld!\n", cartas[1], superpoder2);
        }
        else
        {
            printf("As cartas são empatadas com Super Poder de %.2ld!\n", superpoder);
        }

        if (populacao > populacao2)
        {
            printf("%s é a carta vencedora com População de %d habitantes!\n", cartas[0], populacao);
        }
        else if (populacao < populacao2)
        {
            printf("%s é a carta vencedora com População de %d habitantes!\n", cartas[1], populacao2);
        }
        else
        {
            printf("As cartas são empatadas com População de %d habitantes!\n", populacao);
        }

        if (pontosturisticos > pontosturisticos2)
        {
            printf("%s é a carta vencedora com %d pontos turísticos!\n", cartas[0], pontosturisticos);
        }
        else if (pontosturisticos < pontosturisticos2)
        {
            printf("%s é a carta vencedora com %d pontos turísticos!\n", cartas[1], pontosturisticos2);
        }
        else
        {
            printf("As cartas são empatadas com %d pontos turísticos!\n", pontosturisticos);
        }

        if (area > area2)
        {
            printf("%s é a carta vencedora com área de %.2f km²!\n", cartas[0], area);
        }
        else if (area < area2)
        {
            printf("%s é a carta vencedora com área de %.2f km²!\n", cartas[1], area2);
        }
        else
        {
            printf("As cartas são empatadas com área de %.2f km²!\n", area);
        }

        if (pib > pib2)
        {
            printf("%s é a carta vencedora com PIB de R$ %ld!\n", cartas[0], pib);
        }
        else if (pib < pib2)
        {
            printf("%s é a carta vencedora com PIB de R$ %ld!\n", cartas[1], pib2);
        }
        else
        {
            printf("As cartas são empatadas com PIB de R$ %ld!\n", pib);
        }

        if (densidade > densidade2)
        {
            printf("%s é a carta vencedora com densidade populacional de %.2f hab/km²!\n", cartas[0], densidade);
        }
        else if (densidade < densidade2)
        {
            printf("%s é a carta vencedora com densidade populacional de %.2f hab/km²!\n", cartas[1], densidade2);
        }
        else
        {
            printf("As cartas são empatadas com densidade populacional de %.2f hab/km²!\n", densidade);
        }

        if (pibpercapta > pibpercapta2)
        {
            printf("%s é a carta vencedora com PIB per Capita de R$ %.2f!\n\n\n", cartas[0], pibpercapta);
        }
        else if (pibpercapta < pibpercapta2)
        {
            printf("%s é a carta vencedora com PIB per Capita de R$ %.2f!\n\n\n", cartas[1], pibpercapta2);
        }
        else
        {
            printf("As cartas são empatadas com PIB per Capita de R$ %.2f!\n\n\n", pibpercapta);
        }
        break;
    case 4:
        // implementação de sistema de comparação de cartas usando switch case para cada atributo:
        printf("\n--- Comparação Super Detalhada ---\n");
        printf("Escolha o atributo específico para comparação:\n");
        printf("1 - Países\n");
        printf("2 - População\n");
        printf("3 - Pontos Turísticos\n");
        printf("4 - Área\n");
        printf("5 - PIB\n");
        printf("6 - Densidade Populacional\n");
        printf("7 - PIB per Capita\n");
        printf("8 - Super Poder\n");
        printf("Digite o número do atributo escolhido: ");
        scanf("%d", &atributo);

        switch (atributo)
        {
        case 1:
            // reaproveitei a lógica de comparação geral e comparação detalhada para os atributos, mas adicionei mais detalhes e informações para tornar a comparação mais completa e informativa para o usuário.
            printf("Informações das cartas:\n");
            printf("País 1: %s X País 2: %s\n", pais, pais2);
            printf("Estado 1: %s X Estado 2: %s\n", estado, estado2);
            printf("Código 1: %s X Código 2: %s\n", codigo, codigo2);
            printf("População 1: %d X População 2: %d\n", populacao, populacao2);
            printf("Pontos Turísticos 1: %d X Pontos Turísticos 2: %d\n", pontosturisticos, pontosturisticos2);
            printf("Área 1: %.2f km² X Área 2: %.2f km²\n", area, area2);
            printf("PIB 1: R$%ld X PIB 2: R$%ld\n", pib, pib2);
            printf("Densidade Populacional 1: %.2f hab/km² X Densidade Populacional 2: %.2f hab/km²\n", densidade, densidade2);
            printf("PIB per Capita 1: R$%.2f X PIB per Capita 2: R$%.2f\n", pibpercapta, pibpercapta2);
            printf("Super Poder 1: %.2ld X Super Poder 2: %.2ld\n", superpoder, superpoder2);
            printf("\n\nApenas para comparação detalhada, não há vencedor direto nesta opção.\n\n");
            break;
        case 2:
            if (populacao > populacao2)
            {

                printf("Atributo escolhido: População ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("População de %s: %d habitantes\n", cartas[0], populacao);
                printf("População de %s: %d habitantes\n", cartas[1], populacao2);
                printf("Comparação de População entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[populacao < populacao2]);
            }
            else if (populacao < populacao2)
            {
                printf("Atributo escolhido: População ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("População de %s: %d habitantes\n", cartas[0], populacao);
                printf("População de %s: %d habitantes\n", cartas[1], populacao2);
                printf("Comparação de População entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[populacao > populacao2]);
            }
            else
            {
                printf("Atributo escolhido: População ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("População de %s: %d habitantes\n", cartas[0], populacao);
                printf("População de %s: %d habitantes\n", cartas[1], populacao2);
                printf("As populações são iguais. Empate!\n");
            }
            break;
        case 3:
            if (pontosturisticos > pontosturisticos2)
            {
                printf("Atributo escolhido: Pontos Turísticos ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("Pontos Turísticos de %s: %d\n", cartas[0], pontosturisticos);
                printf("Pontos Turísticos de %s: %d\n", cartas[1], pontosturisticos2);
                printf("Comparação de Pontos Turísticos entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[pontosturisticos < pontosturisticos2]);
            }
            else if (pontosturisticos < pontosturisticos2)
            {
                printf("Atributo escolhido: Pontos Turísticos ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("Pontos Turísticos de %s: %d\n", cartas[0], pontosturisticos);
                printf("Pontos Turísticos de %s: %d\n", cartas[1], pontosturisticos2);
                printf("Comparação de Pontos Turísticos entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[pontosturisticos > pontosturisticos2]);
            }
            else
            {
                printf("Atributo escolhido: Pontos Turísticos ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("Pontos Turísticos de %s: %d\n", cartas[0], pontosturisticos);
                printf("Pontos Turísticos de %s: %d\n", cartas[1], pontosturisticos2);
                printf("As quantidades de pontos turísticos são iguais. Empate!\n");
            }
            break;
        case 4:
            if (area > area2)
            {
                printf("Atributo escolhido: Área ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("Área de %s: %.2f km²\n", cartas[0], area);
                printf("Área de %s: %.2f km²\n", cartas[1], area2);
                printf("Comparação de Área entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[area < area2]);
            }
            else if (area < area2)
            {
                printf("Atributo escolhido: Área ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("Área de %s: %.2f km²\n", cartas[0], area);
                printf("Área de %s: %.2f km²\n", cartas[1], area2);
                printf("Comparação de Área entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[area > area2]);
            }
            else
            {
                printf("Atributo escolhido: Área ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("Área de %s: %.2f km²\n", cartas[0], area);
                printf("Área de %s: %.2f km²\n", cartas[1], area2);
                printf("As áreas são iguais. Empate!\n");
            }
            break;
        case 5:
            if (pib > pib2)
            {
                printf("Atributo escolhido: PIB ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("PIB de %s: R$%ld\n", cartas[0], pib);
                printf("PIB de %s: R$%ld\n", cartas[1], pib2);
                printf("Comparação de PIB entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[pib < pib2]);
            }
            else if (pib < pib2)
            {
                printf("Atributo escolhido: PIB ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("PIB de %s: R$%ld\n", cartas[0], pib);
                printf("PIB de %s: R$%ld\n", cartas[1], pib2);
                printf("Comparação de PIB entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[pib > pib2]);
            }
            else
            {
                printf("Atributo escolhido: PIB ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("PIB de %s: R$%ld\n", cartas[0], pib);
                printf("PIB de %s: R$%ld\n", cartas[1], pib2);
                printf("Os PIBs são iguais. Empate!\n");
            }
            break;
        case 6:
            if (densidade < densidade2)
            {
                printf("Atributo escolhido: Densidade Populacional ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("Densidade Populacional de %s: %.2f hab/km²\n", cartas[0], densidade);
                printf("Densidade Populacional de %s: %.2f hab/km²\n", cartas[1], densidade2);
                printf("Comparação de Densidade Populacional entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[densidade > densidade2]);
            }
            else if (densidade > densidade2)
            {
                printf("Atributo escolhido: Densidade Populacional ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("Densidade Populacional de %s: %.2f hab/km²\n", cartas[0], densidade);
                printf("Densidade Populacional de %s: %.2f hab/km²\n", cartas[1], densidade2);
                printf("Comparação de Densidade Populacional entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[densidade < densidade2]);
            }
            else
            {
                printf("Atributo escolhido: Densidade Populacional ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("Densidade Populacional de %s: %.2f hab/km²\n", cartas[0], densidade);
                printf("Densidade Populacional de %s: %.2f hab/km²\n", cartas[1], densidade2);
                printf("As densidades populacionais são iguais. Empate!\n");
            }
            break;
        case 7:
            if (pibpercapta > pibpercapta2)
            {
                printf("Atributo escolhido: PIB per Capita ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("PIB per Capita de %s: R$%.2f\n", cartas[0], pibpercapta);
                printf("PIB per Capita de %s: R$%.2f\n", cartas[1], pibpercapta2);
                printf("Comparação de PIB per Capita entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[pibpercapta < pibpercapta2]);
            }
            else if (pibpercapta < pibpercapta2)
            {
                printf("Atributo escolhido: PIB per Capita ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("PIB per Capita de %s: R$%.2f\n", cartas[0], pibpercapta);
                printf("PIB per Capita de %s: R$%.2f\n", cartas[1], pibpercapta2);
                printf("Comparação de PIB per Capita entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[pibpercapta > pibpercapta2]);
            }
            else
            {
                printf("Atributo escolhido: PIB per Capita ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("PIB per Capita de %s: R$%.2f\n", cartas[0], pibpercapta);
                printf("PIB per Capita de %s: R$%.2f\n", cartas[1], pibpercapta2);
                printf("Os PIB per Capita são iguais. Empate!\n");
            }
            break;
        case 8:
            if (superpoder > superpoder2)
            {
                printf("Atributo escolhido: Super Poder ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("Super Poder de %s: %.2ld\n", cartas[0], superpoder);
                printf("Super Poder de %s: %.2ld\n", cartas[1], superpoder2);
                printf("Comparação de Super Poder entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[superpoder < superpoder2]);
            }
            else if (superpoder < superpoder2)
            {
                printf("Atributo escolhido: Super Poder ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("Super Poder de %s: %.2ld\n", cartas[0], superpoder);
                printf("Super Poder de %s: %.2ld\n", cartas[1], superpoder2);
                printf("Comparação de Super Poder entre %s e %s: %s\n", cartas[0], cartas[1], ganhador[superpoder > superpoder2]);
            }
            else
            {
                printf("Atributo escolhido: Super Poder ");
                printf("Cartas: %s e %s\n", cartas[0], cartas[1]);
                printf("Super Poder de %s: %.2ld\n", cartas[0], superpoder);
                printf("Super Poder de %s: %.2ld\n", cartas[1], superpoder2);
                printf("Os Super Poderes são iguais. Empate!\n");
            }
            break;
        default:
            printf("Opção de atributo inválida. Por favor, escolha um número entre 1 e 8.\n");
            break;
        }

        break;
    case 5:

        printf("\n-- Comparação múltipla --\n");
        printf("\nEscolha o primeiro atributo: \n");
        printf("1 - População\n");
        printf("2 - Pontos Turísticos\n");
        printf("3 - Área\n");
        printf("4 - PIB\n");
        printf("5- Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        printf("Digite o número do atributo escolhido: \n");
        scanf("%d", &escolhamultipla1);

        printf("\n\n-- Comparação múltipla --\n");
        printf("\nEscolha o segundo atributo: \n");
        printf("1 - População\n");
        printf("2 - Pontos Turísticos\n");
        printf("3 - Área\n");
        printf("4 - PIB\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        printf("Digite o número do atributo escolhido: \n");
        scanf("%d", &escolhamultipla2);

        if (escolhamultipla1 != escolhamultipla2 && (escolhamultipla1 > 0 && escolhamultipla1 <= 6) && (escolhamultipla2 > 0 && escolhamultipla2 <= 6))
        {
            // serve para economizar código e gerar as 15 possibilidades de combinações das escolhas:
            char result;
            int esc1 = (escolhamultipla1 < escolhamultipla2) ? escolhamultipla1 : escolhamultipla2;
            int esc2 = (escolhamultipla1 > escolhamultipla2) ? escolhamultipla1 : escolhamultipla2;
            sprintf(result, "%d%d", esc1, esc2);
            int result1 = atoi(result);

            switch (result1)
            {
            case 12:
                int soma12a = populacao + pontosturisticos;
                int soma12b = populacao2 + pontosturisticos2;
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: População e Pontos Turísticos\n");
                printf("Valores de População para cada carta : Carta 1 - %d X Carta 2 - %d\n", populacao, populacao2);
                printf("Valores de Pontos Turísticos para cada carta : Carta 1 - %d X Carta 2 - %d\n", pontosturisticos, pontosturisticos2);
                printf("Soma dos atributos: Carta 1 - %d X Carta 2 - %d", soma12a, soma12b);
                (soma12a >= soma12b) ? ((soma12a == soma12b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            case 13:
                long double soma13a = ((double)populacao + (double)area);
                long double soma13b = ((double)populacao2 + (double)area2);
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: População e Área\n");
                printf("Valores de População para cada carta : Carta 1 - %d X Carta 2 - %d\n", populacao, populacao2);
                printf("Valores de Área para cada carta : Carta 1 - %d X Carta 2 - %d\n", area, area2);
                printf("Soma dos atributos: Carta 1 - %.2Lf X Carta 2 - %.2Lf", soma13a, soma13b);
                (soma13a >= soma13b) ? ((soma13a == soma13b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            case 14:
                int soma14a = populacao + pib;
                int soma14b = populacao2 + pib2;
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: População e PIB\n");
                printf("Valores de População para cada carta : Carta 1 - %d X Carta 2 - %d\n", populacao, populacao2);
                printf("Valores de PIB para cada carta : Carta 1 - %d X Carta 2 - %d\n", pib, pib2);
                printf("Soma dos atributos: Carta 1 - %d X Carta 2 - %d", soma14a, soma14b);
                (soma14a >= soma14b) ? ((soma14a == soma14b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            case 15:
                long double soma15a = (double)populacao + (double)(1 / densidade);
                long double soma15b = (double)populacao2 + (double)(1 / densidade2);
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: População e Densidade Populacional\n");
                printf("Valores de População para cada carta : Carta 1 - %d X Carta 2 - %d\n", populacao, populacao2);
                printf("Valores de Densidade Populacional para cada carta : Carta 1 - %d X Carta 2 - %d\n", densidade, densidade2);
                printf("Soma dos atributos: Carta 1 - %.2Lf X Carta 2 - %.2Lf", soma15a, soma15b);
                (soma15a >= soma15b) ? ((soma15a == soma15b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            case 16:
                long double soma16a = (double)populacao + (double)pibpercapta;
                long double soma16b = (double)populacao2 + (double)pibpercapta2;
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: População e PIB per Capta\n");
                printf("Valores de População para cada carta : Carta 1 - %d X Carta 2 - %d\n", populacao, populacao2);
                printf("Valores de PIB per Capta para cada carta : Carta 1 - %d X Carta 2 - %d\n", pibpercapta, pibpercapta2);
                printf("Soma dos atributos: Carta 1 - %.2Lf X Carta 2 - %.2Lf", soma16a, soma16b);
                (soma16a >= soma16b) ? ((soma16a == soma16b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            case 23:
                long double soma23a = (double)pontosturisticos + (double)area;
                long double soma23b = (double)pontosturisticos2 + (double)area2;
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: Pontos Turísticos e Área\n");
                printf("Valores de Pontos Turísticos para cada carta : Carta 1 - %d X Carta 2 - %d\n", pontosturisticos, pontosturisticos2);
                printf("Valores de Área para cada carta : Carta 1 - %d X Carta 2 - %d\n", area, area2);
                printf("Soma dos atributos: Carta 1 - %.2Lf X Carta 2 - %.2Lf", soma23a, soma23b);
                (soma23a >= soma23b) ? ((soma23a == soma23b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            case 24:
                int soma24a = pontosturisticos + pib;
                int soma24b = pontosturisticos2 + pib2;
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: Pontos Turísticos e PIB\n");
                printf("Valores de Pontos Turísticos para cada carta : Carta 1 - %d X Carta 2 - %d\n", pontosturisticos, pontosturisticos2);
                printf("Valores de PIB para cada carta : Carta 1 - %d X Carta 2 - %d\n", pib, pib2);
                printf("Soma dos atributos: Carta 1 - %d X Carta 2 - %d", soma24a, soma24b);
                (soma24a >= soma24b) ? ((soma24a == soma24b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            case 25:
                long double soma25a = (double)pontosturisticos + (double)(1 / densidade);
                long double soma25b = (double)pontosturisticos2 + (double)(1 / densidade2);
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: Pontos Turísticos e Densidade Populacional\n");
                printf("Valores de Pontos Turísticos para cada carta : Carta 1 - %d X Carta 2 - %d\n", pontosturisticos, pontosturisticos2);
                printf("Valores de Densidade Populacional para cada carta : Carta 1 - %d X Carta 2 - %d\n", densidade, densidade2);
                printf("Soma dos atributos: Carta 1 - %.2Lf X Carta 2 - %.2Lf", soma25a, soma25b);
                (soma25a >= soma25b) ? ((soma25a == soma25b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            case 26:
                long double soma26a = (double)pontosturisticos + (double)pibpercapta;
                long double soma26b = (double)pontosturisticos2 + (double)pibpercapta2;
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: Pontos Turísticos e PIB per Capta\n");
                printf("Valores de Pontos Turísticos para cada carta : Carta 1 - %d X Carta 2 - %d\n", pontosturisticos, pontosturisticos2);
                printf("Valores de PIB per Capta para cada carta : Carta 1 - %d X Carta 2 - %d\n", pibpercapta, pibpercapta2);
                printf("Soma dos atributos: Carta 1 - %.2Lf X Carta 2 - %.2Lf", soma26a, soma26b);
                (soma26a >= soma26b) ? ((soma26a == soma26b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            case 34:
                long double soma34a = (double)area + (double)pib;
                long double soma34b = (double)area2 + (double)pib2;
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: Área e PIB\n");
                printf("Valores de Área para cada carta : Carta 1 - %d X Carta 2 - %d\n", area, area2);
                printf("Valores de PIB para cada carta : Carta 1 - %d X Carta 2 - %d\n", pib, pib2);
                printf("Soma dos atributos: Carta 1 - %.2Lf X Carta 2 - %.2Lf", soma34a, soma34b);
                (soma34a >= soma34b) ? ((soma34a == soma34b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            case 35:
                long double soma35a = (double)area + (double)(1 / densidade);
                long double soma35b = (double)area2 + (double)(1 / densidade2);
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: Área e Densidade Populacional\n");
                printf("Valores de Área para cada carta : Carta 1 - %d X Carta 2 - %d\n", area, area2);
                printf("Valores de Densidade Populacional para cada carta : Carta 1 - %d X Carta 2 - %d\n", densidade, densidade2);
                printf("Soma dos atributos: Carta 1 - %.2Lf X Carta 2 - %.2Lf", soma35a, soma35b);
                (soma35a >= soma35b) ? ((soma35a == soma35b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            case 36:
                long double soma36a = (double)area + (double)pibpercapta;
                long double soma36b = (double)area2 + (double)pibpercapta2;
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: Área e PIB per Capta\n");
                printf("Valores de Área para cada carta : Carta 1 - %d X Carta 2 - %d\n", area, area2);
                printf("Valores de PIB per Capta para cada carta : Carta 1 - %d X Carta 2 - %d\n", pibpercapta, pibpercapta2);
                printf("Soma dos atributos: Carta 1 - %.2Lf X Carta 2 - %.2Lf", soma36a, soma36b);
                (soma36a >= soma36b) ? ((soma36a == soma36b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            case 45:
                long double soma45a = (double)pib + (double)(1 / densidade);
                long double soma45b = (double)pib2 + (double)(1 / densidade2);
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: PIB e Densidade Populacional\n");
                printf("Valores de PIB para cada carta : Carta 1 - %d X Carta 2 - %d\n", pib, pib2);
                printf("Valores de Densidade Populacional para cada carta : Carta 1 - %d X Carta 2 - %d\n", densidade, densidade2);
                printf("Soma dos atributos: Carta 1 - %.2Lf X Carta 2 - %.2Lf", soma45a, soma45b);
                (soma45a >= soma45b) ? ((soma45a == soma45b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            case 46:
                long double soma46a = (double)pib + (double)pibpercapta;
                long double soma46b = (double)pib2 + (double)pibpercapta2;
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: PIB e PIB per Capta\n");
                printf("Valores de PIB para cada carta : Carta 1 - %d X Carta 2 - %d\n", pib, pib2);
                printf("Valores de PIB per Capta para cada carta : Carta 1 - %d X Carta 2 - %d\n", pibpercapta, pibpercapta2);
                printf("Soma dos atributos: Carta 1 - %.2Lf X Carta 2 - %.2Lf", soma46a, soma46b);
                (soma46a >= soma46b) ? ((soma46a == soma46b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            case 56:
                long double soma56a = (double)(1 / densidade) + (double)pibpercapta;
                long double soma56b = (double)(1 / densidade2) + (double)pibpercapta2;
                printf("\nPais 1 - %s X País 2 - %s\n", pais, pais2);
                printf("Atributos escolhidos: Densidade Populacional e PIB per Capta\n");
                printf("Valores de Densidade Populacional para cada carta : Carta 1 - %d X Carta 2 - %d\n", densidade, densidade2);
                printf("Valores de PIB per Capta para cada carta : Carta 1 - %d X Carta 2 - %d\n", pibpercapta, pibpercapta2);
                printf("Soma dos atributos: Carta 1 - %.2Lf X Carta 2 - %.2Lf", soma56a, soma56b);
                (soma56a >= soma56b) ? ((soma56a == soma56b) ? printf("Empate técnico!\n") : printf("Carta 1 venceu!\n")) : printf("Carta 2 venceu!\n");
                break;
            default:
                printf("\nEsolha um número inteiro!\n");
                return 1; // usuário escolheu número flutuante
                break;
            }
        }
        else
        {
            printf("\nEscolha uma opção diferente da primeira ou um número válido!\n");
            return 1; // encerra o programa com erro, pois o usuário escolheu um número fora do escopo
        }

        break;
    case 6:
        printf("\nSaindo do jogo. Obrigado por jogar!\n");
        break;
    default:
        printf("\nOpção inválida. Por favor, escolha uma opção válida.\n");
        break;
    }
    return 0;
}
