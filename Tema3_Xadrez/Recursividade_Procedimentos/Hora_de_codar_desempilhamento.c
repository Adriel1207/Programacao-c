#include <stdio.h>

void recursivo(int numero){// Função recursiva para imprimir números de n até 1
    if (numero > 0){
        recursivo(numero -1);// Chama a si mesma com n - 1 
        //Cada chamada de recursiveLoop reduz o valor de em 1. Isso cria uma série de chamadas que eventualmente atingem o caso-base.
        printf("%d \n", numero); // Imprime o valor atual de n
    }
}

int main(){

    int quantidade = 10; // Aqui é criada a variavel quantidade com valor 10.

    printf("Contagem regressiva...\n");
    recursivo(quantidade); //Nesta linha, a chamada recursiva recebe o valor da variável quantidade, sendo assim a linha 3 - void recursivo(int numero)
    // recebe o valor 10, ou seja, int numero recebe uma copia de int quantidade.
                            //Quando recursivo(10) é chamado, a sequencia de execução é:
                            //recursivo(10) chama recursivo(9).
                            //recursivo(9) chama recursivo(8).
                            //recursivo(8) chama recursivo(7).
                            //recursivo(7) chama recursivo(6).
                            //recursivo(6) chama recursivo(5).
                            //recursivo(5) chama recursivo(4).
                            //recursivo(4) chama recursivo(3).
                            //recursivo(3) chama recursivo(2).
                            //recursivo(2) chama recursivo(1).
                            //recursivo(1) chama recursivo(0).
                            //recursivo(0) não entra no if e a execução termina e começa a desempilhar as informações:
                            //recursivo(1) imprime 1 e chama recursivo(2).
                            //recursivo(2) imprime 2 e chama recursivo(3).
                            //recursivo(3) imprime 3 e chama recursivo(4).
                            //recursivo(4) imprime 4 e chama recursivo(5).
                            //recursivo(5) imprime 5 e chama recursivo(6).
                            //recursivo(6) imprime 6 e chama recursivo(7).
                            //recursivo(7) imprime 7 e chama recursivo(8).
                            //recursivo(8) imprime 8 e chama recursivo(9).
                            //recursivo(9) imprime 9 e chama recursivo(10).
                            //recursivo(10) imprime 10 e termina o desempilhamento de informações e tambem a execução.


    return 0;
}