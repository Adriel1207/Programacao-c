#include <stdio.h>

int main (){

    int i, j;
    char letra;

    for (i = 1; i <= 5; i++)// Variável i recebe 1, condição menor ou igual a 5, variável i é incrementado a cada loop.
    {
        letra = 'A';

        for (j = 1; j <= i; j++) // Nesta condição enquanto j <= i o loop continua, sendo assim a variável i têm que estar de acordo com j para repetição.
        {// Lembrando tambem que sempre que o loop interno é encerrado e posteriormente iniciado a variável j reseta e inicia com valor 1 novamente.
            printf("%c ", letra);// Imprimindo a variavel letra de acordo com o loop.
            letra++;// Incremento na variavel letra.
        }
        
        printf("\n");
    }
    


    return 0;
}