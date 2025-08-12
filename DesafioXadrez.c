#include <stdio.h>
    //COMEÇO DAS MOVIMENTAÇÕES NIVEL MESTRE
void Movertorre(int casasT){
    if (casasT > 0)
    {
    printf("Movendo torre: Direita\n");
    Movertorre(casasT - 1);
    }
    
}
void MoverBispo(int casasB){
    if (casasB > 0)
    {
    printf("Movendo Bispo: Direita para cima\n");
    MoverBispo(casasB - 1);
    }
    
}
void MoverRainha(int casasR){
    if (casasR > 0)
    {
    printf("Movendo Rainha: Esquerda\n");
    MoverRainha(casasR - 1);
    }
    
}
int main() {

    Movertorre(5);
    MoverBispo(5);
    MoverRainha(8);

    //COMEÇO DAS MOVIMENTAÇÕES NIVEL INTERMEDIÁRIO

    int B = 1;
    int R = 1;

    //Movimento da Torre 
    printf("\n*MOVIMETO DA TORRE*\n");
    for (int T = 1; T <= 5; T++)
    {
        printf("Movendo Torre para Frente \n");
    }

    //Movimento do Bispo
    printf("\n*MOVIMENTO DO BISPO*\n");
    do
    {
        printf("Movendo para Diagonal Direita \n");
        B++;

    } while (B <= 5);

    //Movimento da Rainha
    printf("\n*MOVIMETO DA RAINHA*\n");

    while (R <= 8){
     printf("Movendo para a equerda\n");
        R++;
    }
    //Movimentação do cavalo
    printf("\n*MOVIMENTAÇÃO DO CAVALO*\n");
    int movimentoCompleto = 1; //Flag para controlar o movimento em 'L'

    while (movimentoCompleto--)
    {
        for(int C = 0; C < 2; C++){
            printf("Movendo para Cima\n"); // Imprime "Cima" duas vezes
        }
        printf("Movendo para Direita\n"); // Imprime "Direita" uma vez
    }
    


    return 0;
}