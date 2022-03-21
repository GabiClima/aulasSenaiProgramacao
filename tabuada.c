#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gonçalves\n\n");

    int numeroTabuada;

    printf("A tabuada de qual numero voce quer ?\n");
    scanf("%d", &numeroTabuada);
    printf("TABUADA DO %d\n", numeroTabuada);



    for(int i = 1; i <= 10; i++){
        int multiplicacao = i * numeroTabuada;
        printf("%d x %d = %d\n", i, numeroTabuada, multiplicacao);
    }
}