#include <stdio.h>

int main(){
    float notas[3] = {85.5, 90.0, 78.0}; // Array de notas de 3 alunos.
    
    // Acessando e imprindo os elementos do array.
    printf("Nota do primeiro aluno: %.1f\n", notas[0]);
    printf("Nota de segundo aluno: %.1f\n", notas[1]);
    printf("Nota do terceiro aluno: %.1f\n", notas[2]);
    
    return 0;
}