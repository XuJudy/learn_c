// 21级期中机试-东南西北（20分）
/*
    题目描述
    出门的时候面向北方，中间左转或者右转了若干次。为了确定自己的位置，她需要知道自己现在面向哪个方向。
    （说明：如果面向北方，按照顺时针右转的方向依次为东方、南方和西方）

    输入
    多组样例。每组样例包括两行输入
    第一行包含一个正整数n（0<n≤1000），表示转方向的次数
    第二行包含一个长度为n的字符串，只由L和R组成，L表示向左转，R表示向右转。
    输出
    对于每一组样例，输出一个字母，代表小南最后面向的方向，N表示北，S表示南，E表示东，W表示西。每个输出占一行。

    样例输入
    1
    L
    1
    R
    3
    LRR
    样例输出
    W
    E
    E
*/

#include<stdio.h>

int main(){

    int len;
    char way[2000] = {0};

    while(scanf("%d", &len)!=EOF){

        int left = 0;
        int right = 0;

        scanf("%s", way);

        for(int i=0; i<len; i++){

            if(way[i]=='L')
                left++;
            else if(way[i]=='R')
                right++;
        }

        right = 3*right;
        left = left + right;
        left = left%4;

        if(left==0)
            printf("N\n");
        else if(left==1)
            printf("W\n");
        else if(left==2)
            printf("S\n");
        else if(left==3)
            printf("E\n");
    }

    return 0;
}