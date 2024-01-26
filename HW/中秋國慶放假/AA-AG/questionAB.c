//问题 AB: 22-循环-1-自然数e的近似计算
#include<stdio.h>

int Factorial(int x){

    int sum = 1;

    for(int i=2; i<=x; i++)
        sum = sum * i;

    return  sum;
}

int main(){

    int n;
    double e = 1.0;

    scanf("%d", &n);

    for(int i=1; i<=n; i++){

        e = e + 1.0/Factorial(i);
    }

    printf("%f", e);

    return 0;
}