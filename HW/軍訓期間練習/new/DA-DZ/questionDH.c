//问题 DH: 打印幸运树（20分）
/*
题目描述
新年快到了，小南想打印一些高度为2n+1的幸运树。幸运树的树冠高度为n+1，树干的高度为n，由“*”组成，你能帮帮他吗？

输入
多个样例。每个样例包含一个正整数n(1≤n≤50)。
输出
每个样例输出一个满足条件的幸运树，不同样例输出结果之间没有空行。

样例输入
1
3
样例输出
 *
***
 *
   *
  ***
 *****
*******
   *
   *
   *
*/

#include<stdio.h>

int main(){

   int n;

   while(scanf("%d", &n)!=EOF){

      for(int i=0; i<=n; i++){   //上部分

         //空格: n~0
         for(int j=n-i; j>0; j--)
            printf(" ");

         //*: 1~2*n+1
         for(int j=0; j<2*i+1; j++)
            printf("*");

         printf("\n");
      }

      for(int i=0; i<n; i++){ //樹幹

         for(int j=0; j<n; j++)
            printf(" ");

         printf("*\n");
      }
   }

   return 0;
}