#include <stdio.h>

    int main(){
        int i = 1; //

        while (i <= 5) //Condição verdadeira para que o bloco abaixo seja repetido
        {
            printf("%d\n", i); 
            i++; // Icremento para que a varialve seja alterada e assim mudando a condição para o lopp
        }
        
        return 0;
    }