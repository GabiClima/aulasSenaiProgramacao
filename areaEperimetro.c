#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gon�alves\n\n");

    int lado;
    

    printf("Qual o lado do quadrado em centimetros? \n");
    scanf("%d", &lado);

    int area = lado * lado;
    int perimetro = lado + lado + lado + lado; 

    printf("A area do quadrado � %d\n", area );
    printf("O perimetro do quadrado � %d\n ", perimetro);
    

}