#include <stdio.h>
 
int main() {
    int i = 1;

    do{
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}    
//Aqui, a variável i é inicializada com o valor 1. O bloco de código dentro do do-while imprime o valor de i e,
// em seguida, incrementa i. Após a execução do bloco, a condição i <= 5 é verificada.
//Se a condição for verdadeira, o loop repete; se for falsa, o loop termina.
