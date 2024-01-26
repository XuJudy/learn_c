//问题 DF: 判断IP地址（20分）
/*
    题目描述
    小南最近在信息楼管理网络IP地址，IP地址的合法表示形式为a.b.c.d（0≤a,b,c,d≤255）。现在给你一个IP地址，请你判断是不是合法的IP地址。

    输入
    多个样例。每个样例输入一行形式为a.b.c.d的用点“.”分隔的四个整数，这些整数满足int类型范围。
    输出
    如果IP地址合法则输出Yes，不合法则输出No。每个样例输出结果占一行。

    样例输入 Copy
    0.0.0.0
    3.9.12.26
    277.1.1.6
    样例输出 Copy
    Yes
    Yes
    No
*/

#include<stdio.h>

int main(){

    int a, b, c, d;

    while(scanf("%d.%d.%d.%d", &a, &b, &c, &d)!=EOF){

        if(a>=0 && b>=0 && c>=0 && d>=0 && a<=255 && b<=255 && c<=255 && d<=255)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}