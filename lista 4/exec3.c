// Leia 5 números e calcule a soma apenas dos positivos.

#include <stdio.h>

int main() {
    int i, numero, soma = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;
        }
    }

    printf("Soma: %d\n", soma);

    return 0;
}