#include <stdio.h>
 
int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 5; // Variável (alvo) a ser encontrado com valor 5.
    int found = 0; //Variável (encontrado) recebendo valor 0.
 
    // Busca condicional do elemento alvo
    for (int i = 0; i < 3; i++) // Loop externo para as linhas
    {      
        for (int j = 0; j < 3; j++) // Loop interno para as colunas
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