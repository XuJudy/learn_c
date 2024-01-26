// 问题 C: 素数和
/*
    题目描述
    小李最近喜欢研究素数
    她就在想啊
    把一个偶数拆成两个不同素数的和，有几种拆法呢？
    输入
    多组输入，输入包含一些正的偶数，其值不会超过10000。
    输出
    对应每个偶数，输出其拆成不同素数的个数，每个结果占一行。
    样例输入
    30
    26
    样例输出
    3
    2
*/

#include<stdio.h>
#include<stdbool.h>

// 是否是素數
int isPrime(int num){

    int flag = 1;

    for(int j=2; j*j<=num; j++){

        if(num%j==0){

            flag = 0;
            break;
        }
    }

    return flag;
}

int main(){

    int num;

    while(scanf("%d", &num)!=EOF){

        int sum = 0;

        for(int i=3; i<num/2; i++){

            if(isPrime(i) && isPrime(num-i)){

                sum++;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}