#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gonçalves\n\n");

    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);


    for(int i = 1; i < n; i++){
        if(i%2 != 0){
            printf("%d\n", i);

        }
    }


}