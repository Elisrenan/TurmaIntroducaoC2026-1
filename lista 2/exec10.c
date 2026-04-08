/*
Atividade 10 — Identificando redundância
Regra:
•	Se idade ≥ 18 → maior
•	Senão → menor
•	Se idade < 18 → menor
 Pergunta:
•	Existe repetição?
•	O que pode ser simplificado?
 Objetivo: otimização lógica
INÍCIO
 ↓
Ler idade
 ↓
idade >= 18 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Maior      Menor
      ↓
     FIM

*/
#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("MAIOR\n");
    } else {
        printf("MENOR\n");
    }

    return 0;
}