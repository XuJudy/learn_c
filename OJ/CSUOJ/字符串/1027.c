//1027: 22-字符串-1-统计气球
/*
    题目描述
    在ACM比赛的时候，队伍只要通过了一个题，志愿者们就会送过来相对应颜色的气球。
    现在刚刚进行完一场ACM比赛，小南拿到了所有的气球颜色，但是他想知道哪个题通过的人最多，你能告诉小南通过队伍最多的题所对应的气球颜色吗?

    输入
    多组测试用例。对于每一个测试样例，第一行输入一个数字n（1≤n≤1000），代表气球的数目。接下来的n行每一行是一个长度不超过15为字符串s，代表气球的颜色。
    输出
    对于每组样例，输出颜色数最多气球的颜色（测试样例保证解的唯一性）。每个结果占一行。
    
    样例输入 Copy
    5
    green
    red
    blue
    red
    red
    3
    pink
    orange
    pink
    样例输出 Copy
    red
    pink
*/

#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        char color[1000] = {0};
        int sum[1000];

        for(int i=0; i<n; i++){

            scanf("%c", &color[i]);

            printf("%c\n", color[i]);
        }
    }

    return 0;
}