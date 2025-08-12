#include <stdio.h>
#include <windows.h>

struct Carta {
    char codigo[10];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
};

void println() {
    printf("\n\n");
}

void printSeparator1() {
    printf("\n ─────────────────────────────────── \n");
}
void printSeparator2() {
    printf("\n ─────────────────────────────────────────── \n");
}

int main() {
    // Configura o console para UTF-8 pra funcionar os caracteres especiais
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    struct Carta carta1, carta2;

    printSeparator1();
    printf("       📄 Cadastro da Carta 1");
    printSeparator1();
    printf(" Código \x1b[90m(ex: A01)\x1b[0m: ");
    scanf("%s", carta1.codigo);
    printf(" População: ");
    scanf("%lu", &carta1.populacao);
    printf(" Área (km²): ");
    scanf("%f", &carta1.area);
    printf(" PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf(" Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib + carta1.pontos_turisticos + carta1.pib_per_capita + (1.0f / carta1.densidade);

    printSeparator1();
    printf("       📄 Cadastro da Carta 2");
    printSeparator1();
    printf(" Código \x1b[90m(ex: A02)\x1b[0m: ");
    scanf("%s", carta2.codigo);
    printf(" População: ");
    scanf("%lu", &carta2.populacao);
    printf(" Área (km²): ");
    scanf("%f", &carta2.area);
    printf(" PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf(" Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib + carta2.pontos_turisticos + carta2.pib_per_capita + (1.0f / carta2.densidade);

    println();
    printf("             🗺️  CARTA 1(%s) ", carta1.codigo);
    printSeparator2();
    printf(" 🌍 População............: %lu\n", carta1.populacao);
    printf(" 📏 Área.................: %.2f km²\n", carta1.area);
    printf(" 💰 PIB..................: %.2f bilhões\n", carta1.pib);
    printf(" 📸 Pontos Turísticos....: %d\n", carta1.pontos_turisticos);
    printf(" 📊 Densidade............: %.4f hab/km²\n", carta1.densidade);
    printf(" 💵 PIB per Capita.......: %.6f\n", carta1.pib_per_capita);
    printf(" 🦸 Super Poder..........: %.4f\n", carta1.super_poder);
    println();

    printf("             🗺️  CARTA 2(%s) ", carta2.codigo);
    printSeparator2();
    printf(" 🌍 População............: %lu\n", carta2.populacao);
    printf(" 📏 Área.................: %.2f km²\n", carta2.area);
    printf(" 💰 PIB..................: %.2f bilhões\n", carta2.pib);
    printf(" 📸 Pontos Turísticos....: %d\n", carta2.pontos_turisticos);
    printf(" 📊 Densidade............: %.4f hab/km²\n", carta2.densidade);
    printf(" 💵 PIB per Capita.......: %.6f\n", carta2.pib_per_capita);
    printf(" 🦸 Super Poder..........: %.4f\n", carta2.super_poder);
    println();

    
    printf("                ⚔️  COMPARAÇÃO ");
    printSeparator2();
    printf(" População.............................: %s\n", carta1.populacao > carta2.populacao ? "✔️" : "❌");
    printf(" Área..................................: %s\n", carta1.area > carta2.area ? "✔️" : "❌");
    printf(" PIB...................................: %s\n", carta1.pib > carta2.pib ? "✔️" : "❌");
    printf(" Pontos Turísticos.....................: %s\n", carta1.pontos_turisticos > carta2.pontos_turisticos ? "✅" : "❌");
    printf(" Densidade (menor melhor)..............: %s\n", carta1.densidade < carta2.densidade ? "✔️" : "❌");
    printf(" PIB per Capita........................: %s\n", carta1.pib_per_capita > carta2.pib_per_capita ? "✅" : "❌");
    printf(" Super Poder...........................: %s\n", carta1.super_poder > carta2.super_poder ? "✔️" : "❌");
    println();

    printf("                🏆 VENCEDOR ");
    printSeparator2();
    if (carta1.super_poder > carta2.super_poder) {
        printf(" Carta 1 (%s) é a vencedora!\n", carta1.codigo);
    } else if (carta2.super_poder > carta1.super_poder) {
        printf(" Carta 2 (%s) é a vencedora!\n", carta2.codigo);
    } else {
        printf(" Empate entre as cartas!\n");
    }
    println();

    // Restaurar codificação padrão do console
    SetConsoleOutputCP(CPAGE_DEFAULT);

    return 0;

    // Informações teste:

    // CADASTRO DE CARTA 1
    // Código (ex: A01): BR01
    // População: 211000000
    // Área (km²): 8515767
    // PIB (em bilhões): 1868
    // Número de pontos turísticos: 25

    // CADASTRO DE CARTA 2
    // Código (ex: A01): BR02
    // População: 125800000
    // Área (km²): 377975
    // PIB (em bilhões): 4937
    // Número de pontos turísticos: 40

}
