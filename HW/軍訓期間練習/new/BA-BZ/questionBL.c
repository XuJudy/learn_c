//问题 BL: 21级期中机试-研究病毒（20分）
/*
题目描述
新冠的爆发，严重影响了我们的生活，小南也想为抗疫做点事情，他最近在新闻上看到新冠病毒属于RNA病毒，
于是查阅资料了解DNA（包含A，C，G，T）转录成RNA（A，C，G，U）的方法，
他发现转录过程中，只是将T改为U。但是他编程能力比较差，想请聪明的你帮帮忙，帮他编写一个程序，将一批DNA转录成RNA。

输入
多组样例。每行输入一个样例包括字符串S，表示需要转录的DNA，字符串S的长度len(S)满足：1≤len(S)≤1000，且只包含A，C，G，T
输出
对于每一个输入的S，输出转录成RNA的结果。每个输出占一行。

样例输入
A
ATCGAATCG
T
样例输出
A
AUCGAAUCG
U
*/

#include<stdio.h>
#include<string.h>

int main(){

    char DNA[1000] = {0};

    while(scanf("%s", DNA)!=EOF){

        int len = strlen(DNA);

        for(int i=0; i<len; i++){

            if(DNA[i]=='T') DNA[i] = 'U';

            printf("%c", DNA[i]);
        }

        printf("\n");
    }

    return 0;
}