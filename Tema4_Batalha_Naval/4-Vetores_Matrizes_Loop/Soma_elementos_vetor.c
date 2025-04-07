#include <stdio.h>
 
int main() {
    int vetor[5] = {1, 2, 3, 4, 5};// Declaração de um vetor com indice de 0 a 5.
    int soma = 0; //Variavel soma para receber o valor da soma dos elementos do vetor.

    //Calculando a soma dos elementos do vetor
    for (int i = 0; i < 5; i++)
    {// A cada loop a variavel soma recebe o valor dela mesma + o elemento que está no acesso do vetor[i]
        soma += vetor[i];    
    }
    
    printf("A soma dos elementos do vetor é: %d\n", soma);
 
    return 0;
}