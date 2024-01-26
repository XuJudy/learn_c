// 问题 D: 22-数学-1-最大公约数
/*
    题目描述
    如果d是能整除a和b的最大的数，则称d为a和b的最大公约数(Greatest Common Divisor)，记作gcd(a,b)。如果gcd(a,b)=1，我们就称a和b是互素的。
    现给一个区间[a,b](1≤a≤b≤109)，求与6互素的数的个数。例如：区间[1,10],与6互素的数为1,5,7,所以一共是3个。
    小南知道一个简单的方法就是对于每一个区间[a,b]，采用穷举的方法去判断区间内的每一个数是否与6互素，然后进行统计。但是这样的话有可能会超时哦，所以你需要利用一些数学基础想到优化的方法去帮助小南完成任务。
    输入
    多样例。样例的个数由第一行输入的一个整数k(k≤10000)确定。接下来的k行表示输入的k个样例，每个样例输入占一行,为两个用空格分开的正整数a和b，表示区间[a,b](1≤a≤b≤109)。
    输出
    对于每个样例输入，输出一个整数表示统计的结果，每个结果占一行，
    样例输入 Copy
    2
    1 10
    1 1000000000
    样例输出 Copy
    3
    333333333
    提示
    考虑计算区间[1~x]之间与6互素的整数个数的公式。
*/

#include<stdio.h>
#include<string.h>

int main(){

    int k;
    
    while(scanf("%d", &k)!=EOF){

        while(k--){

            int a, b;
            int sum1, sum2;

            scanf("%d%d", &a, &b);
            
            a--;
            
            sum1 = a - a/2 - a/3 + a/6;
            sum2 = b - b/2 - b/3 + b/6;

            printf("%d\n", sum2-sum1);
        }

    }
}