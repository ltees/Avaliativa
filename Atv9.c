#include <stdio.h>

int main() {
    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosEmBranco = 0;

    printf("Informe o código do candidato (ou 0 para encerrar):\n");

    do {
        scanf("%d", &voto);

        switch (voto) {
            case 0:
                // Encerra a votação
                break;
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosEmBranco++;
                break;
            default:
                printf("Código de votação inválido. Voto não contabilizado.\n");
        }
    } while (voto != 0);

    // Imprime os resultados
    printf("\nTotal de votos para Candidato 1: %d\n", candidato1);
    printf("Total de votos para Candidato 2: %d\n", candidato2);
    printf("Total de votos para Candidato 3: %d\n", candidato3);
    printf("Total de votos para Candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosEmBranco);

    return 0;
}
