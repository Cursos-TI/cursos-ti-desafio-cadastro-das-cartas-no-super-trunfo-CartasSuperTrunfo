#include <stdio.h>
#include <string.h>

#define VERDE "\033[1;32m"
#define VERMELHO "\033[1;31m"
#define RESET "\033[0m"

typedef struct {
    char codigo[4];  
    unsigned long int populacao;    
    float area;       
    float pib;        
    int pontos_turisticos;   
    float densidade_populacional; 
    float pib_per_capita; 
    float super_poder;
} Cidade;

double calcular_densidade_populacional(unsigned long int populacao, float area) {
    return (area > 0) ? ((double)populacao / area) : 0;
}

double calcular_pib_per_capita(float pib, unsigned long int populacao) {
    return (populacao > 0) ? ((pib * 1000000) / populacao) : 0; 
}

double calcular_super_poder(Cidade c) {
    return (float)(c.populacao + c.area + c.pib + c.pontos_turisticos + c.pib_per_capita + (1.0 / c.densidade_populacional));
}

float obter_valor_atributo(Cidade c, int opcao) {
    switch(opcao) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontos_turisticos;
        case 5: return c.densidade_populacional;
        case 6: return c.pib_per_capita;
        case 7: return c.super_poder;
        default: return -1;
    }
}

char* nome_atributo(int opcao) {
    switch(opcao) {
        case 1: return "Populacao";
        case 2: return "Area";
        case 3: return "PIB";
        case 4: return "Pontos Turisticos";
        case 5: return "Densidade Populacional";
        case 6: return "PIB per Capita";
        case 7: return "Super Poder";
        default: return "Desconhecido";
    }
}

int main() {
    Cidade carta1, carta2;

    printf("Cadastro da Carta 1:\n");
    printf("Codigo: "); scanf("%s", carta1.codigo);
    printf("Populacao: "); scanf("%lu", &carta1.populacao);
    printf("Area (km2): "); scanf("%f", &carta1.area);
    printf("PIB (milhoes): "); scanf("%f", &carta1.pib);
    printf("Pontos Turisticos: "); scanf("%d", &carta1.pontos_turisticos);

    carta1.densidade_populacional = calcular_densidade_populacional(carta1.populacao, carta1.area);
    carta1.pib_per_capita = calcular_pib_per_capita(carta1.pib, carta1.populacao);
    carta1.super_poder = calcular_super_poder(carta1);

    printf("\nCadastro da Carta 2:\n");
    printf("Codigo: "); scanf("%s", carta2.codigo);
    printf("Populacao: "); scanf("%lu", &carta2.populacao);
    printf("Area (km2): "); scanf("%f", &carta2.area);
    printf("PIB (milhoes): "); scanf("%f", &carta2.pib);
    printf("Pontos Turisticos: "); scanf("%d", &carta2.pontos_turisticos);

    carta2.densidade_populacional = calcular_densidade_populacional(carta2.populacao, carta2.area);
    carta2.pib_per_capita = calcular_pib_per_capita(carta2.pib, carta2.populacao);
    carta2.super_poder = calcular_super_poder(carta2);

    int op1, op2;

    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n> ");
    scanf("%d", &op1);

    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        for (int i = 1; i <= 7; i++) {
            if (i != op1)
                printf("%d - %s\n", i, nome_atributo(i));
        }
        printf("> ");
        scanf("%d", &op2);
    } while(op2 == op1 || op2 < 1 || op2 > 7);

    float val1_c1 = obter_valor_atributo(carta1, op1);
    float val1_c2 = obter_valor_atributo(carta2, op1);
    float val2_c1 = obter_valor_atributo(carta1, op2);
    float val2_c2 = obter_valor_atributo(carta2, op2);

    int v1 = (op1 == 5) ? (val1_c1 < val1_c2) : (val1_c1 > val1_c2);
    int v2 = (op2 == 5) ? (val2_c1 < val2_c2) : (val2_c1 > val2_c2);

    float soma1 = val1_c1 + val2_c1;
    float soma2 = val1_c2 + val2_c2;

    printf("\nComparando %s e %s:\n", carta1.codigo, carta2.codigo);
    printf("%s: %.2f x %.2f => %sCarta %d venceu%s\n", nome_atributo(op1), val1_c1, val1_c2, (v1 ? VERDE : VERMELHO), (v1 ? 1 : 2), RESET);
    printf("%s: %.2f x %.2f => %sCarta %d venceu%s\n", nome_atributo(op2), val2_c1, val2_c2, (v2 ? VERDE : VERMELHO), (v2 ? 1 : 2), RESET);

    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %.2f\nCarta 2: %.2f\n", soma1, soma2);

    if (soma1 > soma2)
        printf("\nResultado final: %sCarta 1 venceu!%s\n", VERDE, RESET);
    else if (soma2 > soma1)
        printf("\nResultado final: %sCarta 2 venceu!%s\n", VERDE, RESET);
    else
        printf("\nResultado final: %sEmpate!%s\n", VERDE, RESET);

    return 0;
}

