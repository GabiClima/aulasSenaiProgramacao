#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gonçalves\n\n");

    printf("TABUADA DO 3\n");


    for(int i = 1; i <= 10; i++){
        int multiplicacao = i * 3;
        printf("%d x 3 = %d\n", i, multiplicacao);
    }
}