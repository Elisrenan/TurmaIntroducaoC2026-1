/*
Atividade 8 — Situação ambígua
Uma regra diz:
“Se estiver calor, vá de camiseta”
 Pergunta:
•	O que é “calor”?
•	Como transformar isso em condição lógica?
 Objetivo: transformar linguagem natural em lógica
INÍCIO
 ↓
Ler temperatura
 ↓
temp > 30 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Calor      Frio
      ↓
     FIM

*/
#include <stdio.h>

int main() {
    float temperatura;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura > 30) {
        printf("VAI DE CAMISETA\n");
    } else {
        printf("NAO VAI DE CAMISETA\n");
    }

    return 0;
}