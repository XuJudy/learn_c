//问题 N: 22-循环-1-正分数求和
/*
    题目描述
    给你2个分数两个分数a/b 和 c/d（0<a,b,c,d<1000），求它们的和，并要求和为最简形式。
    
    输入
    多样例。每组测试数据输入一行，包含用空格分开的四个正整数a,b,c,d，表示两个分数a/b 和 c/d。
    输出
    对于每组测试数据，输出两个整数e和f，用空格分开，表示两个分数a/b和c/d相加后的最简化结果e/f，每组输出占一行。
    
    样例输入 Copy
    1 2 1 3
    4 3 2 3
    样例输出 Copy
    5 6
    2 1
*/

#include<stdio.h>

int gcd(int x, int y){

    int gcd = 1;

    if(x>y){

        int tmp = x;
        x = y;
        y = tmp;
    }

    for(int i=2; i<=x; i++){

        if(x%i==0 && y%i==0){

            gcd = i;
        }
    }

    return gcd;
}

int main(){

    int a, b, c, d;
    int e, f;
    int max;

    while(scanf("%d%d%d%d", &a, &b, &c, &d)!=EOF){

        a = a*d;
        c = c*b;

        e = a + c;
        f = b * d;

        max = gcd(e, f);

        e = e/max;
        f = f/max;

        printf("%d %d\n", e, f);
    }

    return 0;
}