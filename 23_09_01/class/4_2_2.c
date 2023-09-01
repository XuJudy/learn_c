//猜數遊戲
/*
    1. 先出隨機數x 將次數(sum)歸零
    2. 讓用戶數入一個文字n，將次數+1
    3. 若n>x,輸出"大了"
       若n<x,輸出"小了"
    4. 再次讓用戶進行輸入
    5. 若n=x,遊戲結束輸出"猜中"
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(0));
    int x = rand()%100+1;   //%100:使隨機數取100以內的數
    int n;
    int sum = 0;
    printf("我已經想好一個1到100之間的數。\n");

    do{

        printf("請猜猜這個1到100之間的數: ");
        scanf("%d", &n);
        sum++;

        if(n>x) printf("你猜的數大了。\n");
        if(n<x) printf("你猜的數小了。\n");
    } 
    while (n!=x);

    printf("太好了，你用了%d次就猜到答案了。\n", sum);

    return 0;
}