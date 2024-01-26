//1567: 找出矩阵中最大的元素
/*
题目描述
有一个3行4列的矩阵，编程求出其中最大的那个元素的值，以及它所在的行号与列号。

输入
输入格式： 输入12个整数，用空格分隔。
输入格式如：55 8 74 66 32 12 1 36 94 45 65 88
输出
前三行输出3行4列矩阵：每个数据间用一个空格隔开；
第四行输出最大值；
第五行输出最大值的行数；
第六行输出最大值的列数。
输出格式如：
55 8 74 66
32 12 1 36
94 45 65 88
max:94
row:3
colum:1

样例输入 Copy
55 8 74 66 32 12 1 36 94 45 65 88
样例输出 Copy
55 8 74 66
32 12 1 36
94 45 65 88
max:94
row:3
colum:1

提示
注意输出用英文符号
*/

#include<stdio.h>

int main(){

    int number[4][5] = {0};
    int max = 0;
    int row = 0;
    int colum = 0;

    for(int i=1; i<=3; i++){

        for(int j=1; j<=4; j++){

            scanf("%d", &number[i][j]);

            if(number[i][j]>max){

                max = number[i][j];
                row = i;
                colum = j;
            }
        }
    }

    for(int i=1; i<=3; i++){

        for(int j=1; j<=4; j++){

            printf("%d ", number[i][j]);
        }

        printf("\n");
    }

    printf("max:%d\nrow:%d\ncolum:%d\n", max, row, colum);

    return 0;
}