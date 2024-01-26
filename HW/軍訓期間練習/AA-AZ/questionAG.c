//问题 AG: 20级期中机试-小帅数CSU（20分）
/*
题目描述
给小帅一个字符串，由大写字母构成，每个字母限用一次，请问最多能组成多少个CSU。

输入
多组样例，每行一个字符串
输出
输出一个数字，能组成最多的CSU的个数

样例输入 Copy
CSU
CCC
CCSSUU
样例输出 Copy
1
0
2
*/

#include<stdio.h>
#include<string.h>

int getmin(int x, int y, int z){

    int min = x;

    if(y<min) min = y;
    if(z<min) min = z;

    return min;
}

int main(){

    char ch[256] = {0};

    while(gets(ch)!=NULL){
        
        int sum_C = 0;
        int sum_S = 0;
        int sum_U = 0;
        int len = strlen(ch);

        for(int i=0; i<len; i++){

            if(ch[i]=='C')      sum_C++;
            else if(ch[i]=='S') sum_S++;
            else if(ch[i]=='U') sum_U++;
        }

        printf("%d\n", getmin(sum_C, sum_S, sum_U));
    }

    return 0;
}