//问题 CM: 22-选择结构-2-三角形
/*
题目描述
给定三个整数，分别表示三条线段，判断这三条线段能否构成三角形。如果能，输出“yes”,否则输出“no”。
输入
多组样例，每个测试样例一行，每行为三个线段长度a、b、c。（0<a, b, c<105）
输出
如果三个长度能构成三角形，则输出yes，否则输出no。 
样例输入 Copy
5 5 5
1 2 3
样例输出 Copy
yes
no
*/

#include<stdio.h>

int main(){

    int a, b, c;

    while(scanf("%d%d%d", &a, &b, &c)!=EOF){

        if(a+b>c && a+c>b && b+c>a)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}