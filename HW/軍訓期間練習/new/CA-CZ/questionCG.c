//问题 CG: 函数之和2（10分）
/*
    题目描述
    digit(n,k)返回n十进制表示的第k位数字（从右边算起），如果k大于n所含有的数字的个数，则返回0。
    比如digit(829,1)返回9，digit(829,2)返回2，digit(829,3)则返回8,digit(829,4)返回0。
    给出l,r,k，求digit(l,k)+digit(l+1,k)+...+digit(r,k)。

    输入
    第一行输入一个整数T(1\le T\le 10)表示测试用例的组数。
    接下来T行每行输入3个整数l,r,k(1\le l\le r\le 10^5,1\le k\le 10)表示一组测试用例。
    输出
    输出T行，第i行一个整数表示第i组测试用例的答案。
    
    样例输入
    3
    1 5 1
    2 14 2
    1 100000 3
    样例输出
    15
    5
    450000
*/

#include<stdio.h>

//digit函數
int digit(int x, int y){

    int ans;

    for(int i=0; i<y; i++){

        ans = x%10;
        x = x/10;
    }

    return ans;
}

int main(){

    int T;

    while(scanf("%d", &T)!=EOF){

        for(int i=0; i<T; i++){

            int l, r, k;
            int sum = 0;

            scanf("%d%d%d", &l, &r, &k);

            for(int i=l; i<=r; i++){

                sum = sum + digit(i,k);
            }

            printf("%d\n", sum);
        }
    }

    return 0;
}