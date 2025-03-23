#include <stdio.h>

int main() {
    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", (int)numero1 > numero2); //1 sem casting (int), com casting (int) o resultado é: 0
    printf("numero1 == numero2: %d\n", (int)numero1 == numero2); //0 sem casting (int) , com casting (int) o resultado é: 1
    // no caso de compraração == os numero não são iguais pois 10.2 e diferente de 10 por conta do decimal '.2" atribuido a variavel numero1.

    return 0;
}