//问题 Q: 简单偶数和
/*
    题目描述
    编制程序，输入n个整数（n从键盘输入,n>0）,输出它们的偶数和。
    
    输入
    n
    n个整数
    输出
    其中偶数的和
    
    样例输入 Copy
    10
    1 2 3 4 5 6 7 8 9 10
    样例输出 Copy
    30
*/

#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int x;
        int sum = 0;

        for(int i=0; i<n; i++){

            scanf("%d", &x);

            if(x%2==0)
                sum = sum + x;
        }

        printf("%d", sum);
    }
    return 0;
}