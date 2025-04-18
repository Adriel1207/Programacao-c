#include <stdio.h>
 
int main(){
    //Cada elemento da matriz é acessado por meio de índices que especificam sua posição,
    //onde o primeiro índice indica a linha e o segundo índice indica a coluna.
    //Por exemplo, matriz[0][0] se refere ao elemento na primeira linha e primeira coluna.
    int matriz[3][3] = { 
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    };

    //Acessando e imprimindo elementos especificos da matriz.
    // Este comando acessa o elemento na primeira linha e primeira coluna da matriz, que é o número 1. Portanto, o programa imprime: 1
    printf("O elemento na posição [0][0] é: %d\n", matriz[0][0]);
    //Aqui, o comando acessa o elemento na segunda linha e segunda coluna, que é o número 5. Assim, o programa imprime: 5
    printf("O elemento na posição [1][1] é: %d\n", matriz[1][1]);
    //Neste caso, o comando acessa o elemento na terceira linha e terceira coluna, que é o número 9. Então, o programa imprime: 9
    printf("O elemento na posição [2][2] é: %d\n", matriz[2][2]);

    return 0;
}