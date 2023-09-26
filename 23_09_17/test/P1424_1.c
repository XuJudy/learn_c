//P1424 小鱼的航程（改进版)
#include<stdio.h>

int main(){

    int x, n;   //從周x開始算起，經過n天
    int km; //共遊多少公里

    scanf("%d %d", &x, &n);

    //從周一開始記
    n = n+x-8;

    if(x<6)     km = (6-x)*250;

    while(n>=7){

        km = km + n/7*1250;
        n = n%7;
    }

    //餘數可能為6
    if(n%7<6)   km = km + n*250;
    else    km = km + 1250;

    printf("%d", km);

    return 0;
}