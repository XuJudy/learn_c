//弟弟的作业
/*
题目描述
你的弟弟刚做完了“100以内数的加减法”这部分的作业，请你帮他检查一下。
每道题目（包括弟弟的答案）的格式为a+b=c或者a-b=c，其中a和b是作业中给出的，均为不超过100的非负整数；
c是弟弟算出的答案，可能是不超过200的非负整数，也可能是单个字符"?"，表示他不会算。

输入
输入文件包含不超过100行，以文件结束符结尾。每行包含一道题目，格式保证符合上述规定，且不包含任何空白字符。输入的所有整数均不含前导0。
输出
输出仅一行，包含一个非负整数，即弟弟答对的题目数量。

样例输入
1+2=3
3-1=5
6+7=?
99-0=99
样例输出 
2
*/

#include<stdio.h>

int main(){

    int a, b;
    int correct = 0;    //答對的數量
    char sign;          //+ or -
    char ch[10];

    while(scanf("%d%c%d=%s", &a, &sign, &b, ch)!=EOF){

        if(ch[0]=='?')  continue;   //跳過

        int ans_bro;    //弟弟的答案

        sscanf(ch, "%d", &ans_bro);

        int ans_my = sign == '+'? a+b:a-b;  //是+的話:不是+的話

        if(ans_bro==ans_my) correct++;  //答案正確

    }

    printf("%d", correct);

    return 0;
}