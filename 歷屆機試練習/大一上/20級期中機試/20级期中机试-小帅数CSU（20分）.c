// 20级期中机试-小帅数CSU（20分）
/*
    题目描述
    给小帅一个字符串，由大写字母构成，每个字母限用一次，请问最多能组成多少个CSU。
    输入
    多组样例，每行一个字符串
    输出
    输出一个数字，能组成最多的CSU的个数

    样例输入
    CSU
    CCC
    CCSSUU
    样例输出
    1
    0
    2
*/

#include<stdio.h>
#include<string.h>

int main(){

    char str[1000] = {0};

    while(gets(str)!=NULL){

        int sumC = 0;
        int sumS = 0;
        int sumU = 0;
        int len = strlen(str);

        for(int i=0; i<len; i++){

            if(str[i]=='C') sumC++;
            else if(str[i]=='S')    sumS++;
            else if(str[i]=='U')    sumU++;
        }

        int min = sumC;
        if(sumS<min)    min = sumS;
        if(sumU<min)    min = sumU;

        printf("%d\n", min);
    }

    return 0;
}