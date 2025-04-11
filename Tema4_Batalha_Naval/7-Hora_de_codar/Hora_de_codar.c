#include <stdio.h>

#define LINHA 5 // Variável definida para alterar a quanitidade de indices linhas da matriz.
#define COLUNA 5 // Variável definida para alterar a quanitidade de indices colunas da matriz.
 
int main() {
    int matriz[LINHA][COLUNA]; // Indices recebendo o valor das variáveis LINHA e COLUNA.
    int target = 9; // Variável (alvo) a ser encontrado com valor 5.
    int found = 0; //Variável (encontrado) recebendo valor 0.
    int soma = 1;  //Variável soma utilizada para inicializar a matriz.
 
    for (int i = 0; i < LINHA; i++) // Loop externo para as linhas
    {      
        for (int j = 0; j < COLUNA; j++) // Loop interno para as colunas
        {   // Matriz recebendo o valor de soma de forma sequencial de acordo com i e j.
            matriz[i][j] = soma;
            soma++;// Icremendo de soma a cada loop, atribuindo valores crescente na matriz.
            printf("%2d ", matriz[i][j]);// Imprimindo a matriz
        }  
        printf("\n");         
    }

    // Busca condicional do elemento alvo
    for (int i = 0; i < LINHA; i++) // Loop externo para as linhas
    {      
        for (int j = 0; j < COLUNA; j++) // Loop interno para as colunas
        {  
          if (matriz[i][j] == target)// Se matriz com indices[i][j] = 5 (target), executa estrutura abaixo
          {
            printf("Elemento %d na posição (%d, %d)\n", target, i, j);// Mostrando o indice do elemento encontrado.
            found = 1; //(Encontrado) recebe valor 1.
            break;// Saindo do loop interno.
          }
        }  
        if (found) break; // Se (encontrado) for 1 (verdadeiro), Sai do loop externo.      
    }
 
    if (!found)// Se (econtrado) for 0 (falso), executa estrutura abaixo.
    {
        printf("Elemento %d não encontrado na matriz\n", target); // Elemento não encontrado.
    }
    return 0;
}