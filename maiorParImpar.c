#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gon�alves\n\n");

    int n1;
    int n2;

    printf("Digite um numero inteiro");
    scanf("%d", &n1);
    printf("Digite um numero inteiro");
    scanf("%d", &n2);

    if(n1 > n2){
        if(n1%2 == 0){
            printf("O primeiro numero � maior e par\n");
        } else {
            printf("O primeiro numero � maior e impar\n");

        }
    }else{
        if(n2%2 == 0){
            printf("O segundo numero � maior e par\n");
        } else {
            printf("O segundo numero � maior e impar\n");

        }
           
    }

    

    /*if(n1 > n2){
        printf("O Primeiro Numero � maior que o segundo\n");
    }else{
        printf("O Primeiro numero � menor que o segundo\n");
    }

    if(n1%2 == 0){
        printf("O primeiro numero  � par\n");
    }else{
        printf("O primeiro numero � impar\n");
    }

    if(n2%2 == 0){
        printf("O segundo numero � par\n");
    }else{
        printf("O segundo numero � impar\n");
    }*/



}