/*
Atividade 4 — Classificação por faixa
Regra:
•	Até 10 → categoria A
•	Até 20 → categoria B
•	Até 30 → categoria C
Pergunta:
•	O número 5 pertence a quantas categorias?
•	Como corrigir?
Objetivo: evitar sobreposição de intervalos

INÍCIO
 ↓
Ler número
 ↓
n <= 10 ?
 ↙        ↘
SIM        NÃO
↓           ↓
A          n <= 20 ?
            ↙        ↘
           SIM        NÃO
           ↓           ↓
          B           C
             ↓
            FIM
*/
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero <= 10) {
        printf("CATEGORIA A\n");
    } else if (numero <= 20) {
        printf("CATEGORIA B\n");
    } else if (numero <= 30) {
        printf("CATEGORIA C\n");
    } else {
        printf("FORA DA CLASSIFICACAO\n");
    }

    return 0;
}