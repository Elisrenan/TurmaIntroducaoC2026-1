#include <stdio.h>
int main() {
    int numeros[10];
    int pos, maior;
    for (pos = 0; pos < 10; pos++){
        printf("Digite o número da posição %d: ", pos);
        scanf("%d", &numeros[pos]);
    }
    maior = numeros[0];
    for (pos = 0; pos < 10; pos++){
        if (numeros[pos] > maior){
            maior = numeros[pos;]
        }
    }
    printf("O maior número  é  %d ", maior);
    return 0;
}