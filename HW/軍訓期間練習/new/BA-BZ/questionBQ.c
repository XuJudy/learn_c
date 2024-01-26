//问题 BQ: 21级期末机试-描绘闪电（20分）
/*
输入
多组样例。每行一个样例包含一个正整数 n，表示闪电的大小（0<n≤100）。
输出
对于每一个输入的n，输出对应一个大小的闪电，闪电由*组成，两个*之间没有空格。每个输出占一行或者多行，并且每一个闪电后有一行空行。具体输出格式请参考样例。

样例输入
1
2
3
样例输出
 * 
**
* 

  *  
 *  
***
 *  
*  

   *   
  *   
 *   
****
  *   
 *   
*   
*/

#include<stdio.h>

int main(){

  int n;

  while(scanf("%d", &n)!=EOF){

    //上: n~1
    for(int i=0; i<n; i++){

      for(int j=n; j>i; j--){

        printf(" ");
      }

      printf("*\n");
    }

    //中: n+1
    for(int i=0; i<=n; i++){

      printf("*");
    }

    printf("\n");


    //下: n-1~1
    for(int i=1; i<=n; i++){

      for(int j=n; j>i; j--){

        printf(" ");
      }

      printf("*\n");
    }

    printf("\n");
  }

  return 0;
}