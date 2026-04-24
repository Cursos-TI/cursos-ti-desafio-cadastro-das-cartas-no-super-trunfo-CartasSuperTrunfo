#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao;
    int numerosecreto, palpite, regras;

    printf("Menu principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Visualização das regras\n");
    printf("3. Sair do jogo\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

    
    switch (opcao)
    {
    case 1:
        srand(time(0));
        numerosecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);

        if (numerosecreto == palpite)
        {
            printf("Você acertou.\n");
            printf("O número secreto é %d\n", numerosecreto);
        } else {
            printf("Você errou.\n");
            printf("O número secreto é %d\n", numerosecreto);
        }
    break;

    case 2:
        printf("As regras são...\n");
        printf("Digite a opção relacionada as regras do jogo: ");
        scanf("%d", &regras);
        switch (regras)
        {
        case 1:
            printf("Regra 1\n");
        break;
        case 2:
            printf("Regra 2\n");
        break;
        default:
            printf("Opção inválida\n");
        }
    break;
    case 3:
        printf("Saindo do jogo...\n");
    break;
    default:
        printf("Opção inválida\n");
    }

    return 0;
}