//05-1. 约分最简分式
#include<stdio.h>

int main(){

    int a, b, c, d, t, gcd;

    scanf("%d/%d", &a, &b);

    c = a;
    d = b;

    //求最大公因數GCD
    while(b != 0){

        t = a%b;
        a = b;
        b = t;
    }

    gcd = a;
    a = c/gcd;
    b = d/gcd;

    printf("%d/%d", a, b);

    return 0;
}