//问题 M: 小李还买苹果
/*
    题目描述
    小李又开始买苹果了，这一次她还是买了n个苹果。
    今天小李家里只有她和她的男朋友。
    她想和男朋友平分这些苹果，这样才能保证他们开心。
    请问她和男朋友是否会开心呢。
    
    输入
    输入一个数，表示苹果的数目
    输出
    如果开心输出Yes，否则输出No
    
    样例输入 Copy
    10
    样例输出 Copy
    Yes
*/

#include<stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    if(n%2)
        printf("No");
    else
        printf("Yes");

    return 0;
}