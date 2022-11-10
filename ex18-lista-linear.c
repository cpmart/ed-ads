#include <stdio.h>
#define N 5
struct TipoNodo
{
    int codigo;
    char nome[10];
    float altura;
};

typedef struct TipoNodo TipoNodo;

int inserirInicio(TipoNodo LL[], int IA, int FA, int *IL, int *FL, TipoNodo infoNodo);
int mostrar(TipoNodo LL[], int IA, int FA, int IL, int FL);
int main()
{
    TipoNodo LL[N], infoNodo;
    int IA = 0, FA = N - 1, IL = -1, FL=-1, op = 1;
    while (op != 0)
    {
        printf(":::::::::::::: M E N U ::::::::::::::::\n");
        printf("[1] Inserir no início\n");
        printf("[2] Mostrar\n");
        printf("[0] Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Código: ");
            scanf("%d", &infoNodo.codigo);
            printf("Nome: ");
            scanf("%s", infoNodo.nome);
            printf("Altura: ");
            scanf("%f", &infoNodo.altura);
            inserirInicio(LL, IA, FA, &IL, &FL, infoNodo);
            break;
        case 2:
            mostrar(LL, IA, FA, IL, FL);
            break;
        case 3:
            printf("Já vai tarde... Animal!!!\n");
            break;
        default:
            printf("Opção inválida!!!");
            break;
        }
    }
}

int inserirInicio(TipoNodo LL[], int IA, int FA, int *IL, int *FL, TipoNodo infoNodo)
{
    int i;
    if (IA == *IL && FA == *FL)
        return 1; // deu erro - lista cheia!!
    else
    {
        if (*IL == -1) // Se LL vazio
            *IL = *FL = IA;
        else if (*IL > IA) // Se tiver espaço
            *IL = *IL - 1; // no início da lista
        else
        {
            for (i = *FL; i >= *IL; i--)
                LL[i + 1] = LL[i];
            *FL = *FL + 1;
        }
        LL[*IL] = infoNodo;
        return 0;
    }
}

int mostrar(TipoNodo LL[], int IA, int FA, int IL, int FL)
{
    int i;
    for (i = IA; i <= FA; i++)
    {
        if(i>=IL && i<=FL)
            printf("%4d - %g - %s\n", LL[i].codigo, LL[i].altura, LL[i].nome);
        else
            printf("---------\n");
    }
}