//问题 AU: 矩阵转置（20分）
/*
    题目描述
    输入n*n的矩阵，输出它的转置矩阵（即输入矩阵的第i行第j列元素与转置矩阵的第j行第i列元素相等）。

    输入
    第一行为整数n，n不大于50。
    接着是一个n*n的矩阵（n行，每行有n个正整数，由空格分开，范围在[0,10000]）。

    输出
    转置矩阵（n行，每行n个数字，空格分隔）

    样例输入 Copy
    2
    1 2
    1 2
    样例输出 Copy
    1 1
    2 2
*/

#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int set[50][50] = {0};

        for(int i=0; i<n; i++){

            for(int j=0; j<n; j++){

                scanf("%d", &set[i][j]);
            }
        }

        for(int i=0; i<n; i++){

            for(int j=0; j<n; j++){

                printf("%d ", set[j][i]);
            }

            printf("\n");
        }
    }

    return 0;
}