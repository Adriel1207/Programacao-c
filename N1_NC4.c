#include <stdio.h>

int main(){
    int idade = 36;
    int quntidade = 1;
    float altura = 1.72;
    double peso = 90.3;
    char letra = 'A';
    char nome [20] = "Adriel";

    printf("Digite seu peso:\n");
    scanf("%f", &peso);

    printf("Seu peso é: %f", peso);

    return 0;
}