// P5713 【深基3.例5】洛谷团队系统
/*
    题目描述
    在洛谷上使用团队系统非常方便的添加自己的题目。
    如果在自己的电脑上配置题目和测试数据，每题需要花费时间5分钟；
    而在洛谷团队中上传私有题目，每题只需要花费3分钟，但是上传题目之前还需要一次性花费11分钟创建与配置团队。
    现在要配置n道题目，如果本地配置花费的总时间短，请输出 Local，否则输出 Luogu。

    输入格式
    输入一个正整数n，表示需要配置的题目量。
    输出格式
    输出一行，一个字符串。如果本地配置花费的总时间短，请输出 Local，否则输出 Luogu。

    输入
    2
    50
    输出
    Local
    Luogu
*/

#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int local = 5*n;
        int luogu = 11 + 3*n;

        printf("%s\n", local<luogu? "Local":"Luogu");
    }

    return 0;
}