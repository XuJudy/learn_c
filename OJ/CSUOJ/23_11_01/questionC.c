//问题 C: 哈利波特去学校
/*
    题目描述
    Harry Potter想立刻赶到学校去，假设他和学校处于一条直线上，他一开始处于0点，学校位于X点。
    在一个单位时间内他可以往前走1格，或者使用魔法把自己变到目前坐标2倍的地方。请问他到学校最少需要多少时间？

    输入
    第一行是一个整数K，表示样例的个数。 以后每行是一个整数，表示X(0≤X≤10^18)。
    输出
    每行输出一个整数，表示Harry Potter赶到学校需要的时间。

    样例输入
    3
    1
    10
    100
    样例输出 Copy
    1
    5
    9
*/

#include<stdio.h>

int main(){

    int k;
    long long x;

    scanf("%d", &k);

    for(int i=0; i<k; i++){

        scanf("%lld", &x);

        int s = 0;

        while(x>0){

            if(x%2==0){

                x = x/2;
                s++;
            }
            else{

                x--;
                s++;
            }
        }

        printf("%d\n", s);
    }

    return 0;
}