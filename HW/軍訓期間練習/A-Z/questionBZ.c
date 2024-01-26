//22-输入输出-2-保留余数的除法
/*
    题目描述:
    给定被除数a和除数b，求整数商及余数。
    输入:
    多组样例，每个测试样例一行，每行为两个正整数a、b。（0<a, b<105）
    输出:
    商 余数
*/
#include<stdio.h>

int main(){

    int a, b;

    while(scanf("%d%d", &a, &b)!=EOF){

        printf("%d %d\n", a/b, a%b);
    }

    return 0;
}