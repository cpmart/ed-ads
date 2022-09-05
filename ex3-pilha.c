#include <stdio.h>
int a();
int b();
int c();
int d();

int main(){
    a();
    b();
    c();
    d();
}
int a(){
    printf("a\n");
    return 0;
}
int b(){
    printf("b\n");
    d();
    return 0;
}
int c(){
    printf("c\n");
    b();
    return 0;
}
int d(){
    printf("d\n");
    a();
    return 0;
}
