#include <stdio.h>

int main(){
    // Aqui estamos declarando duas variaveis e condições onde que estão relacionadas e por fim incremento e decremendo de cada uma delas.
    for (int i = 0, j = 10 ; i < j ; i++, j--) 
    {
        printf("i = %d, j = %d \n", i, j);
    }
    // Nesse exemplo, i é incrementado e j é decrementado em cada iteração, permitindo um controle simultâneo de duas variáveis dentro do mesmo loop.


    return 0;
}