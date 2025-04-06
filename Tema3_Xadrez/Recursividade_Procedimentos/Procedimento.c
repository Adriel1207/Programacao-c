#include <stdio.h>
//Nesse exemplo, o procedimento imprimirMensagem é definido com o tipo de retorno void, o que significa que não retorna nenhum valor.
//Esse procedimento pode ser chamado em qualquer parte do programa para imprimir a mesma mensagem, ajudando a evitar repetição de código.

void imprimirMensagem() {// Definição de procedimento para imprimir uma mensagem
    printf("Olá, mundo!\n");
}
 
int main() {
    
    imprimirMensagem();// Chamada do procedimento
    imprimirMensagem();// Chamada do procedimento
    imprimirMensagem();// Chamada do procedimento
    return 0;
}