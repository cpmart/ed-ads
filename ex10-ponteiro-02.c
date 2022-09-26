#include <stdio.h>
int preencherVariaveisAtribuicao(int *num1, int *num2);
int preencherVariaveisScanf(int *num1, int *num2);

int main(){
    int num1, num2;
    preencherVariaveisAtribuicao(&num1, &num2);
    printf("Número 1: %d\n",num1);
    printf("Número 2: %d\n",num2);
    preencherVariaveisScanf(&num1, &num2);
    printf("Número 1: %d\n",num1);
    printf("Número 2: %d\n",num2);
}
int preencherVariaveisAtribuicao(int *pnum1, int *pnum2){
    *pnum1 = 10;
    *pnum2 = 20;
    return 0;
}
int preencherVariaveisScanf(int *pnum1, int *pnum2){
    printf("Digite 2 valores: ");
    scanf("%d %d", pnum1, pnum2);
    return 0;
}