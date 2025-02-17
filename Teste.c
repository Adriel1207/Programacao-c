#include <stdio.h>

int main(){
    int idade = 25;
    double peso = 55.6;
    float tamanho = 1.95;
    char letra = 'A';
    char nome[20] = "pedro";
    printf ("Digite sua peso: \n");
    scanf ("%f", &peso);
    printf ("seu peso é: %.1f", peso);

    return 0;
}
