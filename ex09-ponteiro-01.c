#include <stdio.h>

int main(){
    int a, *pa;
    a = 10;
    pa = &a;
    *pa = 20;       //* é conteúdo do ponteiro
    printf("a = %d\n",a);
    printf("*pa = %d\n",*pa);
    printf("&a = %p\n",&a);
    printf("pa = %p\n",pa);
}