#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gon�alves\n\n");
    
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
        printf("Pedro � mais velho");
        }
    }

    if(joana > pedro){
        if(joana > ismael){
            printf("Joana � mais velha");
        }
    }
    
    if(ismael > pedro){
        if(ismael > joana){
            printf("Ismael � mais velho");
        }
    }
}