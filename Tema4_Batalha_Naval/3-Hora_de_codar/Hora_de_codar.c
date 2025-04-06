#include <stdio.h>

int main(){

    int index;
    // Declaração de uma matriz 3x3 do tipo string.
    //Cada elemento da matriz é acessado por meio de índices que especificam sua posição,
    //onde o primeiro índice indica a linha e o segundo índice indica a coluna.
    char * nomesAlunos [3][3]= { 
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}
    };

    printf("Digite o numero do aluno que queira ver as notas... \n");
    printf("Para o aluno 1, digite 0\n");
    printf("Para o aluno 2, digite 1\n");
    printf("Para o aluno 3, digite 2\n");

    scanf("%d", &index);// Entrada de dados para capturar valor na variável.

    //Acessando e imprimindo elementos especificos da matriz. 
    //Neste caso a primeira matriz [] recebe o valor da variavel index informada pelo usuário, sendo responsavel por acessar a posição da linha.
    //No caso da segunda matriz [] informamos o valor de acesso da coluna onde estão os valores das notas dos alunos.
    printf("As notas do %s são: %s , %s... \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
    //Sendo assim os valores das notas estarão de acordo com a posição da linha informada na entrada de dados da variável index.


    return 0;
}