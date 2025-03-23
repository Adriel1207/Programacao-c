#include <stdio.h>

int main() {
    int x = 5;
    float y = 5.0;
    char c = 'a';

    printf("x >=y: %d\n", x >= y); //1
    printf("x == y: %d\n", x == y); //1
    printf("x != y: %d\n", x != y); //0

    printf("x >= c: %d\n", x >=c);
    printf("O valor ASCII de %c é %d: \n", c, c); // Nesta linha o %c imprime o carctere 'a' que está vinculado a varial c.
                                                    //O %d imprime o valor na taabela ASCII que é 97.

    return 0;
}