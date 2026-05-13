#include <stdio.h>
int main() {
    int numeros[6];
    int pos;
    float soma = 0, media;
    for (pos = 0; pos < 6; pos++){
        printf("Digite o número da posição %d: ", pos);
        scanf("%d", &numeros[pos]);
    }
    for (pos = 0; pos < 6; pos++){
        soma += numeros[pos];
    }
    media = soma / 6;
    printf("A média é igual a %d ", media);
    return 0;
}