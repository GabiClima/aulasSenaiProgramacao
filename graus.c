#include <stdio.h>

int main(){
    printf("************************************************\n");
    printf("*  Escola Senai Euclides Facchini Votuporanga  *\n");
    printf("*       Gabriela Campos de Lima Gonçalves      *\n");
    printf("************************************************\n\n");

    float celsius;
    float fahrenhiet;

    printf("Digite a temperatura em °Celsius: ");
    scanf("%f", &celsius);

    fahrenhiet = celsius * 1.8 + 32; 

    printf("A temperatura em Fahrenheit é: %.2f", fahrenhiet);


}