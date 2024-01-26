// 22-循环-1-分数相加
/*
    题目描述
    给你2个分数，求他们的和，并要求结果为最简形式。
    
    输入
    多样例输入。每个样例是一行，以a/b+c/d的形式输入，四个正整数a,b,c,d满足0<a,b,c,d<1000，表示两个分数a/b 和 c/d。 
    输出
    对于每组测试数据，输出e/f，表示a/b + c/d的最简化结果，每组结果输出占一行。如果分母f为1，则只输出e。
*/

#include<stdio.h>

int gcd(int x, int y){  //最大公因數

    int gcd = 1;

    if(x>y){

        int tmp = x;
        x = y;
        y = tmp;
    }

    for(int i=2; i<=x; i++){

        if(x%i==0 && y%i==0)    gcd = i;
    }

    return gcd;
}

int main(){

    int a, b, c, d;
    int e, f;
    int max;

    while(scanf("%d/%d+%d/%d", &a, &b, &c, &d)!=EOF){

        f = b*d;
        e = a*d + c*b;
        max = gcd(e, f);

        f = f/max;
        e = e/max;

        if(f==1)    printf("%d\n", e);
        else    printf("%d/%d\n", e, f);
    }

    return 0;
}