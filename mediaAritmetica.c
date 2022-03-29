#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gonçalves\n\n");

    int n;
    int n1;
    double soma = 0;
    double media;

    printf("De quantos numeros voce deseja calcular a media?\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        
        printf("Digite um dos numeros");
        scanf("%d", &n1);
        soma = soma + n1;

    }


    media = soma/n;

    printf("A media dos numeros que voce digitou é: %.1f", media);
}