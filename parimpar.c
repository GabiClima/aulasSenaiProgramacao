#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gon�alves\n\n");

    int numero1;
   

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero1);



    if(numero1%2 == 0){
        printf("O numero � par");
    }else{
        printf("O numero � impar");
    }

}