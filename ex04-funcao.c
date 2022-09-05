#include <stdio.h>

//Protótipos
void nomeFaculdade();
float retornarPI();
void imprimeValorInt(int num);
int calcularSoma(int num1, int num2);

int main(){
    nomeFaculdade();
    printf("Valor de PI: %g\n",retornarPI());
    imprimeValorInt(12345);
    printf("Soma: %d\n",calcularSoma(2,4));
}

//Não recebe e não retorna 
void nomeFaculdade(){
    printf("Fatec Jales\n");
}

//Não recebe e retorna
float retornarPI(){
    return 3.14159;
}

//Recebe e não retorna
void imprimeValorInt(int num){
    printf("Número: %d\n",num);
}

//Recebe e Retorna
int calcularSoma(int num1, int num2){
    return num1+num2;
}