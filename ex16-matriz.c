#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 4
#define C 3

int main(){
    int matriz[L][C], i, j, maiorMatriz, vetorMaior[L], maiorLinha;
    srand(time(NULL));
    for (i = 0; i < L; i++){        //preenchendo a matriz por linha
        for (j = 0; j < C; j++){
            matriz[i][j]=rand()%21;            
        }       
    }
    maiorMatriz=matriz[0][0];       //pegando o 1o elemento como referência para buscar o maior
    for (i = 0; i < L; i++){    
        maiorLinha = matriz[i][0];  //pegando o 1o elemento da linha para encontrar o maior dessa linha
        for (j = 0; j < C; j++){
            printf("%2d\t",matriz[i][j]);
            if(matriz[i][j]>maiorLinha)     //testanto maior por linha
                maiorLinha = matriz[i][j];            
        }       
        printf("\t= %2d\n",maiorLinha);     //imprimindo o maior da linha na frente da matriz
        maiorMatriz = maiorLinha>maiorMatriz? maiorLinha: maiorMatriz;      //testando o maior da matriz            
    }
    printf("Maior valor da matriz: %d\n",maiorMatriz);
    
}