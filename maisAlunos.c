#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Gabriela Campos de Lima Gonçalves\n\n");

    int alunas;
    int alunos;

    printf("Qual a quantidade de alunas na sala");
    scanf("%d", &alunas);
    printf("Qual a quantidade de alunos na sala");
    scanf("%d", &alunos);

    if(alunas > alunos){
        printf("Existem mais alunas que alunos");
    }else if(alunas > alunos){
        printf("Existem mais alunos que alunas");
    }else{
        printf("A quantidade de alunos e alunas é a mesma");
    }
}