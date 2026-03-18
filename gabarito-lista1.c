//Questão 1 — Número positivo, negativo ou zero
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
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


//Questão 2 — Maior de idade
#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("MAIOR DE IDADE\n");
    } else {
        printf("MENOR DE IDADE\n");
    }

    return 0;
}

//Questão 3 — Par ou ímpar

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("PAR\n");
    } else {
        printf("IMPAR\n");
    }

    return 0;
}



//Questão 4 — Aprovado ou reprovado
#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 7.0) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}


//Questão 5 — Classificação de temperatura
#include <stdio.h>

int main() {
    float temperatura;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura <= 15) {
        printf("FRIO\n");
    } else if (temperatura <= 30) {
        printf("AGRADAVEL\n");
    } else {
        printf("QUENTE\n");
    }

    return 0;
}
