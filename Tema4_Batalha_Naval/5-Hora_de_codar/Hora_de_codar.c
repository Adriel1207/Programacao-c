#include <stdio.h>

#define LINHAS 5 // Definindo uma constante na variavel LINHAS.
#define COLUNAS 5 // Definindo uma constante na variavel COLUNAS.

int main(){

    int matriz [LINHAS][COLUNAS]; // Matriz declarada com 5 em LINHAS x 5 em COLUNAS conforme definido na constante #define.
    // Declaração da variável soma que será usada para incrementar valor nos elementos da matriz a cada loop realizado.
    int soma = 0;
    // Estrutura de repetição aninhada em que as condições de recebem o valor das constantes; LINHAS e COLUNAS
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
        soma++;//Incrementando
        matriz[i][j] = soma;// Elementos da matriz recebendo o valor de soma de forma sequencial via acesso [i][j].
        //Sendo assim soma é incrementada a cada lopping e seu valor é recebido pela matriz[i][j] que por sua vez tambem têm
        //seus acessos [i][j] alterados conforme as estruturas de repetição.
        printf("%2d ", matriz[i][j]);// Matriz impressa de forma instantanea juntamente com o loop do recebimento de valores.
        }
        printf("\n");
    }
    return 0;

    //Em resumo, este código têm os valores de LINHAS e COLUNAS da matriz previamente definidos em variaveis constantes.
    //Sendo assim essas variáveis podem ser usadas na quantidade e condição das estruturas de repetição de fomra sincronizada
    //com a matriz, fazendo com que o loop execute uma ++incrementação sequencial da variável soma aos valores dos elementos da matriz.

}