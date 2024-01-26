//问题 B: 22-循环-1-字符矩阵
/*
    题目描述
    小南又来麻烦你了，喜新厌旧的她最近迷上了字符矩阵，
    鉴于上次你完美地帮她实现了字符树，于是她期待你继续帮她完成字符矩阵的图形打印，加油哦！
    
    输入
    多组样例。每个样例输入一个整数n（n(1≤n≤26），代表字符矩阵的宽度和高度。
    输出
    每个样例输出一个从大写字母A开始、宽度和高度为n的字符矩阵。
    
    样例输入 Copy
    1
    3
    样例输出 Copy
    A
    AAA
    BBB
    CCC
*/

#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        for(int i=0; i<n; i++){

            for(int j=0; j<n; j++){

                printf("%c", 'A'+i);
            }

            printf("\n");
        }
    }

    return 0;
}