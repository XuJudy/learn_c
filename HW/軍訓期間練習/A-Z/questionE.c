//22-数学-1-求最大值
/*
    题目描述
    对于给定的 n（1 ≤ n ≤ 1015），求一对整数 (i,j)，在满足gcd(i,j)=1 且 1 ≤ i < j ≤ n 的条件下求最大的 i+j 的值 。 gcd(i,j)=1表示i和j互为质数。
    输入
    多组样例。每组样例输入一行，包括一个整数 n。
    输出
    对于每个样例，输出满足条件的最大的i+j的值。每个输出占一行。
*/
#include<stdio.h>

int main(){

    long long n;
    
    while(scanf("%lld", &n)!=EOF){

        //相鄰兩數必互質
        if(n>1)
            printf("%lld\n", n+n-1);
        else
        printf("2\n");
    }

    return 0;
}