#include <stdio.h>
 
int main() {
    // Aqui estamos declarando duas variaveis e condições onde que estão relacionadas e por fim incremento e decremendo de cada uma delas.
   for (int i = 0, j = 10; i < 5 && j > 5 ; i++, j--)// O operador lógico && para combinar duas ou mais condições e verificar se todas elas são verdadeiras. 
   {
    printf("i = %d, j = %d\n", i, j);
   }
   //Nesse exemplo, o loop continua enquanto i for menor que 5 e j for maior que 5. 
   //As duas condições são avaliadas simultaneamente e o loop só prossegue se ambas forem verdadeiras.
    return 0;
}