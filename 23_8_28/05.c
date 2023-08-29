//Ch2 複習題8.

#include<stdio.h>

int main(){

    int a, b;
    a= 5;
    b= 6;

    b=a;
    printf("a=%d b=%d\n", a, b);

    a=b;
    printf("a=%d b=%d\n", a, b);

    printf("%d %d\n", b, a);

    return 0;
}