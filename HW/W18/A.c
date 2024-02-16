// 问题 A: 22-循环-1-翻转数字
/*
    题目描述
    给定一个整数，请将该数各个位上数字反转得到一个新数。 新数也应满足整数的常见形式，即除非是给定的原数为零，否则反转后得到的新数的最高位数字不应为零 。 

    输入
    多样例。每组样例输入一个整数n（-109≤n≤109 ）。
    输出
    对于每个样例输出一个整数，表示反转后的新数。 每个结果占一行。
    
    样例输入
    123
    -1000
    样例输出
    321
    -1
*/

#include<stdio.h>
#include<string.h>

int main(){

    int n = 0;
    int flag = 0;

    while(scanf("%d", &n)!=EOF){
        
        int d = 0;
        if(n<0){

            printf("-");
            n = n*-1;
        }

        while(n>0){

            d = d*10 + n%10;
            n = n/10;
        }

        printf("%d\n", d);
    }

    return 0;
}