//问题 AS: 20级期末机试2-素数串（10分）
/*
    题目描述
    中南CC君最近迷上了素数，素数是指除了1和本身外不能被其他数整除的正整数，2是最小的素数。
    他发现有一种叫素数串的整数很有意思。
    它要求从该整数左边开始，每取3位数字构成的整数是素数，剩余的不够3位的整数也是素数。
    如23311317就是素数串，因为233,113,17都是素数，但是233111就不是，因为111不是素数。
    给你一个n（1≤n≤101000），你能帮CC君判断一下是素数串整数吗？

    输入
    多组样例。每行一个样例包含一个整数n。
    输出
    对于每一个输入的n，输出一个结果，如果是素数串整数，输出"YES"，否则输出"NO"。每个输出占一行。
    
    样例输入
    2
    3892
    100733
    样例输出
    YES
    YES
    NO
*/
#include<stdio.h>
#include<string.h>

int isPrime(int n){

    if(n<2) return 0;

    for(int i=2; i*i<=n; i++){

        if(n%i==0)
            return 0;
    }
    return 1;
}

int main(){

    char ch[1005];

    while(scanf("%s", &ch)!=EOF){

        int len = strlen(ch);
        int flag = 1;
        int num;

        for(int i=0; i<len/3; i++){

            num = (ch[3*i]-'0')*100 + (ch[3*i+1]-'0')*10 + (ch[3*i+2]-'0');

            if(isPrime(num)==0){

                flag = 0;
                break;
            }
        }

        if(flag==1 && len%3>0){

            if(len%3==1){

                num = ch[len-1]-'0';
            }
            else if(len%3==2){

                num = ch[len-1]-'0' + (ch[len-2]-'0')*10;
            }

            if(isPrime(num)==0){

                flag = 0;
            }
        }

        if(flag)    printf("YES\n");
        else    printf("NO\n");
    }

    return 0;
}