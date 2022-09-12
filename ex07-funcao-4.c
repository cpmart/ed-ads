#include <stdio.h>
#include <locale.h>

/*
A Secretaria de Meio Ambiente que controla o índice de poluição mantém 3 grupos deindústrias que são altamente poluentes do meio ambiente. O índice de  poluição  aceitável varia  de  0,05  até  0,25.  Se  o  índice  sobe  para  0,3  as indústrias do 1o grupo são intimadas asuspenderem suas atividades, se o índice crescer para 0,4 as indústriasdo 1o e 2o gruposão intimadas a suspenderem suas atividades, se o índice atingir 0,5 todos os gruposdevem ser notificados a paralisarem suas atividades. Faça um programa que leiao índice de poluição medido e emita a notificação adequada aos diferentes grupos deempresas.*/

void classificarIndide(float indice);
int main(){
    setlocale(LC_ALL,"");
    float indice;
    printf("Informe o índice: ");
    scanf("%f",&indice);
    classificarIndide(indice);
    
}

void classificarIndide(float indice){
    if(indice <= 0.25)
        printf("Aceitável!\n");
    else if(indice <= 0.3)
        printf("Grupo 1 notificado!\n");
    else if(indice <= 0.4)
        printf("Grupos 1 e 2 notificados!\n");
    else
        printf("Grupos 1, 2 e 3 notificados!\n");
}