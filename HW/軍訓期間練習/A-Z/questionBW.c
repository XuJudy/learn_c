//22-输入输出-1-考试成绩
/*
    题目描述
    某地区中考实行等级选拔制，为此需要将相应科目的卷面计分成绩转换为相应的等级。假设门课程卷面总分100分，根据考试情况，各等级划线情况如下：91~100为A; 81~90为B; 71~80为C; 60~70为D; 0~59为F。
    
    输入
    多组样例，每个测试样例一行，一个正整数 n（0≤n≤100）。
    输出
    输出对应的等级，每个结果占一行。
*/

#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        if(n<=100 && n>90)  printf("A");
        else if(n<=90 && n>80)  printf("B");
        else if(n<=80 && n>70)  printf("C");
        else if(n<=70 && n>60)  printf("D");
        else    printf("F");

        printf("\n");
    }

    return 0;
}