#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gonçalves\n\n");

    int suspeitas;
    int confirmados;
    int mortes;
    int totalDeDados;


    printf("Preencha as seguinties informações sobre a Dengue em Votuporanga\n\n");

    printf("Qual a quantidade de casos suspeitos de Dengue na cidade de Votuporanga?: ");
    scanf("%d", &suspeitas);
    printf("Qual a quantidade de casos confirmados de Dengue na cidade de Votuporanga?: ");
    scanf("%d", &confirmados);
    printf("Qual a quantidade de mortes por Dengue na cidade de Votuporanga?: ");
    scanf("%d", &mortes);

    printf("\n\n");

    printf("Informações sobre a dengue na cidade de Votuporanga\n\n");
    printf("Quantidade de casos suspeitos : %d\n", suspeitas);
    printf("Quantidade de casos confirmados  : %d\n", confirmados);
    printf("Quantidade de mortes : %d\n\n", mortes);
    printf("Total de dados colhidos sobre a Dengue em Votuporanga é %d\n\n", totalDeDados = suspeitas + confirmados + mortes);


}