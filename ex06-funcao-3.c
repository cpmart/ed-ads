#include <stdio.h>

/*
Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferior a 500 reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento. */

float ajustarSalario(float salario);
void imprimirCodigo(int codigo);

int main(){
    float salario;
    printf("Informe o valor do salário: ");
    scanf("%f",&salario);
    printf("Salário final: %g\n", ajustarSalario(salario));
}

float ajustarSalario(float salarioFuncao){
    if(salarioFuncao<=500)
        return salarioFuncao*1.3;
    else
        return salarioFuncao;
}

