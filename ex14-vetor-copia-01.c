#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int va[N], vb[N], vc[2 * N], i;
    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        va[i] = rand() % 11;
        vb[i] = rand() % 11;
    }
    for (i = 0; i < N; i++)
    {
        vc[i] = va[i];
        vc[i+5] = vb[i];
    }
    for (i = 0; i < N; i++)
    {
        printf("%d - A = %2d - B = %2d\n",i,va[i],vb[i]);
    }
    for (i = 0; i < 2*N; i++)
    {
        printf("%d - C = %2d\n",i,vc[i]);
    }

}