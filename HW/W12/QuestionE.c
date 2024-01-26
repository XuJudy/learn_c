//问题 E: 字符串相加（20分）
/*
题目描述
小南自学习C语言以来，做过很多关于加法的题目，整数相加、实数相加、分数相加、时钟相加等等。
这一次，小南想试试字符串相加，字符串由小写字母“a”~“z”组成，为了便于计算，将其编号为0~25。
加法规则为：两个字符串中的字符从左至右按照对应位置相加变成一个新字符，不进位，如"abc"+"zbz"，有'a'+'z'='z'，'b'+'b'='c'，'c'+'z'='b'，因此有"abc"+"zbz"="zcb"。你能帮他编程实现吗？

输入
多个样例。每个样例包含两个字符串，字符串的长度len满足1≤n≤1000。
输出
对于每个样例，输出一个新的字符串。每个样例结果输出占一行。

样例输入 Copy
aa ccc
abcde bbb
abc zbz
样例输出 Copy
ccc
bcdde
zcb
*/

#include<stdio.h>
#include<string.h>

int main(){

    char a[1010] = {0};
    char b[1010] = {0};

    while(scanf("%s%s", &a, &b)!=EOF){

        int len1 = strlen(a);
        int len2 = strlen(b);
        char ans[1010] = {0};

        for(int i=0; i<len1; i++){

            a[i] = a[i] - 'a';
        }

        for(int i=0; i<len2; i++){

            b[i] = b[i] - 'a';
        }

        for(int i=0; i<len1 || i<len2; i++){

            ans[i] = (a[i] + b[i]) + 'a';

            if(ans[i]>'z')
                ans[i] = ans[i] - 26;

            printf("%c", ans[i]);
        }

        printf("\n");
    }

    return 0;
}