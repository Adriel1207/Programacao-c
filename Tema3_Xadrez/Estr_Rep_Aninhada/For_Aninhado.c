#include <stdio.h>

int main(){

    for (int i = 1; i <= 10; i++)// Loop externo com i recebendo valor 1, condição i <= 10 para repetição e incremendo i++ para cada repetição.
    {
        printf("Tabuada do %d:\n", i);// Imprimindo a variavel i exponencialmente como a tabuada executada no loop.

        for (int j = 1; j <=10; j++)// Loop interno com j recebendo valor 1, condição <= 10 para repetição e incremendo  j++ para cada repetição.
        {
            printf("%d x %d = ", i , j);// Imprimindo i x j em exponencial crescente como definição da tabuada executada no loop.
            printf("%d \n", i * j);// Imprimindo o resultado de i * j como valor para cada calculo da tabuada.
        }
        printf("\n");// Pulando linha entre cada repetição ou (numero de tabuada).
    }
    
    return 0;
}