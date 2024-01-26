// 20级期中机试-小帅买包子（20分）
/*
    题目描述
    小帅身上有a元b角c分钱，包子需要d元e角f分钱，请问小帅最多能买几个包子？

    输入
    多组样例，每个测试样例一行，输入六个用空格分隔的整数，分别表示 a 、b、c、d、e、f。
    a 、b、c、d、e、f均≤10000且c，d，e不同时为0
    输出
    对于每个测试实例，每行输出一个整数，表示这次小帅最多能买几个包子填肚子。
    
    样例输入 Copy
    6 4 2 3 2 1
    0 0 1 0 0 5
    样例输出 Copy
    2
    0
*/

#include<stdio.h>

int main(){

    int a, b, c;
    int d, e, f;

    while(scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f)!=EOF){

        int haveMoney = a*100 + b*10 + c;
        int needMoney = d*100 + e*10 + f;

        printf("%d\n", haveMoney/needMoney);    
    }

    return 0;
}