#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gonçalves\n\n");

    int a;

    printf("Digite um numero inteiro de 1 a 12 correspondente ao mes desejado");
    scanf("%d", &a);

    if(a == 1){
        printf("Janeiro");
    }

    if(a == 2){
        printf("Fevereiro");
    }

    if(a == 3){
        printf("Março");
    }

    if(a == 4){
        printf("Abril");
    }

    if(a == 5){
        printf("Maio");
    }

    if(a == 6){
        printf("Junho");
    }

    if(a == 7){
        printf("Julho");
    }

    if(a == 8){
        printf("Agosto");
    }

    if(a == 9){
        printf("Setembro");
    }

    if(a == 10){
        printf("Outubro");
    }

    if(a == 11){
        printf("Novembro");
    }

    if(a == 12){
        printf("Dezembro");
    }

    if(a > 12){
        printf("O numero não corresponde a nenhum mes do ano ");
    }

    if(a < 1){
        printf("O numero não corresponde a nenhum mes do ano ");
    }


}