#include <stdio.h>

int main(){
    printf("************************************************\n");
    printf("*  Escola Senai Euclides Facchini Votuporanga  *\n");
    printf("*       Gabriela Campos de Lima Gonçalves      *\n");
    printf("************************************************\n\n");


    int bandeira; 

    double bandeira1 = 1.80;
    double bandeira2 = 2.30;
    
    int kmRodado;

    double valor;

    printf("Digite o numero da bandeira <1 ou 2> \n");
    scanf("%d", &bandeira);


    printf("Digite a kilometragem rodada \n");
    scanf("%d", &kmRodado);

    if(bandeira == 1){
        printf("O valor da corrida é : %.2f", valor = kmRodado * bandeira1);
    }else if(bandeira == 2){
        printf("O valor da corrida é : %.2f", valor = kmRodado * bandeira2);
    }

    

    
}
