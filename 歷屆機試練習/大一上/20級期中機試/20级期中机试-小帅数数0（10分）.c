// 20级期中机试-小帅数数0（10分）小帅数数0（10分）
/*
    题目描述
    小帅接到一个任务，就是要找出一个整数n的阶乘中末尾到底有多少个0，请你帮帮他。

    输入
    多组样例，输入一个整数n（n≤10000）
    输出
    对于每一个输入的n，输出一个结果。每个输出占一行。
    
    样例输入 Copy
    5
    16
    27
    样例输出 Copy
    1
    3
    6
*/

#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int sum0 = 0;
        int sum2 = 0;
        int sum5 = 0;

        for(int i=2; i<=n; i++){

            int x = i;

            while(x%2==0){

                x = x/2;
                sum2++;
            }

            while(x%5==0){

                x = x/5;
                sum5++;
            }
        }

        sum0 = (sum2>sum5? sum5:sum2);

        printf("%d\n", sum0);
    }

    return 0;
}