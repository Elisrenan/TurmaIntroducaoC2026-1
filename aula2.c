#include <stdio.h>
int main() {
    int idade = 0;
    // idade = 0 e 2 - você é um bebê
     if (idade >= 0 && idade < 3) {
      printf("Sua idade é %i e você é um bebê", idade);
    } 
    // idade = 3 e 12 - você é um criança
    else if (idade >= 3 && idade < 13) {
      printf("Sua idade é %i e você é uma criança", idade);
    }
    // idade = 13 e 17 - você é um adolescente
    else if (idade >= 13 && idade < 18) {
      printf("Sua idade é %i e você é um adolescente", idade);
    }
    // idade = 18 e 24 - você é um jovem
    else if (idade >= 18 && idade < 25) {
      printf("Sua idade é %i e você é um jovem", idade);
    }
    // idade = 25 e 60 - você é um adulto
    else if (idade >= 25 && idade < 61) {
      printf("Sua idade é %i e você é um adulto", idade);
    }
     // idade = 61 e 100 - você é um idoso
    else if (idade >= 61 && idade < 101) {
      printf("Sua idade é %i e você é um idoso", idade);
    }
     // idade = maior que você é um 100
    else if (idade >= 101) {
      printf("Sua idade é %i e você éum ancião", idade);
    }
    else{
         printf("Idade inválida");
    }
    return 0;
}