// 20级期中机试-小帅的函数（20分）
/*
    题目描述
    编程计算y=f(x)的程序，其中：
    y=x*x        x<1
    y=2x-1       1<=x<10
    y=3x-12        x>=10

    输入
    多组样例输入一个整数x，确保x和y均小于int的范围
    输出
    输出相对应的函数值
    
    样例输入 Copy
    10
    0
    样例输出 Copy
    18
    0
*/

#include<stdio.h>

int main(){

    int x, y;

    while(scanf("%d", &x)!=EOF){

        if(x<1)
            y = x*x;
        else if(x>=1 && x<10)
            y = 2*x - 1;
        else if(x>=10)
            y = 3*x - 12;
        else{}

        printf("%d\n", y);
    }

    return 0;
}