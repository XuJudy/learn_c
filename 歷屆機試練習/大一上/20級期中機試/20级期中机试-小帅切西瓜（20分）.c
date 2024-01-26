// 20级期中机试-小帅切西瓜（20分）
/*
    题目描述
    小帅和小明打算把一个重量为n的西瓜切成两块，他们想要知道，是否至少存在一种切法，使得得到的两块西瓜重量都是偶数，你能否帮他们回答这个问题？

    输入
    多组样例，第一行包含一个整数 n (1 <= n <= 10000000)，代表的西瓜的重量。
    输出
    如果期望的切法存在，输出YES；否则输出NO。
    
    样例输入 Copy
    8
    3
    样例输出 Copy
    YES
    NO
*/

#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int flag = 0;

        for(int i=1; i<=n/2; i++){

            if(i%2==0 && (n-i)%2==0){

                printf("YES\n");
                flag++;
                break;
            }
        }
        
        if(!flag)
            printf("NO\n");
    }

    return 0;
}