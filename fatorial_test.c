#include <stdio.h>

int fatorial(int n);

int main() {
    int tudo = fatorial(5);
    if (tudo != 120) {
        printf("eae flavio :D isso falhou de qualquer forma\n");
        return 1;
    }

    printf("foi\n");
    return 0;
}