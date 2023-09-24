#include <stdio.h>

int main() {
    double salario, totalSalario = 0;
    int numeroFilhos, totalFilhos = 0;
    double maiorSalario = 0;
    int pessoasComSalarioAte100 = 0;
    int totalPessoas = 0;

    do {
        // Solicitar ao usuário que insira o salário (negativo para encerrar)
        printf("Digite o salário (ou um valor negativo para encerrar): ");
        scanf("%lf", &salario);

        if (salario >= 0) {
            // Solicitar ao usuário que insira o número de filhos
            printf("Digite o número de filhos: ");
            scanf("%d", &numeroFilhos);

            totalSalario += salario;
            totalFilhos += numeroFilhos;
            totalPessoas++;

            // Verificar se o salário é o maior até agora
            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

            // Verificar se o salário está até R$100,00
            if (salario <= 100.0) {
                pessoasComSalarioAte100++;
            }
        }
    } while (salario >= 0);

    if (totalPessoas > 0) {
        // Calcular a média do salário da população
        double mediaSalario = totalSalario / totalPessoas;

        // Calcular a média do número de filhos
        double mediaFilhos = (double)totalFilhos / totalPessoas;

        // Calcular o percentual de pessoas com salário até R$100,00
        double percentualAte100 = (double)pessoasComSalarioAte100 / totalPessoas * 100;

        // Imprimir os resultados
        printf("\nMédia do salário da população: %.2lf\n", mediaSalario);
        printf("Média do número de filhos: %.2lf\n", mediaFilhos);
        printf("Maior salário: %.2lf\n", maiorSalario);
        printf("Percentual de pessoas com salário até R$100,00: %.2lf%%\n", percentualAte100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
