#include <stdio.h>

void recursivo(int numero){// Função recursiva para imprimir números de n até 1
    if (numero > 0){
        printf("%d \n", numero); // Imprime o valor atual de n

        recursivo(numero -1);// Chama a si mesma com n - 1 
        //Cada chamada de recursiveLoop reduz o valor de em 1. Isso cria uma série de chamadas que eventualmente atingem o caso-base.
    }
}

int main(){

    int quantidade = 10; // Aqui é criada a variavel quantidade com valor 10.

    printf("Contagem regressiva...\n");
    recursivo(quantidade); //Nesta linha, a chamada recursiva recebe o valor da variável quantidade, sendo assim a linha 3 - void recursivo(int numero)
    // recebe o valor 10, ou seja, int numero recebe uma copia de int quantidade.
                            // Quando recursivo(10) é chamado, a sequencia de execução é:
                            //recursiveLoop(10) imprime 10 e chama recursiveLoop(9).
                            //recursiveLoop(9) imprime 9 e chama recursiveLoop(8).
                            //recursiveLoop(8) imprime 8 e chama recursiveLoop(7).
                            //recursiveLoop(7) imprime 7 e chama recursiveLoop(6).
                            //recursiveLoop(6) imprime 6 e chama recursiveLoop(5).
                            //recursiveLoop(5) imprime 5 e chama recursiveLoop(4).
                            //recursiveLoop(4) imprime 4 e chama recursiveLoop(3).
                            //recursiveLoop(3) imprime 3 e chama recursiveLoop(2).
                            //recursiveLoop(2) imprime 2 e chama recursiveLoop(1).
                            //recursiveLoop(1) imprime 1 e chama recursiveLoop(0).
                            //recursiveLoop(0) não entra no if e a execução termina


    return 0;
}