#include<stdio.h>

int main(){

    int x, y;

    printf("Informe o valor de X:");
    scanf("%d", &x);

    printf("\nInforme o valor de Y:");
    scanf("%d", &y);

    if(x == 0 && y == 0){
        printf("\nO ponto esta na origem!");
    }else if(x > 0 && y == 0){
        printf("\nO ponto esta no primeiro quadrante!");
    }else if(x < 0 && y > 0){
        printf("\nO ponto esta no segundo quadrante!");
    }else if(x < 0 && y < 0){
        printf("\nO ponto esta no terceito quadrante!");
    }else if(x < 0 && y < 0){
        printf("\nO ponto esta no quarto quadrante!");
    }else if(x == 0){
        printf("\nO ponto esta sobre o eixo X");
    }else if( y == 0){
        printf("\nO ponto esta sobre o eixo Y");
    }
}
