#include <stdio.h>

int main(){
    int matriz[3][3];

    //Inicialização da matriz com vase em condições simples.
    for (int i = 0; i < 3; i++)// Loop externo para percorre as linhas
    {
        for (int j = 0; j < 3; j++)// Loop externo para percorre as colunas
        {
            if (j % 2 == 0)// Se o resto da divisão de j for = 0, executa a estrutura abaixo.
            {   // Ou seja, se a conula for par, o indice recebe valor 1
                matriz[i][j] = 1;
            }else { // Se o resto da divisão de j for diferente de 0, executa este cod.
                matriz[i][j] = 0;// Ou seja, o restante dos indices são impar e recebe valor 0.
            } 
        }       
    }   

    // Impressão da matriz
    for (int i = 0; i < 3; i++)// Loop para imprimir cada linha
    {
        for (int j = 0; j < 3; j++)// Loop para imprimir cada coluna
        {   // Imprimindo os indices sequencialmente conforme loop aninhados.
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}