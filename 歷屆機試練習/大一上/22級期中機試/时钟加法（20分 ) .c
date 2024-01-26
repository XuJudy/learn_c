// 时钟加法（20分）
/*
    题目描述
    时钟加法是指给定一个当前时间，其形式为h:m:s，计算加上n秒后新的时间。你能帮他编程实现吗？

    输入
    多个样例。每个样例输入1行形式为h:m:s+n的数据，其中h(0≤h≤23)代表小时，m(0≤m≤59)代表分钟，s(0≤s≤59)代表秒钟，n(1≤n≤105)代表经过的秒数。
    输出
    每个样例输出新的时间，形式为h:m:s。每个样例输出结果占一行。

    样例输入
    0:0:0+360
    23:29:59+1801
    7:8:15+1
    样例输出
    00:06:00
    00:00:00
    07:08:16
*/

#include<stdio.h>

int main(){

    int h, m, s, n;

    while(scanf("%d:%d:%d+%d", &h, &m, &s, &n)!=EOF){

        int start_s = h*3600 + m*60 + s;
        int after_s = start_s + n;

        while(after_s>=86400){

            after_s = after_s - 86400;
        }

        s = after_s%60;
        after_s = after_s/60;
        m = after_s%60;
        h = after_s/60;

        printf("%02d:%02d:%02d\n", h, m, s);
    }

    return 0;
}