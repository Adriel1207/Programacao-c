#include <stdio.h>

int main(){
    int idade = 25;
    double peso = 55.6;
    float Altura = 1.95;
    char letra = 'A';
    char nome[20] = "pedro";
    printf ("Digite seu peso: \n");
    scanf ("%f", &peso);
    printf ("Seu peso é: %.1f", peso);

    return 0;
}