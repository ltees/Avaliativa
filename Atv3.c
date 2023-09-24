#include <stdio.h>

int main() {
    double A, B, C;

    // Solicita ao usuário que insira os valores de A, B e C
    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    // Verifica se os valores podem ser lados de um triângulo
    if (A + B > C && A + C > B && B + C > A) {
        // Verifica o tipo de triângulo
        if (A == B && B == C) {
            printf("É um triângulo equilátero.\n");
        } else if (A == B || A == C || B == C) {
            printf("É um triângulo isósceles.\n");
        } else {
            printf("É um triângulo escaleno.\n");
        }
    } else {
        printf("Esses valores não podem formar um triângulo.\n");
    }

    return 0;
}
