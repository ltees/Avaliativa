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
        // Verifica o tipo de triângulo com base nos ângulos
        if (A * A + B * B == C * C || A * A + C * C == B * B || B * B + C * C == A * A) {
            printf("É um triângulo retângulo.\n");
        } else if (A * A + B * B < C * C || A * A + C * C < B * B || B * B + C * C < A * A) {
            printf("É um triângulo obtusângulo.\n");
        } else {
            printf("É um triângulo acutângulo.\n");
        }
    } else {
        printf("Esses valores não podem formar um triângulo.\n");
    }

    return 0;
}
