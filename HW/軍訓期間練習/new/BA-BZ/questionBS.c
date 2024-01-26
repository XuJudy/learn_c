//问题 BS: 21级期末机试-伪素数列（20分）
/*
题目描述
如果一个正整数A是素数，或者A的每一位数字都是素数，我们称A为伪素数。
例如，23是素数，235的每一位数字都是素数，所以23和235都是伪素数，而135不是素数，其中的数字1不是素数，所以135不是伪素数。
老师给了小南一个任务，让他在一个称作伪素数列的集合An={2,3,5,7,11,13,17,19,22,23,25,…}中快速找到第k个伪素数，聪明的你能帮他完成任务吗？

输入
多组样例。每行输入一个样例包括一个正整数k（1≤k≤5000）。
输出
对每一个输入的k，输出一个正整数x，表示数列An中的第k项的值，其值范围不会超过int型。每个输出占一行。

样例输入 Copy
1
5
10
样例输出 Copy
2
11
23
*/

#include<stdio.h>

int isPrime(int n){

    if(n<2)
        return 0;

    for(int i=2; i*i<=n; i++){

        if(n%i==0)
            return 0;
    }

    return 1;
}

int fakePrime(int n){

    while(n>0){

        int tmp = n%10;

        //不是素數
        if(tmp!=2 && tmp!=3 && tmp!=5 && tmp!=7)    return 0;    
        
        n = n/10;
    }
    return 1;
}

int main(){

    //建表
    int fake[5000] = {2,3,5,7,11,13,17};
    int len = 7;
    int num = 18;

    while(len<5000){

        if(isPrime(num) || fakePrime(num)){
                
            fake[len++] = num;
        }

        num++;
    }

    //查表
    int k;
    while(scanf("%d", &k)!=EOF){

        printf("%d\n", fake[k-1]);
    }

    return 0;
}