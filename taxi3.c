#include <stdio.h>

int main(){
    printf("************************************************\n");
    printf("*  Escola Senai Euclides Facchini Votuporanga  *\n");
    printf("*       Gabriela Campos de Lima Gonçalves      *\n");
    printf("************************************************\n\n");

    int bandeira; 

    float bandeira1 = 1.80;
    float bandeira2 = 2.30;
    
    float kmRodado;

    float valor;

    float valorMinimo = 3.50;

    int desconto;

    printf("ATENCAO, taxa minima do taxi : 3.50\n");

    printf("Digite o numero da bandeira <1 ou 2> \n");
    scanf("%d", &bandeira);


    printf("Digite a kilometragem rodada \n");
    scanf("%f", &kmRodado);

    printf("O taxi oferece desconto de 30% ?  <1 - SIM ou 2 - NAO>\n");
    scanf("%d", &desconto);



    if(bandeira == 1){
         valor = kmRodado * bandeira1;
    }else{
         valor = kmRodado * bandeira2;
    }

    if(valor < valorMinimo){
        printf("O valor da corrida é %.2f", valorMinimo);
    }else{
        if(desconto == 1){
        printf("O valor da corrida é: %.2f", valor * 0.7);
    }else
         printf("O valor da corrida é : %.2f \n", valor);
    }

  



}