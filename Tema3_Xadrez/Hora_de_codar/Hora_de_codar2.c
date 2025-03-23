#include <stdio.h>

int main(){

    int numero, i;

    printf("Digite um numero para calcular a tabuada...\n");
    scanf("%d", &numero); // Entrada de dados informando a tdabuada a ser calculada.

    for (i = 0; i <= 10; i++)// Variável i recebe 0 ; condição menor ou igual a 10 para o loop ; incremento da variavel pra repetição até a mudança da condição ser açterada.
    {
        printf("%d x %d = %d \n", i , numero, i * numero);
        // Aqui a lógica e a exibição da variavel "i x numero = numero multiplicado " i * numero".
    }
    return 0;
    
}
// Este código é uma forma de calcular a tabuada de forma prática e eficiente apenas inserindo um numero a ser executado.
// O restante é exibido de acordo com a lógica do código.