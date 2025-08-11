#include <stdio.h>

int main() {
    char Estado = 'A';
    char codigo[50] = "A01";
    char cidade[50] = "Belem";
    int populacao = 1398531;
    float area = 1.059;
    float PIB = 33.4;
    int pontosturisticos = 17;

    printf("O estado é: %c\n", Estado);
    printf("O codigo da carta é: %s\n", codigo);
    printf("A cidade é: %s\n", cidade);
    printf("A populacao é de: %d Milhões de habitantes\nOs pontos turisticos são: %d\n", populacao, pontosturisticos);
    printf("A area é: %.5f.km2\n", area);
    printf("O pib é: %.5f.Bilhoes\n", PIB);

    
    populacao = (float)(populacao) / area;
    printf("A densidade populacional é: %f\n", populacao);

    PIB = (float)(PIB) / populacao;
    printf("A densidade populacional é de: %f\n", PIB);
    
    

    return 0;
}
