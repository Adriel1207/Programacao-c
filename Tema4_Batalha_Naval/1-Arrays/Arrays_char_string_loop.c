#include <stdio.h>

int main(){
    // Declaração do array nomes não foi especificado o tamanho do array. Isso não é problema,
    // porque como ele foi inicializado com seis nomes, automaticamente ele é definido
    char *nomes[] = {"Alice", "Bob", "Carol", "Marcos", "Jorge", "Antonio"};
    // (*) Isso é uma indicação de ponteiros e é necessário quando você quiser criar um array de strings.
    // Ponteiros é um assunto que está fora do escopo deste conteúdo, mas foi apresentado como são criados array de strings.

    int i; // Declaração de uma variável para ser utilizada na estrutura de repetição para que os nomes sejam impressos automaticamente.
    // Lembrando que em caso de estrutura for, não é necessário relizar declaração da variável de forma externa. 

    // Estrutura de repetição criada onde sua condição (i < 6) está de acordo entre tamanho do array e sua quantidade de repetição.
    for (i = 0; i < 6 ; i++) 
    {
        printf("%s\n", nomes[i]); // Acessando e imprindo os elementos do array.
    }
    return 0;
    // Resumindo, cada vez que o loop e realizado e incrementado, muda-se a valor de acesso do array.
    // Sendo assim, seus elementos são impressos em ordem sequencial de acordo com a condição da estrutura de repetição.

}