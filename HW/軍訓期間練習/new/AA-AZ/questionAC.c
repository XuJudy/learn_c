//问题 AC: 成绩转换
/*
    题目描述
    输入一个百分制的成绩t，将其转换成对应的等级，具体转换规则如下：
    90~100为A;
    80~89为B;
    70~79为C;
    60~69为D;
    0~59为E;

    输入
    输入数据有多组，每组占一行，由一个整数组成。
    输出
    对于每组输入数据，输出一行。如果输入数据不在0~100范围内，请输出一行：“Score is error!”。
    
    样例输入 Copy
    56
    67
    100
    123
    样例输出 Copy
    E
    D
    A
    Score is error!
*/

#include<stdio.h>

int main(){

    int grade;

    while(scanf("%d", &grade)!=EOF){

        if(grade>=90 && grade<=100)
            printf("A\n");
        else if(grade>=80 && grade<90)
            printf("B\n");
        else if(grade>=70 && grade<80)
            printf("C\n"); 
        else if(grade>=60 && grade<70)
            printf("D\n"); 
        else if(grade>0 && grade<60)
            printf("E\n"); 
        else
            printf("Score is error!\n");  
    }

    return 0;
}