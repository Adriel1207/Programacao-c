#include <stdio.h>
 
int main() {
    int i = 1;// Declaração da variavel i recebendo o valor 1.
   
    while (i <= 10)// Loop externo com a condição i <= 10, caso verdadeiro haverá repetição.
    {
        int j = 1;// Declaração da variavel j recebendo o valor 1.
        printf("Tabuada do %d: \n", i); // Imprimindo a variavel i exponencialmente como a tabuada executada no loop.

        while (j <= 10)// Loop interno com j na condição <= 10, caso verdadeiro haverá repetição.
        {   
            printf("%d x %d = ", i , j);// Imprimindo i x j em exponencial crescente como definição da tabuada executada no loop.
            printf("%d\n", i * j);// Imprimindo o resultado de i * j como valor para cada calculo da tabuada.
            j++;// Incremento j++ para cada repetição.
        }
        printf("\n");// Pulando linha entre cada repetição ou (numero de tabuada).
        i++;// incremendo i++ para cada repetição.
        return 0;
    }
    






    return 0;
}