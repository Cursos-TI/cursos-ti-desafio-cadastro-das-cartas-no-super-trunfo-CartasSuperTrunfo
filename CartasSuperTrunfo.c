#include <stdio.h>



// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
 

int main() {


    system("clear");
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char pausa;

    char est1; 
    char nocid1[25];
    float area1, pib1;
    int pop1, npt1;

    char est2;
    char nocid2[25];
    float area2, pib2;
    int pop2, npt2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Desafio Super trunfo!\n\n");

    printf("Para iniciar iremos criar 2 cartas.");
    printf("Agora vamos inserir as informacoes da Carta 1 !\n\n");

    printf("Digite o Estado (Pode ser A, B, C, D, E, F, H) :");
    scanf("%c", &est1);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nocid1);
    printf("Digite a Populacao: ");
    scanf("%d", &pop1);
    printf("Digite a Area (Km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (R$): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &npt1);   

    printf("\nOtimo ! Agora vamos inserir as informacoes da Carta 2 !\n\n");

    setbuf(stdin,NULL);

    printf("Digite o Estado (Pode ser A, B, C, D, E, F, H) :");
    scanf("%c", &est2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nocid2);
    printf("Digite a Populacao: ");
    scanf("%d", &pop2);
    printf("Digite a Area (Km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (R$): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &npt2);   

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
        
    setbuf(stdin,NULL);

    printf("**    Otimo   **! \nTecle qualquer tecla para continuar...");
    scanf("%c", &pausa);

    system("clear");

    printf("\nMuito bem !  Estas sao as informacoes das cartas que inseriu.\n\n");
   
    printf("Carta 1\n\n");
    setbuf(stdin,NULL);
    printf("Estado: %c\n", est1);
    printf("Codigo: %c01\n", est1);
    printf("Nome da Cidade: %s\n", nocid1);
    printf("Populacao: %d\n", pop1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", npt1);

    printf("Carta 2\n\n");
    setbuf(stdin,NULL);
    printf("Estado: %c\n", est2);
    printf("Codigo: %c01\n", est2);
    printf("Nome da Cidade: %s\n", nocid2);
    printf("Populacao: %d\n", pop2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n\n", npt2);

    return 0;

}
