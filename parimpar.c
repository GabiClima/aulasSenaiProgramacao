#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gonçalves\n\n");

    int numero1;
   

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero1);



    if(numero1%2 == 0){
        printf("O numero é par");
    }else{
        printf("O numero é impar");
    }

}