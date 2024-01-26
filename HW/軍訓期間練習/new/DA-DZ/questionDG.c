//问题 DG: 字符串相加（20分）
/*
题目描述
小南自学习C语言以来，做过很多关于加法的题目，整数相加、实数相加、分数相加、时钟相加等等。
这一次，小南想试试字符串相加，字符串由小写字母“a”~“z”组成，为了便于计算，将其编号为0~25。
加法规则为：两个字符串中的字符从左至右按照对应位置相加变成一个新字符，不进位，
如"abc"+"zzz"，有'a'+'z'='z'，'b'+'b'='c'，'c'+'z'='b'，因此有"abc"+"zbz"="zcb"。

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

    char a[1000] = {0};     //字串a
    char b[1000] = {0};     //字串b
    char ans[1000] = {0};   //字串和

    while(scanf("%s%s", a, b)!=EOF){

        int len_max;    //最長字串長度
        int len_a = strlen(a);  //字串a的長度
        int len_b = strlen(b);  //字串的長度

        //最長字串
        if(len_a>len_b)
            len_max = len_a;
        else
            len_max = len_b;

        //先將a字串轉為數字編號
        for(int i=0; i<len_max; i++)
            if(a[i]>='a' && a[i]<='z')  a[i] = a[i] - 'a';

        //先將b字串轉為數字編號
        for(int i=0; i<len_b; i++)
            if(b[i]>='a' && b[i]<='z')  b[i] = b[i] - 'a';

        //編號相加
        for(int i=0; i<len_max; i++){

            ans[i] = a[i] + b[i];

            //清空
            a[i] = 0;
            b[i] = 0;

            //超出不進位
            if(ans[i]>25)    ans[i] = ans[i] - 26;

            printf("%c", ans[i]+'a');
        }
        
        printf("\n");
    }

    return 0;
}