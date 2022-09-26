#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    //Preencha o vetor e mostre:
    //maior valor
    //menor valor
    //soma de todos os valores
    int vetor[N], i, maior, menor, total=0;
    srand(time(NULL));
    for (i = 0; i < N; i++){
        vetor[i]=rand()%10;
        if(i==0)
            maior=menor=vetor[0];
        maior = vetor[i]>maior?vetor[i]:maior;
        menor = vetor[i]<menor?vetor[i]:menor;
        total += vetor[i];
        printf("%d\t",vetor[i]);
    }
    printf("\nMaior: %d\n",maior);
    printf("Menor: %d\n",menor);
    printf("Total: %d\n",total);
        
}