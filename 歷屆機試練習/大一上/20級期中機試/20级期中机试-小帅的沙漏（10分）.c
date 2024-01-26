// 20级期中机试-小帅的沙漏（10分）
/*
    题目描述
    小帅用字符输出一个如同样例格式的沙漏的图形。要求如下：
    (1)用-做上下底
    (2)用\和/做斜边
    (3)用*表示沙子
        <1>上层沙子空一行，其他行填满；下层沙子只有中间一列。
        <2>上下底的行首无空格，所有行的行末无空格。

    输入
    第一行是样例数T(1≤T≤75)。 以后的每行一个样例，是一个整数n(6≤n≤80)，n是偶数，表示沙漏的行数。
    输出
    每行输出一个对应的图形，每个样例之后输出一个空行。 
*/
//    样例输入
//    2
//    6
//    8
//    样例输出
//    -----
//    \   /
//     \*/
//     /*\
//    / * \
//    -----
//
//    -------
//    \     /
//     \***/
//      \*/
//      /*\
//     / * \
//    /  *  \
//    -------

#include<stdio.h>

int main(){

    int T, n;

    while(scanf("%d", &T)!=EOF){

        for(int k=0; k<T; k++){

            scanf("%d", &n);

            // 上半部
            // 上底
            for(int i=1; i<n; i++){

                printf("-");
            }
            printf("\n");

            // 上漏斗 -> (n/2-1)層
            for(int i=1; i<=n/2-1; i++){

                if(i==1){   //上層沙子空一行

                    printf("\\");
                    for(int j=0; j<n-3; j++) printf(" ");
                    printf("/\n");
                    continue;
                }

                // 其他層
                for(int j=1; j<i; j++)  printf(" ");
                printf("\\");
                for(int j=2*(n/2-i)-1; j>0; j--) printf("*");
                printf("/\n");
            }

            // 下半部
            // 下漏斗 -> (n/2-1)層
            for(int i=n/2-1; i>0; i--){

                for(int j=1; j<i; j++)  printf(" ");
                printf("/");

                for(int j=n/2-i-1; j>0; j--)  printf(" ");
                printf("*");
                for(int j=n/2-i-1; j>0; j--)  printf(" ");

                printf("\\\n");
            }

            // 下底
            for(int i=1; i<n; i++){

                printf("-");
            }
            printf("\n\n");
        }
    }

    return 0;
}