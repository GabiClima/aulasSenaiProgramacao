#include <stdio.h>

int main(){
    printf("************************************************\n");
    printf("*  Escola Senai Euclides Facchini Votuporanga  *\n");
    printf("*       Gabriela Campos de Lima Gon�alves      *\n");
    printf("************************************************\n\n");


    int base1;
    int base2;

    int altura1;
    int altura2;

    int retangulo1;
    int retangulo2;

    printf("Digite a base do primeiro retangulo em cm: \n");
    scanf("%d", &base1);
    printf("Digite a altura do primeiro retangulo em cm: \n");
    scanf("%d", &altura1);

    printf("Digite a base do segundo retangulo em cm: \n");
    scanf("%d", &base2);
    printf("Digite a altura do primeiro retangulo em cm: \n");
    scanf("%d", &altura2);

    retangulo1 = base1 * altura1;
    retangulo2 = base2 * altura2;

    printf("A area do primeiro retangulo � %d \n", retangulo1);
    printf("A area do segundo retangulo � %d \n", retangulo2);

    if(retangulo1 > retangulo2){
        printf("A area do primeiro retangulo � maior");
    }
    else if(retangulo1 < retangulo2){
        printf("A area do segundo retangulo � maior");
    }else{
        printf("A area dos dois e igual");
    }




    
    
}
