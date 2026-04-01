/*

Atividade 1 — Regra conflitante
Um sistema tem as seguintes regras:
•	Se a idade ≥ 18 → pode entrar
•	Se a idade ≥ 16 → pode entrar com responsável
 Pergunta:
•	Existe conflito nessa regra?
•	Como você organizaria corretamente usando lógica?
 Objetivo: entender ordem de avaliação (else if)
INÍCIO
 ↓
Ler idade
 ↓
idade >= 18 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Pode entrar  idade >= 16 ?
              ↙        ↘
             SIM        NÃO
             ↓           ↓
       Com responsável  Não entra
                 ↓
                FIM

*/
#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("PODE ENTRAR\n");
    } else if (idade >= 16) {
        printf("PODE ENTRAR COM RESPONSAVEL\n");
    } else {
        printf("NAO PODE ENTRAR\n");
    }

    return 0;
}