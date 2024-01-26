//问题 A: 22-循环-1-字符树
/*
    题目描述
    小南最近喜欢字符树，于是老师给了她一个任务，就是根据给定的正整数n（1≤n≤26），用大写字母输出层数为n的字符树。你能帮她实现吗？
    输入
    多组样例。每个样例输入一个整数，代表字符树的层数。
    输出
    对每一个输入的整数n，从字母A开始输出层数为n的字符树。
    样例输入 Copy
    1
    4
    样例输出 Copy
    A
    A
    BB
    CCC
    DDDD
*/

#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        for(int i=0; i<n; i++){

            for(int j=0; j<=i; j++){

                printf("%c", 'A'+i);
            }

            printf("\n");
        }
    }

    return 0;
}