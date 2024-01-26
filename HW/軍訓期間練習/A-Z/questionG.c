//22-循环-1-质因数分解
/*
    题目描述
    密码学的公钥密码算法RSA中n是由两个不同的质数相乘组成，小南想编写一个求正整数n较大的那个质数的程序，你能帮他实现吗？ 

    输入
    多组样例。每组样例输入数据只有一行，包含一个正整数n（6≤n≤2*109）。

    输出
    对于每组样例，输出一个正整数p，即较大的那个质数。 每个输出占一行。

    样例输入 Copy
    6
    21
    77
    样例输出 Copy
    3
    7
    11
*/

#include<stdio.h>
#include<math.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int sqrt_n = sqrt(n);

        for(int i=sqrt_n; i>1; i--){

            if(n%i==0){

                printf("%d\n", n/i);
                break;
            }
        }
    }

    return 0;
}