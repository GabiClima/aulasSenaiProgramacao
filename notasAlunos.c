#include <stdio.h>

int main(){
    printf("************************************************\n");
    printf("*  Escola Senai Euclides Facchini Votuporanga  *\n");
    printf("*       Gabriela Campos de Lima Gonçalves      *\n");
    printf("************************************************\n\n");

    
    
    float soma = 0;
    float media;

    float nota;
    float notaMaior = 0;
    float notaMenor = 10;


    for(int i = 0; i < 10; i++){
        
        printf("Digite a nota");
        scanf("%f", &nota);

        soma = soma + nota;

        if(nota > notaMaior){
            notaMaior = nota;
        }

        if(nota < notaMenor){
            notaMenor = nota;
        }

    }


    media = soma/10;

    printf("A soma das notas é : %.1f \n", soma );
    printf("A media das notas que voce digitou é: %.1f \n", media);
    printf("A maior nota é: %.1f \n", notaMaior);
    printf("A menor nota é: %.1f \n", notaMenor);


}