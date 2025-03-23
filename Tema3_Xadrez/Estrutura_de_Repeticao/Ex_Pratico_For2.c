#include <stdio.h>

int main(){

for (int i = 0; i <= 20; i++)
{
    if (i % 2 == 0)// Nesta condição o resto da divisão têm que ser igual a 0 (verdadeiro) para que o loop acontaça.
    {
        printf("%d\n", i);
    }   
}
}
//Outra prática comum no uso do loop for é iterar sobre condicionais.
//Também podemos usar outras estruturas, mas com cuidado para não afetar a performance do sistema.
//Veja agora o loop for sendo usado para imprimir todos os números pares de 1 a 20.