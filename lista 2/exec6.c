/*
Atividade 6 — Condição dupla obrigatória
Situação:
Um aluno só passa se:
•	nota ≥ 7
•	frequência ≥ 75%
 Pergunta:
•	Quantas decisões precisam ser feitas?
•	Escreva a lógica corretamente
 Objetivo: introduzir condições compostas (AND)

INÍCIO
 ↓
Ler nota e frequência
 ↓
nota >= 7 E freq >= 75 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Aprovado   Reprovado
      ↓
     FIM
*/
#include <stdio.h>

int main() {
    float nota, frequencia;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    printf("Digite a frequencia: ");
    scanf("%f", &frequencia);

    if (nota >= 7 && frequencia >= 75) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}