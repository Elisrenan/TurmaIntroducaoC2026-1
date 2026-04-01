/*
Atividade 2 — Regra de desconto
Uma loja diz:
•	Clientes com compra acima de 100 recebem desconto
Pergunta:
•	O que acontece com quem compra exatamente 100?
•	A regra está completa? Ajuste.
Objetivo: trabalhar limites (>=, >, <=)

INÍCIO
 ↓
Ler valor
 ↓
valor >= 100 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Desconto   Sem desconto
      ↓
     FIM
*/
#include <stdio.h>

int main() {
    float compra;

    printf("Digite o valor da compra: ");
    scanf("%f", &compra);

    if (compra >= 100) {
        printf("RECEBE DESCONTO\n");
    } else {
        printf("NAO RECEBE DESCONTO\n");
    }

    return 0;
}