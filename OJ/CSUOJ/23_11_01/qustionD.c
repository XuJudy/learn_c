//问题 D: 不可摸数
/*
    题目描述
    s(n)是正整数n的真因子之和，即小于n且整除n的因子和.
    例如s(12)=1+2+3+4+6=16.
    如果任何数m，s(m)都不等于n,则称n为不可摸数.

    输入
    包含多组数据.每组数据1行给出n(2<=n<=1000)是整数。
    输出
    如果n是不可摸数，输出yes，否则输出no

    样例输入 Copy
    2
    5
    8
    样例输出 Copy
    yes
    yes
    no
*/

#include<stdio.h>

int S(int n){

    int sum = 0;

    for(int i=1; i*i<=n; i++){

        if(n%i==0 && i*i!=n){

            sum = sum + i + n/i;
        }
        else if(n%i==0 && i*i==n){

            sum = sum + i;
        }
    }

    sum = sum - n;

    return sum;
}

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int flag;

        for(int i=2; i<=1000; i++){

            if(S(i)!=n)
                flag = 1;
            else if(S(i)==n){

                flag = 0;
                break;
            }
        }

        if(flag)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}