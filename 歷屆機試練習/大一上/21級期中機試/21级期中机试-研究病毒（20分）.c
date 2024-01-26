// 21级期中机试-研究病毒（20分）
/*
    题目描述
    新冠病毒属于RNA病毒，于是查阅资料了解DNA（包含A，C，G，T）转录成RNA（A，C，G，U）的方法，
    转录过程中，只是将T改为U。
    编写一个程序，将一批DNA转录成RNA。

    输入
    多组样例。每行输入一个样例包括字符串S，表示需要转录的DNA，
    字符串S的长度len(S)满足：1≤len(S)≤1000，且只包含A，C，G，T
    输出
    对于每一个输入的S，输出转录成RNA的结果。每个输出占一行。

    样例输入 Copy
    A
    ATCGAATCG
    T
    样例输出 Copy
    A
    AUCGAAUCG
    U
*/

#include<stdio.h>
#include<string.h>

int main(){

    char DNA[1000] = {0};
    
    while(scanf("%s", DNA)!=EOF){

        char RNA[1000] = {0};
        int len = strlen(DNA);

        for(int i=0; i<len; i++){

            if(DNA[i]=='T')
                RNA[i] = 'U';
            else
                RNA[i] = DNA[i];
        }

        for(int i=0; i<len; i++){

            printf("%c", RNA[i]);
        }

        printf("\n");
    }

    return 0;
}