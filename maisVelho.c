#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gonçalves\n\n");
    
    int pedro;
    int joana;
    int ismael;

    printf("Qual a idade de Pedro?");
    scanf("%d", &pedro);
    printf("Qual a idade de Joana?");
    scanf("%d", &joana);
    printf("Qual a idade de Ismael?");
    scanf("%d", &ismael);

    if(pedro > joana){
        if(pedro > ismael){
        printf("Pedro é mais velho");
        }
    }

    if(joana > pedro){
        if(joana > ismael){
            printf("Joana é mais velha");
        }
    }
    
    if(ismael > pedro){
        if(ismael > joana){
            printf("Ismael é mais velho");
        }
    }
}