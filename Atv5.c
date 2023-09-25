#include<stdio.h>
#include <math.h>

int main(){
    float xp1, yp1, xp2, yp2, operacao;

    printf("Informe o X do primeiro ponto:");
    scanf("%f", &xp1);

    printf("\nInforme o Y do primeiro ponto:");
    scanf("%f", &yp1);

    printf("\nInforme o X do segundo ponto:");
    scanf("%f", &xp2);

    printf("\nInforme o do segundo ponto:");
    scanf("%f", &yp2);

    operacao = sqrt(pow(xp2 - xp1, 2.0) + pow(yp2 - yp1, 2.0));
    

    printf("A distancia entre os pontos e de: %.4f", operacao);

}
