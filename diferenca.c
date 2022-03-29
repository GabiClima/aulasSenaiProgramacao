#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gonçalves\n\n");
    
    int n1;
    int n2;
    

    printf("Digite um numero inteiro");
    scanf("%d", &n1);   
    printf("Digite outro numero inteiro");
    scanf("%d", &n2); 

    if(n1 > n2){
        printf("%d", n1 - n2);
    }else{
        printf("%d", n2 - n1);
    }
}