#include <stdio.h>

void imprimirNome();
short retornarIdade();
int retornarMaior(int num1, int num2);
void imprimirParteFracioanada(float numeroReal);

int main(){
    short idade;
    imprimirNome();
    idade = retornarIdade();
    printf("Idade: %hd\n",idade);
    printf("Maior: %d\n",retornarMaior(4,5));
    imprimirParteFracioanada(3.45); 
}

void imprimirNome(){
    printf("Cristiano\n");
}
short retornarIdade(){
    short idade;
    printf("Digite a idade: ");
    scanf("%hd",&idade);
    return idade;
}
int retornarMaior(int num1, int num2){
    return num1>num2?num1:num2;
}
void imprimirParteFracioanada(float numeroReal){
    int numInt=numeroReal;
    printf("Parte fracionada: %g\n",numeroReal-numInt);
}
