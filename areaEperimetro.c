#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gonçalves\n\n");

    int lado;
    

    printf("Qual o lado do quadrado em centimetros? \n");
    scanf("%d", &lado);

    int area = lado * lado;
    int perimetro = lado + lado + lado + lado; 

    printf("A area do quadrado é %d\n", area );
    printf("O perimetro do quadrado é %d\n ", perimetro);
    

}