#include <stdio.h>
#include <string.h>

int main() {
    int codigoCidade;
    char estado[3];
    int veiculosPasseio, acidentesComVitimas;
    int maiorIndiceAcidentes = -1, menorIndiceAcidentes = -1;
    int codigoMaiorIndice, codigoMenorIndice;
    int totalVeiculos = 0, totalCidades = 0, totalAcidentesRS = 0, cidadesRS = 0;
    double mediaVeiculos, mediaAcidentesRS;

    for (int i = 1; i <= 200; i++) {
        printf("Informe os dados da cidade %d:\n", i);
        printf("Código da cidade: ");
        scanf("%d", &codigoCidade);

        if (codigoCidade == 0) {
            break; // Encerra a entrada de dados se o código for 0
        }

        printf("Estado (RS, SC, PR, SP, RJ, ...): ");
        scanf("%s", estado);

        printf("Número de veículos de passeio (em 1992): ");
        scanf("%d", &veiculosPasseio);

        printf("Número de acidentes de trânsito com vítimas (em 1992): ");
        scanf("%d", &acidentesComVitimas);

        // Atualiza os totais
        totalVeiculos += veiculosPasseio;
        totalCidades++;

        if (strcmp(estado, "RS") == 0) {
            totalAcidentesRS += acidentesComVitimas;
            cidadesRS++;
        }

        // Verifica maior e menor índice de acidentes
        if (maiorIndiceAcidentes == -1 || acidentesComVitimas > maiorIndiceAcidentes) {
            maiorIndiceAcidentes = acidentesComVitimas;
            codigoMaiorIndice = codigoCidade;
        }

        if (menorIndiceAcidentes == -1 || acidentesComVitimas < menorIndiceAcidentes) {
            menorIndiceAcidentes = acidentesComVitimas;
            codigoMenorIndice = codigoCidade;
        }
    }

    if (totalCidades > 0) {
        mediaVeiculos = (double)totalVeiculos / totalCidades;

        if (cidadesRS > 0) {
            mediaAcidentesRS = (double)totalAcidentesRS / cidadesRS;
        } else {
            mediaAcidentesRS = 0;
        }

        printf("\nMaior índice de acidentes de trânsito: Cidade %d (%d acidentes)\n", codigoMaiorIndice, maiorIndiceAcidentes);
        printf("Menor índice de acidentes de trânsito: Cidade %d (%d acidentes)\n", codigoMenorIndice, menorIndiceAcidentes);
        printf("Média de veículos nas cidades brasileiras: %.2lf\n", mediaVeiculos);
        printf("Média de acidentes com vítimas entre as cidades do Rio Grande do Sul: %.2lf\n", mediaAcidentesRS);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
