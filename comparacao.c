#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gon�alves\n\n");

    printf("VAMOS COMPARAR AS IDADESn\n");

    int idade1;
    int idade2;



    printf("Qual a idade da Joana?\n ");
    scanf("%d", &idade1);
    printf("Qual a idade do Pedro?\n ");
    scanf("%d", &idade2);

    if(idade1 < idade2){
        printf("Joana � mais nova que Pedro\n");
    }else if(idade1 < idade2){
        printf("Joana � mais velha que Pedro\n");
    }else{
        printf("As idades s�o iguais");
    }
}