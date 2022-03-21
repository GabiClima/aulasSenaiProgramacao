#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gonçalves\n\n");

    int numero1;
    int numero2;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("Digite outro numero: ");
    scanf("%d", &numero2);
    printf("\n\n");

    double media = (numero1 + numero2)/2.0;

    printf("A soma de  %d + %d = %d\n", numero1, numero2, resultado = numero1 + numero2 );
    printf("A subtracao de  %d - %d = %d\n", numero1, numero2, resultado = numero1 - numero2 );
    printf("A multiplicacao de  %d x %d = %d\n", numero1, numero2, resultado = numero1 * numero2 );
    printf("A divisao de  %d / %d = %d\n", numero1, numero2, resultado = numero1 / numero2 );
    printf("A media de  %d e %d = %.2f\n", numero1, numero2, media);

}