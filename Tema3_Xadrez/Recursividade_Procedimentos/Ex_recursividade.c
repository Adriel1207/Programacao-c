#include <stdio.h>
#include <stdlib.h>
//Explicação: https://www.youtube.com/watch?v=Y_-zrByK8AU&list=PLqJK4Oyr5WSg3ciuTxJXYkjTPvb_LjYZP&index=2
void imprimir(int x){ //Variável x recebendo o valor de n que está dentro da função main (x recebe uma cópia do valor de n).
    if(x == 0)
        printf("%d ", x);
    else{
        //printf("%d ", x);
        imprimir(x - 1);// Nesta linha a recursividade é chamada, sendo assim ela volta para a linha 4: void imprimir(int x), entrando em loop e empilhando os valores.
        // Apos finalizado o empilhamento, o programa retorna desempilhando as funções e somente nesse momento começa a ser impresso os valores um a um
        // confome linha abaixo, sendo assim é como se o programa estivesse retrocendo o codigo para imprimir os resultados de (x - 1) a cada loop.
        printf("%d ", x);
    }
}

int main(){

    int n; //Variavel n é local é só existe dentro da função main. Sendo assim ela pode ser recebida com quaquer nome fora desta função.

    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);

    imprimir(n);

    return 0;
}