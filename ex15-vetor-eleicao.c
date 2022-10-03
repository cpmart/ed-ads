#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int votacao[50], totalVotos[5]={0,0,0,0,0}, i, maior;
    srand(time(NULL));
    for(i=0; i<50; i++){
        votacao[i]=(rand()%5)+5;
        printf("%d\n",votacao[i]);
    }
    for(i=0; i<50; i++){
        totalVotos[votacao[i]-5]++;
        /*if(votacao[i]==5)
            totalVotos[0]++;
        else if(votacao[i]==6)
            totalVotos[1]++;
        else if(votacao[i]==7)
            totalVotos[2]++;
        else if(votacao[i]==8)
            totalVotos[3]++;
        else
            totalVotos[4]++;*/
    }
    for(i=0; i<5; i++){
        printf("Candidato %d - %d votos\n",i+5, totalVotos[i]);
    }
    maior = totalVotos[0];
    int eleito=5;
    for(i=0; i<5; i++){
        if(totalVotos[i]>maior){
            maior = totalVotos[i];
            eleito = i+5;
        }
    }
    printf("1o lugar: %d\n",eleito);
}