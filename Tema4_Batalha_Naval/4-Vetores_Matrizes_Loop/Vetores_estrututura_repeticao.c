#include <stdio.h>

int main(){
    int vetor[5]; //Declaração de um vetor de 5 inteiros com indices de 0 a 4

    //Inicialização do vetor usando uma estrutura de repetição for.
    for (int i = 0; i < 5; i++)
    {
        vetor[i] = i * 2; //Atribuindo valores aos indices do vetor. //Cada vez que o loop acontece o vetor[i] receber o acesso de 0 a 4,
        //que por sua vez recebe o valor da soma i * 2, armazenando sequencialmente em seus respectivos indices.
    }
    
    //Exibindo os elementos do vetor usando uma estrutura de repetição for.
    for (int i = 0; i < 5; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
        //Em cada repetição do loop a variável i imprime o acesso de 0 a 4 e na sequencia o vetor[i] imprime o valor que está armazenado neste acesso.
    }

    return 0;
}