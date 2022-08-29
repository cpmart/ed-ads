#include <stdio.h>

int main(){
    int numero, fatorial=1;
    numero = 5;
    for(int i=numero; i>=1; i--){
        fatorial *= i;
    }
    printf("Fatorial de %d: %d\n", numero, fatorial);
}