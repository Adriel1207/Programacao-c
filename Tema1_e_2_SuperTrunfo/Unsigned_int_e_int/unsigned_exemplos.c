#include <stdio.h>
 
int main() {
    int numeriSinal = 3000000000; // Este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;
 
    printf("Número com sinal: %d\n", numeriSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);
 
    return 0;
}