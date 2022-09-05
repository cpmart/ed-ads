#include <stdio.h>

int main()
{
    int num1, num2;
    char op;
    printf("Digite a operação: ");
    scanf("%d %c %d", &num1, &op, &num2);
    switch (op)
    {
    case '+':
        printf("= %d\n", num1 + num2);
        break;
    case '-':
        printf("= %d\n", num1 - num2);
        break;
    case '*':
        printf("= %d\n", num1 * num2);
        break;
    case '/':
    case ':':
        printf("= %f\n", (float)num1 / num2);
        break;
    default:
        printf("Opção inválida!!!\n");
    }
}