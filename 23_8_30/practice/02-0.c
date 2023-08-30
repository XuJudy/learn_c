//02-0. 整数四则运算(10)
#include<stdio.h>

int main(){

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);

    return 0;
}