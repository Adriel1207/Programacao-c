#include <stdio.h>

int main(){
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6},{7, 8, 9}};
    int evenCount = 0, oddCount = 0;// Variáveis para contar indices pares e ímpares.

    //Contagem de elementos pares e impares de uma matriz.
    for (int i = 0; i < 3; i++)// Loop externo para as linhas
    {
        for (int j = 0; j < 3; j++)// Loop interno para as colunas
        {
            if (matriz[i][j] % 2 == 0)
            {   
                evenCount++;// Incrementa o contador de pares
            }else{
                oddCount++;// Incrementa o contador de ímpares
            }            
        }    
    }
    
    printf("Número de elementos pares: %d\n", evenCount);
    printf("Número de elementos ímpares: %d\n", oddCount);

    return 0;


}