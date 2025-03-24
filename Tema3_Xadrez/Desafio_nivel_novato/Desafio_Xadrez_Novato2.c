#include <stdio.h>

    int main(){
        
        int movimentoTorre;
        int movimentoBispo = 1;
        int movimentoRainha = 1;

    printf("Movimento da Torre:\n");

    for (movimentoTorre = 1; movimentoTorre <= 5; movimentoTorre++)
    {
        printf("%d - Direita\n", movimentoTorre);
    }

    printf("\n");
    printf("Movimento do Bispo:\n");
    while (movimentoBispo <= 5)
    {
        printf("%d - Cima, Direita\n", movimentoBispo);
        movimentoBispo++;
    }

    printf("\n");
    printf("Movimento da Rainha:\n");
    do
    {
        printf("%d - Esquerda\n", movimentoRainha);
        movimentoRainha++;
    } while (movimentoRainha <= 8);
    
    return 0;    
    }