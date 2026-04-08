/*Atividade 5 — Número inteiro
Regra:
•	Se número > 0 → positivo
•	Se número < 0 → negativo
 Pergunta:
•	O que acontece com o número 0?
•	Qual condição está faltando?
 Objetivo: identificar casos não tratados

INÍCIO
 ↓
Ler número
 ↓
n > 0 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Positivo    n < 0 ?
            ↙        ↘
           SIM        NÃO
           ↓           ↓
        Negativo      Zero
             ↓
            FIM
*/
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("POSITIVO\n");
    } else if (numero < 0) {
        printf("NEGATIVO\n");
    } else {
        printf("ZERO\n");
    }

    return 0;
}