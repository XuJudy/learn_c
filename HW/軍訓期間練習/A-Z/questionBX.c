//22-循环-2-混合和
/*
    题目描述
    给定两个整数m、n，分别求n 与 m之间（包括 n 和 m）所有奇数的平方和与所有偶数的立方和。
    
    输入
    多组样例，每个测试样例一行，两个正整数 m、n。（m < n）
    输出
    平方和 立方和（用空格分隔）
*/

#include<stdio.h>

int main(){

    int n, m;

    while(scanf("%d%d", &n, &m)!=EOF){

        int sum_1 = 0;  //奇數平方和
        int sum_2 = 0;  //偶數立方和

        if(n%2==1){ //奇數開頭

            for(int i=n; i<=m; i=i+2)   sum_1 = sum_1 + i*i;
            for(int i=n+1; i<=m; i=i+2) sum_2 = sum_2 + i*i*i;
        }

        else{   //偶數開頭

            for(int i=n; i<=m; i=i+2)   sum_2 = sum_2 + i*i*i;
            for(int i=n+1; i<=m; i=i+2) sum_1 = sum_1 + i*i;
        }

        printf("%d %d\n", sum_1, sum_2);    
    }

    return 0;
}