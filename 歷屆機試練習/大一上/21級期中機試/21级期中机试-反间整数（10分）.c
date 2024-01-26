//问题 L: 21级期中机试-反间整数（10分）
/*
    题目描述
    将一个整数n的数字顺序颠倒，再加上原先的数就得到了n的"反间整数"。
    例如，对于给定的整数1325，首先将该整数的数字顺序颠倒，得到5231，然后再加上原先的数1325，我们得到5231+1325=6556就是1325的"反间整数"。
    注意如果颠倒之后的数字有前缀零，前缀零将会被忽略。例如n = 100时，颠倒之后是1。聪明的你，能帮他编写一个程序实现"反间整数"的构造吗？

    输入
    多组样例。每行输入一个样例包括一个整数n（n是一个十进制整数，长度≤1000位)
    输出
    对于每一个输入的n，输出一个数据，表示n的"反间整数"。每个输出占一行。

    样例输入
    -9
    100
    1325
    样例输出
    -18
    101
    6556 
*/

#include<stdio.h>
#include<string.h>

int main(){

    char word[2000] = {0};

    while(scanf("%s", word)!=EOF){

        int in = 0; // 進位
        int flag = 0;   // 正:0 負:1
        int len = strlen(word);
        char sum[2000] = {0};

        // 正負?
        if(word[0]=='-'){

            flag = 1;

            for(int i=0; i<len-1; i++){

                word[i] = word[i+1];
            }

            len--;
        }

        // 相加
        for(int i=0; i<len; i++){

            int tmp = (word[i]-'0') + (word[len-1-i]-'0') + in;
            in = tmp/10;
            sum[i] = tmp%10;
        }

        // 進位?
        if(in>0){

            sum[len] = in;
            len++;
        }

        // 輸出: 正/負 -> 數字
        // 正/負
        if(flag)
            printf("-");
        
        // 數字
        for(int i=len-1; i>=0; i--){

            printf("%d", sum[i]);
        }

        printf("\n");
    }

    return 0;
}