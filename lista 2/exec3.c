/*
Atividade 3 — Classificação com erro escondido
Regra:
•	Nota ≥ 5 → recuperação
•	Nota ≥ 7 → aprovado
Pergunta:
•	Essa regra funciona corretamente?
•	O que acontece com nota 8?
Objetivo: perceber ordem incorreta das condições
INÍCIO
 ↓
Ler nota
 ↓
nota >= 7 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Aprovado   nota >= 5 ?
            ↙        ↘
           SIM        NÃO
           ↓           ↓
      Recuperação   Reprovado
             ↓
            FIM
*/
#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 7) {
        printf("APROVADO\n");
    } else if (nota >= 5) {
        printf("RECUPERACAO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}
