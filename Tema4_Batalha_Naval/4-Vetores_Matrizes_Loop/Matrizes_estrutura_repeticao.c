#include <stdio.h>

int main(){
    int matriz[3][3];// Declaração de uma matriz 3x3 de inteiros.

    //inicialização da matriz usando estruturas de repetição for aninhadas
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = i + j;// Atribuindo valores à matriz.
        }
    }
    
    // Exibindo os elementos da matriz usando estrutura de repetição for aninhadas.
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {   
            // Imprimindo valores da matriz manipulando i e j como acesso ao indice da mesma.
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }
    return 0;
}