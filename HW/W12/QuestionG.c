//问题 G: 弟弟的作业
/*
题目描述
你的弟弟刚做完了“100以内数的加减法”这部分的作业，请你帮他检查一下。
每道题目（包括弟弟的答案）的格式为a+b=c或者a-b=c，其中a和b是作业中给出的，均为不超过100的非负整数；
c是弟弟算出的答案，可能是不超过200的非负整数，也可能是单个字符"?"，表示他不会算。

输入
输入文件包含不超过100行，以文件结束符结尾。每行包含一道题目，格式保证符合上述规定，且不包含任何空白字符。输入的所有整数均不含前导0。
输出
输出仅一行，包含一个非负整数，即弟弟答对的题目数量。

样例输入 Copy
1+2=3
3-1=5
6+7=?
99-0=99
样例输出 Copy
2
*/

#include<stdio.h>

int main(){

    char sign;  //運算符號
    int true = 0;  //答對題數
    int a, b;    //a+(-)b=c
    char c[4] = {0};    // 答案

    while(scanf("%d%c%d=%s", &a, &sign, &b, c)!=EOF){

        if(c[0]=='?')  continue;

        int ans_bro;    //弟弟的答案

        sscanf(c, "%d", &ans_bro);
        
        if(sign=='+'){

            if(a+b==ans_bro)  true++;
        }
        else if(sign=='-'){

            if(a-b==ans_bro)  true++;
        }
    }

    printf("%d\n", true);

    return 0;
}