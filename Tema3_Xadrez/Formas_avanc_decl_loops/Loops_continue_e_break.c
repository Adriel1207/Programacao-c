#include <stdio.h>
 
int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) continue; // Pula a iteração quando i é 5 , sendo assim o termo continue tendo a condição verdadeira é uma forma de prosseguir com o loop pulando essa repetição e seguindo com as proximas.
        if (i == 8) break;    // Sai do loop quando i é 8 , sendo assim o loop é interrompido sempre que a condição do break for verdadeira.
        printf("%d ", i);
    }
    return 0;
}