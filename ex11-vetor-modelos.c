#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vetor[N] = {10, 20, 30, 40, 50};
    printf("Preenchendo na declaração (na unha) vetor 1:\n");
    printf("%d\n", vetor[0]);
    printf("%d\n", vetor[1]);
    printf("%d\n", vetor[2]);
    printf("%d\n", vetor[3]);
    printf("%d\n", vetor[4]);

    int vetor2[N];
    printf("Preenchendo depois da declaração (na unha) vetor 2: \n");
    vetor2[3] = 40;
    vetor2[4] = 50;
    vetor2[1] = 20;
    vetor2[0] = 10;
    vetor2[2] = 30;
    printf("%d\n", vetor2[0]);
    printf("%d\n", vetor2[1]);
    printf("%d\n", vetor2[2]);
    printf("%d\n", vetor2[3]);
    printf("%d\n", vetor2[4]);

    int vetor3[N], i;
    printf("Preenchendo usando laço: \n");
    for (i = 0; i < N; i++)
    {
        vetor3[i] = (i + 1) * 10;
    }
    printf("Mostrando os valores preenchidos\n");
    for (i = 0; i < N; i++)
    {
        printf("vetor 3 [%d]: %d\n", i, vetor3[i]);
    }
    printf("Obs.: poderia ter impresso dentro do 1o laço.");

    int vetor4[N];
    printf("Preenchendo usando laço. Digite os valores: \n");
    for (i = 0; i < N; i++)
    {
        printf("vetor4[%d]: ",i);
            scanf("%d",&vetor4[i]);
    }
    printf("Mostrando os valores preenchidos\n");
    for (i = 0; i < N; i++)
        printf("vetor 4 [%d]: %d\n", i, vetor4[i]);
    
    int vetor5[N];
    printf("Preenchendo usando laço e números aleatórios: \n");
    srand(time(NULL));
    for (i = 0; i < N; i++)
        vetor5[i] = rand()%11;
    
    printf("Mostrando os valores preenchidos\n");
    for (i = 0; i < N; i++)
        printf("vetor 5 [%d]: %d\n", i, vetor5[i]);
}