#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escsolhaJogador, escolhaComputador;
    srand(time(0));
    
    printf("Jogo de Jokenpô\n");
    printf("Escolha a opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha:");
    scanf("%d", &escsolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch (escsolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    default:
        printf("Opção inválida\n");
        break;
    }    
    switch (escolhaComputador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    if (escolhaComputador == escsolhaJogador)
    {
        printf("### Jogo empatou! ###\n");

    }else if ((escsolhaJogador == 1) && (escolhaComputador == 3) ||
              (escsolhaJogador == 2) && (escolhaComputador == 1) || 
              (escsolhaJogador == 3) && (escolhaComputador == 2))
    {
        printf("### Você ganhou! ###\n");
    } else {
        printf("### Você perdeu! ###\n");
    } 

return 0;
    
}