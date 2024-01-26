//问题 AB: 20级期中机试-小帅数数0（10分）
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

        int sum_2 = 0;
        int sum_5 = 0;

        for(int i=2; i<=n; i++){

            int x = i;  //暫存i

            while(x%2==0){   //可被2整除
                sum_2++;
                x = x/2;
            }

            while(x%5==0){   //可被5整除
                sum_5++;
                x = x/5;
            }
        }

        if(sum_2>sum_5)
            printf("%d\n", sum_5);
        else
            printf("%d\n", sum_2);
    }

    return 0;
}