#include <stdio.h>

int main() {
    // Dados das Cartas (Exemplos)
    char cidade1[] = "Cajamar", cidade2[] = "São Paulo";
    unsigned long int pop1 = 80000, pop2 = 12000000; 
    float area1 = 131.33, area2 = 1521.11;
    float pib1 = 15.5, pib2 = 700.5; 
    float dens1 = (float)pop1 / area1, dens2 = (float)pop2 / area2;

    int atr1, atr2;
    float valor1_atr1, valor1_atr2, valor2_atr1, valor2_atr2;

    // --- PRIMEIRO MENU ---
    printf("Escolha o 1º Atributo:\n1. População | 2. Área | 3. PIB | 4. Densidade\nOpção: ");
    scanf("%d", &atr1);

    // --- SEGUNDO MENU (Lógica de Exclusão) ---
    do {
        printf("\nEscolha o 2º Atributo (Diferente do 1º):\n");
        if(atr1 != 1) printf("1. População\n");
        if(atr1 != 2) printf("2. Área\n");
        if(atr1 != 3) printf("3. PIB\n");
        if(atr1 != 4) printf("4. Densidade\n");
        printf("Opção: ");
        scanf("%d", &atr2);
    } while (atr1 == atr2);

  
    switch(atr1) {
        case 1: valor1_atr1 = pop1; valor2_atr1 = pop2; break;
        case 2: valor1_atr1 = area1; valor2_atr1 = area2; break;
        case 4: valor1_atr1 = dens1; valor2_atr1 = dens2; break;
      
    }
   
 
    float soma1 = valor1_atr1 + valor1_atr2;
    float soma2 = valor2_atr1 + valor2_atr2;

    printf("\n--- RESULTADO FINAL ---\n");
    printf("%s: Soma dos atributos = %.2f\n", cidade1, soma1);
    printf("%s: Soma dos atributos = %.2f\n", cidade2, soma2);


    (soma1 > soma2) ? printf("VENCEDOR: %s\n", cidade1) : 
    (soma2 > soma1) ? printf("VENCEDOR: %s\n", cidade2) : printf("EMPATE!\n");

    return 0;
}