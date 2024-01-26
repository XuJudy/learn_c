//问题 BO: 21级补考-按位相加（10分）
/*      數據類型錯誤    */
/*
    题目描述
    小南很喜欢做a+b，他但经常忘记进位，所以他算88+12=90,而不是100。现在老师给了小南一些a+b的算式，请问他算出来会是什么？
    
    输入
    多组样例。每行一个样例，是用空格分开的两个整数a和b（0≤a,b≤109）。
    输出
    对于每一个样例，输出相加后的结果，注意不要输出非0整数的前导0。每个输出占一行。

    样例输入 Copy
    5 6
    55 6
    81 22
    样例输出 Copy
    1
    51
    3
*/

#include<stdio.h>

int main(){

    int a, b;

    while(scanf("%d%d", &a, &b)!=EOF){

        int long_a = 0;     //標記a的位數
        int long_b = 0;     //標記b的位數
        int ans = 0;        //最終答案
        int x[10] = {0};     //a的每一位數
        int y[10] = {0};     //b的每一位數
        int sum[10] = {0};   //a+b每一位數總和
                            /*  注: 個位數在前  */

        while(a>0){     //取出a的每一位數

            long_a++;
            x[long_a] = a%10;
            a = a/10;
        }

        while(b>0){     //取出b的每一位數

            long_b++;
            y[long_b] = b%10;
            b = b/10;
        }

        int i = 1;

        while(i<=long_a || i<=long_b){  //每一位數相加

            sum[i] = x[i] + y[i];

            if(sum[i]>=10)  //若須進位
                sum[i] = sum[i] - 10;

            i++;
        }

        for(int j=i-1; j>0; j--){   //生成ans

            ans = ans*10 + sum[j];
        }

        printf("%d\n", ans);
    }

    return 0;
}