#include <stdio.h>

void imprimirNome();
short retornaIdade();
int retornaMaior(int num1, int num2);
void imprimeFracioanada(float numeroReal);

int main(){
    short idade;
    imprimirNome();
    idade = retornaIdade();
    printf("Idade: %hd\n",idade);
    printf("Maior: %d\n",retornaMaior(4,5));
    imprimeFracioanada(3.45); 
}

void imprimirNome(){
    printf("Cristiano\n");
}
short retornaIdade(){
    short idade;
    printf("Digite a idade: ");
    scanf("%hd",&idade);
    return idade;
}
int retornaMaior(int num1, int num2){
    return num1>num2?num1:num2;
}
void imprimeFracioanada(float numeroReal){
    int numInt=numeroReal;
    printf("Parte fracionada: %g\n",numeroReal-numInt);
}
