// 21级期中机试-还原数列（20分）
/*
    题目描述
    小南在计算一个数列{An},其中A1=1, A2=2, An=An-1+An-2。
    
    输入
    多组样例。每行输入一个样例包括一个正整数x（x不超过long long型长度）。
    输出
    对于每一个输入的x，如果是数列{An}中的数，则输出一个正整数k，表示输入的数x是数列{An}中的第k项，其中0<k≤91，
    如果x不是数列{An}中的数，则输出0。
    每个输出占一行。

    样例输入 Copy
    2
    3
    5
    8
    13
    14
    样例输出 Copy
    2
    3
    4
    5
    6
    0
*/

#include<stdio.h>

void An(long long data[]){

    data[1] = 1;
    data[2] = 2;

    for(int i=3; i<95; i++){

        data[i] = data[i-1] + data[i-2];
    }
}

int main(){

    long long x;
    long long data[100] = {0};

    while(scanf("%lld", &x)!=EOF){

        int flag = 0;

        An(data);

        for(int i=1; i<95; i++){

            if(data[i]==x){

                flag = i;
                break;
            }            
        }

        printf("%d\n", flag);
    }

    return 0;
}