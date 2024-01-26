//问题 CF: 函数之和（10分）
/*
题目描述
定义digsum(n)表示n十进制表示的数位和，比如digsum(123)=1+2+3=6,digsum(99)=9+9=18
定义f(n)=\begin{cases}n,n<10\\ f(digsum(n)),n\ge 10\end{cases}
给出m个整数a_1,a_2,...,a_m
求f(a_1)+f(a_2)+...+f(a_m)是多少
输入
第一行输入1个整数m(1\le m\le 10^5)
第二行输入m个整数a_1,a_2,...,a_m(1\le a_i\le 10^9)
输出
输出一行一个整数表示答案。
样例输入 Copy
5
12 33 45 99 991
样例输出 Copy
28
提示
f(12)=3
f(33)=6
f(45)=9
f(99)=9
f(991)=1
答案为3+6+9+9+1=28
*/

#include<stdio.h>

int digsum(int x){

    int sum = 0;

    while(x>0){

        sum = sum + x%10;
        x = x/10;
    }

    return sum;
}

int f(int x){

    while(x>=10)
        x = digsum(x);

    return x;
}

int main(){

    int n, num;
    int sum = 0;

    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%d", &num);

        sum = sum + f(num);
    }

    printf("%d", sum);

    return 0;
}