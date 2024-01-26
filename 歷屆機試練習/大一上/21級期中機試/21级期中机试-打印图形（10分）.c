// 21级期中机试-打印图形（10分）
/*
    题目描述
    杨辉三角，其特点是两个腰上的数字都为1，其它位置上的数字是其上一行中与之相邻的左边两个整数之和。
    打印一个n*n的方阵，方阵的上三角是用2开始的素数从左至右从上至下进行填充，下三角是一个杨辉三角。

    输入
    多组样例。每行输入一个样例包括一个整数n（0<n≤30）。
    输出
    对于每一个输入的n，请输出相应行数的方阵图形，每一行的整数之间用一个空格隔开。每一个方阵后面加一个空行。

    样例输入
    2
    5
    样例输出
    1 2
    1 1

    1 2 3 5 7 
    1 1 11 13 17
    1 2 1 19 23
    1 3 3 1 29  
    1 4 6 4 1 
*/

#include<stdio.h>

// 建表: 楊輝三角
int mat[30][30] = {0};
void trangle(int n){

    mat[1][1] = 1;

    for(int i=2; i<=n; i++){

        mat[i][1] = 1;

        for(int j=1; j<=i; j++){

            mat[i][j] = mat[i-1][j] + mat[i-1][j-1];
        }
    }
}

// 建表: 素數
void Prime(int list[]){

    int testNumber = 5;
    int sumNumber = 2;
    list[0] = 2;
    list[1] = 3;

    while(sumNumber<500){

        int flag = 1;

        for(int j=2; j*j<=testNumber; j++){

            if(testNumber%j==0){

                flag = 0;
                break;
            }
        }

        if(flag){

            list[sumNumber] = testNumber;
            sumNumber++;
        }
        
        testNumber = testNumber + 2;
    }
}


int main(){

    int primeList[500] = {0};

    // 主程序
    int n;

    while(scanf("%d", &n)!=EOF){

        trangle(n);
        Prime(primeList);
        
        int output = 0;

        for(int i=1; i<=n; i++){

            for(int j=1; j<=i; j++){

                printf("%d ", mat[i][j]);
            }

            for(int j=n-i; j>0; j--){

                printf("%d ", primeList[output]);
                output++;
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}