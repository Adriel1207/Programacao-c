#include <stdio.h>

int main(){
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6},{7, 8, 9}};

    // Modificação condicional dos elementos da matriz.
    for (int i = 0; i < 3; i++)// Loop externo para as linhas
    {
        for (int j = 0; j < 3; j++)// Loop interno para as colunas
        {
            if (matriz[i][j] > 5)// Se a matriz onde os indices for maior que 5, executa estrutura abaixo.
            {   //Matriz recebe no mesmo indice os mesmos valores, porem negativos.
                matriz[i][j] = -matriz[i][j]; 
            } 
        } 
    }
    
    // Impressão da matriz modificada
    for (int i = 0; i < 3; i++) // Loop para imprimir cada linha
    {      
        for (int j = 0; j < 3; j++) 
        {  // Loop para imprimir cada coluna
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;

    //int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; declara e inicializa uma matriz de inteiros com 3 linhas e 3 colunas.
    //Utilizamos dois loops for aninhados para percorrer as posições da matriz.
    //O loop externo (for (int i = 0; i < 3; i++)) itera sobre as linhas da matriz, 
    //enquanto o loop interno (for (int j=0;j<3;j++ ) ) itera sobre as colunas.
    //Dentro do loop interno, usamos uma condicional if (matriz[][]] > 5) para verificar se o valor do elemento atual é maior que 5.
    //Se a condição for verdadeira, transformamos o valor do elemento em seu valor negativo (matriz[][]] = -matriz[i][[];).
}