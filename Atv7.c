#include <stdio.h>

int main() {
    int numAlunos = 30;
    double notas1[numAlunos], notas2[numAlunos], notas3[numAlunos];
    double medias[numAlunos], mediaGeral = 0;

    // Solicita as notas para cada aluno
    for (int i = 0; i < numAlunos; i++) {
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &notas1[i], &notas2[i], &notas3[i]);

        // Calcula a média ponderada para o aluno
        medias[i] = (notas1[i] * 2 + notas2[i] * 4 + notas3[i] * 3) / 10;

        // Adiciona a média do aluno à média geral
        mediaGeral += medias[i];

        // Verifica se o aluno foi aprovado ou reprovado
        if (medias[i] >= 7.0) {
            printf("Aluno %d: Média = %.2lf - Aprovado\n", i + 1, medias[i]);
        } else {
            printf("Aluno %d: Média = %.2lf - Reprovado\n", i + 1, medias[i]);
        }
    }

    // Calcula a média geral da turma
    mediaGeral /= numAlunos;

    printf("\nMédia geral da turma: %.2lf\n", mediaGeral);

    return 0;
}
