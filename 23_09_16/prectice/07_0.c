//07-0. 写出这个数
#include<stdio.h>

int main(){

    char ch;
    char num[100];
    int sum = 0;

    while( (ch = getchar()) != '\n' ){  //當不是輸入空格

        sum = sum + ch-'0';
    }

    return 0;
}