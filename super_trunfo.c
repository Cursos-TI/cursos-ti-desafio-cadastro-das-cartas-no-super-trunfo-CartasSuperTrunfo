#include <stdio.h>

int main() {
    char estado01 = 'A', estado02 = 'B';
    char codigo01[] = "A01", codigo02[] = "B02";
    char nomecidade01[] = "São Paulo", nomecidade02[] = "Rio de Janeiro";
    unsigned long long int populacao01 = 12330000, populacao02 = 6775561;
    float area01 = 1521.11, area02 = 1200.27;
    double pib01 = 700000000000.0, pib02 = 400000000000.0;
    int pturisticos01 = 50, pturisticos02 = 35;
    float densidade01 = populacao01 / area01, densidade02 = populacao02 / area02;
    float pib_percapita01 = pib01 / populacao01, pib_percapita02 = pib02 / populacao02;
    float inverso_densidade01 = (densidade01 == 0) ? 0 : 1 / densidade01;
    float inverso_densidade02 = (densidade02 == 0) ? 0 : 1 / densidade02;
    
    int escolha1, escolha2, combinacao;
    printf("====HORA DE COMPARAR AS CARTAS====\n");
    printf("[1] População\n[2] Área\n[3] PIB\n[4] Número de Pontos Turísticos\n[5] PIB per Capita\n[6] Densidade demográfica\n");
    printf("Escolha o primeiro atributo para comparar: \n");
    scanf("%d", &escolha1);
    printf("Agora escolha o segundo: \n");
    scanf("%d", &escolha2);

    combinacao = escolha1 * 10 + escolha2;
    printf("--------------------------------\n");
    
    double valor01_1 = 0, valor01_2 = 0, valor02_1 = 0, valor02_2 = 0;
    char atributo1[30], atributo2[30];
    
    switch (combinacao) {
        case 12: case 21:
            sprintf(atributo1, "População");
            sprintf(atributo2, "Área");
            valor01_1 = populacao01; valor01_2 = area01;
            valor02_1 = populacao02; valor02_2 = area02;
            break;

        case 13: case 31:
            sprintf(atributo1, "População");
            sprintf(atributo2, "PIB");
            valor01_1 = populacao01; valor01_2 = pib01;
            valor02_1 = populacao02; valor02_2 = pib02;
            break;

        case 14: case 41:
            sprintf(atributo1, "População");
            sprintf(atributo2, "Pontos Turísticos");
            valor01_1 = populacao01; valor01_2 = pturisticos01;
            valor02_1 = populacao02; valor02_2 = pturisticos02;
            break;

        case 15: case 51:
            sprintf(atributo1, "População");
            sprintf(atributo2, "PIB per Capita");
            valor01_1 = populacao01; valor01_2 = pib_percapita01;
            valor02_1 = populacao02; valor02_2 = pib_percapita02;
            break;

        case 16: case 61:
            sprintf(atributo1, "População");
            sprintf(atributo2, "Densidade Demográfica");
            valor01_1 = populacao01; valor01_2 = inverso_densidade01;
            valor02_1 = populacao02; valor02_2 = inverso_densidade02;
            break;

        case 23: case 32:
            sprintf(atributo1, "Área");
            sprintf(atributo2, "PIB");
            valor01_1 = area01; valor01_2 = pib01;
            valor02_1 = area02; valor02_2 = pib02;
            break;

        case 24: case 42:
            sprintf(atributo1, "Área");
            sprintf(atributo2, "Pontos Turísticos");
            valor01_1 = area01; valor01_2 = pturisticos01;
            valor02_1 = area02; valor02_2 = pturisticos02;
            break;

        case 25: case 52:
            sprintf(atributo1, "Área");
            sprintf(atributo2, "PIB per Capita");
            valor01_1 = area01; valor01_2 = pib_percapita01;
            valor02_1 = area02; valor02_2 = pib_percapita02;
            break;

        case 26: case 62:
            sprintf(atributo1, "Área");
            sprintf(atributo2, "Densidade Demográfica");
            valor01_1 = area01; valor01_2 = inverso_densidade01;
            valor02_1 = area02; valor02_2 = inverso_densidade02;
            break;

        case 34: case 43:
            sprintf(atributo1, "PIB");
            sprintf(atributo2, "Pontos Turísticos");
            valor01_1 = pib01; valor01_2 = pturisticos01;
            valor02_1 = pib02; valor02_2 = pturisticos02;
            break;

        case 35: case 53:
            sprintf(atributo1, "PIB");
            sprintf(atributo2, "PIB per Capita");
            valor01_1 = pib01; valor01_2 = pib_percapita01;
            valor02_1 = pib02; valor02_2 = pib_percapita02;
            break;

        case 36: case 63:
            sprintf(atributo1, "PIB");
            sprintf(atributo2, "Densidade Demográfica");
            valor01_1 = pib01; valor01_2 = inverso_densidade01;
            valor02_1 = pib02; valor02_2 = inverso_densidade02;
            break;

        case 45: case 54:
            sprintf(atributo1, "Pontos Turísticos");
            sprintf(atributo2, "PIB per Capita");
            valor01_1 = pturisticos01; valor01_2 = pib_percapita01;
            valor02_1 = pturisticos02; valor02_2 = pib_percapita02;
            break;

        case 46: case 64:
            sprintf(atributo1, "Pontos Turísticos");
            sprintf(atributo2, "Densidade Demográfica");
            valor01_1 = pturisticos01; valor01_2 = inverso_densidade01;
            valor02_1 = pturisticos02; valor02_2 = inverso_densidade02;
            break;

        case 56: case 65:
            sprintf(atributo1, "PIB per Capita");
            sprintf(atributo2, "Densidade Demográfica");
            valor01_1 = pib_percapita01; valor01_2 = inverso_densidade01;
            valor02_1 = pib_percapita02; valor02_2 = inverso_densidade02;
            break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }
    
    double somaCarta01 = valor01_1 + valor01_2;
    double somaCarta02 = valor02_1 + valor02_2;

    printf("\nATRIBUTOS SELECIONADOS: >> %s e %s\n", atributo1, atributo2);
    
    //Condicional somente para exibir o inverso da densidade que é muito pequeno
    if (valor01_1 == inverso_densidade01 || valor01_2 == inverso_densidade01){
      printf("\nCARTA 01 (%s - %s)\n",nomecidade01, codigo01);
      printf("%s: %.4lf\n", atributo1, (double)valor01_1);
      printf("%s: %.4lf\n", atributo2, (double)valor01_2);
      printf("SOMA DOS ATRIBUTOS >>>>> %.4lf\n", somaCarta01);

      printf("\nCARTA 02 (%s - %s)\n",nomecidade02, codigo02);
      printf("%s: %.4lf\n", atributo1, (double)valor02_1);
      printf("%s: %.4lf\n", atributo2, (double)valor02_2);
      printf("SOMA DOS ATRIBUTOS >>>>> %.4lf\n", somaCarta02);

      printf("\n====== R E S U L T A D O ======\n");
      printf("%s\n", (somaCarta01 > somaCarta02) ? "CARTA 01 VENCEU!" : (somaCarta01 < somaCarta02) ? "CARTA 02 VENCEU!" : "EMPATE!");
    }

    else{
      printf("\nCARTA 01 (%s - %s)\n",nomecidade01, codigo01);
      printf("%s: %.2lf\n", atributo1, (double)valor01_1);
      printf("%s: %.2lf\n", atributo2, (double)valor01_2);
      printf("SOMA DOS ATRIBUTOS >>>>> %.2lf\n", somaCarta01);

      printf("\nCARTA 02 (%s - %s)\n",nomecidade02, codigo02);
      printf("%s: %.2lf\n", atributo1, (double)valor02_1);
      printf("%s: %.2lf\n", atributo2, (double)valor02_2);
      printf("SOMA DOS ATRIBUTOS >>>>> %.2lf\n", somaCarta02);

      printf("\n====== R E S U L T A D O ======\n");
      printf("%s\n", (somaCarta01 > somaCarta02) ? "CARTA 01 VENCEU!" : (somaCarta01 < somaCarta02) ? "CARTA 02 VENCEU!" : "EMPATE!");
    }
    
    return 0;
}
