//02-3. 逆序的三位数(10)
#include<stdio.h>

int main(){

    int n, a, b, c;

    scanf("%d", &n);

    a = n % 100 % 10;           //原個位數
    b = ((n % 100)-a) / 10;     //原十位數
    c = (n - a - 10*b) /100;    //原百位數

    printf("%d%d%d\n", a, b, c);

    return 0;
}