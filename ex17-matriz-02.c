#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5
#define P 4

int main()
{
    int matrizMercadoProduto[M][P], vetorMercado[M] = {0, 0, 0, 0, 0}, vetorProduto[P] = {0, 0, 0, 0};
    int i, j;
    srand(time(NULL));
    printf("                P1      P2      P3      P4\n");
    for (i = 0; i < M; i++)
    {
        printf("Mercado [%d]  -  ", i);
        for (j = 0; j < P; j++)
        {
            matrizMercadoProduto[i][j] = rand() % 6;
            vetorMercado[i] += matrizMercadoProduto[i][j];
            printf("%2d\t", matrizMercadoProduto[i][j]);
        }
        printf(" = %2d\n", vetorMercado[i]);
    }
    printf("======================================================\n");
    printf("                ");
    for (i = 0; i < P; i++)
    {
        for (j = 0; j < M; j++)
        {
            vetorProduto[i] += matrizMercadoProduto[j][i];
        }
        printf("%2d\t", vetorProduto[i]);
    }
    printf("\n");
}