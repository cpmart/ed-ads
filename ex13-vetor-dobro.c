#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vetorA[N], vetorB[N], i;
    srand(time(NULL));
    printf("2 x  A =    B\n");
    printf("==================\n");
    for (i = 0; i < N; i++){
        vetorA[i] = rand()%11;
        vetorB[i] = vetorA[i]*2;
        printf("2 x %2d = %4d\n",vetorA[i], vetorB[i]);
    }       
}