//问题 BN: 21级补考-字母图形（20分）
/*
    题目描述
    小南是一个喜欢对称美的艺术家，经常会画一些对称图形，他最近学会用电脑编程打印一些用大写字母组成的对称图形，但总是打印不成功，你能帮他吗？
    
    输入
    多组样例。每行一个样例，是一个整数n(1≤n≤26)，与对称图形的大小有关。
    输出
    每行输出一个对应的由小写字母组成的对称图形，图形中最长的行左边没有空格，每行的行末没有多余的空格。 
    
    样例输入
    1
    3
    4
    样例输出
    a
      a
     bab
    cbabc
       a
      bab
     cbabc
    dcbabcd
*/

#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        for(int i=1; i<=n; i++){        //有i層

            for(int j=n-i; j>0; j--){   //空格

                printf(" ");
            }

            for(int k=i; k>1; k--){     //左三角形(降序)

                printf("%c", k+96);     //'a'=97
            }

            for(int k=1; k<=i; k++){    //右三角形(升序)

                printf("%c", k+96);
            }

            printf("\n");
        }
    }

    return 0;
}