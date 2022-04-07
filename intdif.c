#include <stdio.h>

int main(){
    printf("************************************************\n");
    printf("*  Escola Senai Euclides Facchini Votuporanga  *\n");
    printf("*       Gabriela Campos de Lima Gonçalves      *\n");
    printf("************************************************\n\n");

    int n1;
    int n2;
    int n3;

    printf("Voce devera digitar 3 numeros inteiros diferentes\n");

    printf("Digite o primeiro numero\n");
    scanf("%d", &n1);

    printf("Digite o segundo numero\n");
    scanf("%d", &n2);

    printf("Digite o terceiro numero\n");
    scanf("%d", &n3);

    if(n1 < n2 && n1 < n3){
        if(n2 < n3){
            printf("%d %d %d", n1, n2, n3);
        }else{
            printf("%d %d %d", n1, n3, n2);
        }
    }

    if(n2 < n1 && n2 < n3){
        if(n1 < n3){
            printf("%d %d %d", n2, n1, n3);
        }else{
            printf("%d %d %d", n2, n3, n1);
        }
    }

     if(n3 < n1 && n3 < n2){
        if(n1 < n2){
            printf("%d %d %d", n3, n1, n2);
        }else{
            printf("%d %d %d", n3, n2, n1);
        }
    }

}