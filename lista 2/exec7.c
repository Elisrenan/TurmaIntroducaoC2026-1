/*
Atividade 7 — Ordem importa
Regra:
•	Se idade ≥ 60 → idoso
•	Se idade ≥ 18 → adulto
•	Senão → menor
 Pergunta:
•	Essa ordem está correta?
•	O que acontece com idade 65?
 Objetivo: entender hierarquia de condições
INÍCIO
 ↓
Ler idade
 ↓
idade >= 60 ?
 ↙        ↘
SIM        NÃO
↓           ↓
Idoso      idade >= 18 ?
            ↙        ↘
           SIM        NÃO
           ↓           ↓
         Adulto       Menor
             ↓
            FIM

*/