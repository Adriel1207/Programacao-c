#include <stdio.h>
 
int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
 
    // Substituição condicional de elementos
    for (int i = 0; i < 3; i++)// Loop externo para as linhas
    {      
        for (int j = 0; j < 3; j++)// Loop interno para as colunas
        {  
            if (matriz[i][j] % 3 == 0)// Substitui múltiplos de 3 por -1
            {
                matriz[i][j] = -1;
            }        
        }
    }
 
    // Impressão da matriz modificada
    for (int i = 0; i < 3; i++)// Loop para imprimir cada linha
    {      
        for (int j = 0; j < 3; j++)// Loop para imprimir cada coluna
        {  
            printf("%d ", matriz[i][j]);// Imprimindo a matriz.
        }
        printf("\n");
    }
 
    return 0;
}