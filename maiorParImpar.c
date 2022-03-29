#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gonçalves\n\n");

    int n1;
    int n2;

    printf("Digite um numero inteiro");
    scanf("%d", &n1);
    printf("Digite um numero inteiro");
    scanf("%d", &n2);

    if(n1 > n2){
        if(n1%2 == 0){
            printf("O primeiro numero é maior e par\n");
        } else {
            printf("O primeiro numero é maior e impar\n");

        }
    }else{
        if(n2%2 == 0){
            printf("O segundo numero é maior e par\n");
        } else {
            printf("O segundo numero é maior e impar\n");

        }
           
    }

    

    /*if(n1 > n2){
        printf("O Primeiro Numero é maior que o segundo\n");
    }else{
        printf("O Primeiro numero é menor que o segundo\n");
    }

    if(n1%2 == 0){
        printf("O primeiro numero  é par\n");
    }else{
        printf("O primeiro numero é impar\n");
    }

    if(n2%2 == 0){
        printf("O segundo numero é par\n");
    }else{
        printf("O segundo numero é impar\n");
    }*/



}