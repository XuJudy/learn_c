//P1421 小玉买文具
#include<stdio.h>

int main(){

    int a, b, money, n;

    scanf("%d %d", &a, &b);

    money = 10*a+b;
    
    printf("%d", money/19);

    return 0;
}