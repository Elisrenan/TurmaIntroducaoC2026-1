/*
Atividade 9 — Decisão com múltiplos caminhos
Situação:
•	Se tem dinheiro → compra
•	Se não tem dinheiro → pede emprestado
•	Se não conseguir empréstimo → não compra
 Pergunta:
•	Quantos níveis de decisão existem?
•	Monte a lógica completa
 Objetivo: trabalhar encadeamento de decisões
 INÍCIO
 ↓
Tem dinheiro?
 ↙        ↘
SIM        NÃO
↓           ↓
Compra     Consegue empréstimo?
            ↙        ↘
           SIM        NÃO
           ↓           ↓
       Compra       Não compra
             ↓
            FIM

*/
#include <stdio.h>

int main() {
    int temDinheiro, conseguiuEmprestimo;

    printf("Tem dinheiro? (1-SIM / 0-NAO): ");
    scanf("%d", &temDinheiro);

    if (temDinheiro == 1) {
        printf("COMPRA\n");
    } else {
        printf("Conseguiu emprestimo? (1-SIM / 0-NAO): ");
        scanf("%d", &conseguiuEmprestimo);

        if (conseguiuEmprestimo == 1) {
            printf("COMPRA\n");
        } else {
            printf("NAO COMPRA\n");
        }
    }

    return 0;
}