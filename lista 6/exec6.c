#include <stdio.h>
int main() {
    int numeros[10];
    int pos, valor= 0, encontrou = 0;
    for (pos = 0; pos < 10; pos++){
        printf("Digite o número da posição %d: ", pos);
        scanf("%d", &numeros[pos]);
    }
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);
    for (pos = 0; pos < 10; pos++){
        if (numeros[pos] == valor){
            encontrou = 1;
        }
    }
    if(encontrou){
        printf("Valor encontrado!")
    }else{
        printf("Valor não encontrado!");
    }
    return 0;
}