//问题 BN: 21级期中机试-打印图形（10分）
/*
题目描述
杨辉三角，其特点是两个腰上的数字都为1，其它位置上的数字是其上一行中与之相邻的左边两个整数之和。
老师给了小南一个任务，就是打印一个n´n的方阵。方阵的上三角是用2开始的素数从左至右从上至下进行填充，下三角是一个杨辉三角。
如下图所示的是一个6´6方阵：下三角（蓝色部分）是一个杨辉三角，其余部分（红色部分）按行序依次从小到大填充素数。 
给定一个整数n，你能帮他编写程序输出满足要求的图形吗？ 

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

01 02 03 05 07 
01 01 11 13 17
01 02 01 19 23
01 03 03 01 29  
01 04 06 04 01 
*/

#include<stdio.h>

//建質數表
void isPrime(int data[]){

    data[0] = 2;
    data[1] = 3;

    int TestNumber = 5;
    int SumPrime = 2;

    while(SumPrime<450){

        int flag = 1;

        for(int i=0; i<SumPrime; i++){

            if(TestNumber%data[i]==0){

                flag = 0;
                break;
            }
        }

        if(flag)
            data[SumPrime++] = TestNumber;

        TestNumber = TestNumber + 2;
    }
}

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int prime[450] = {0};
        int list[30][30];

        //初始化
        isPrime(prime);
        list[0][0] = 1;
        list[1][0] = 1;
        list[1][1] = 1;
        
        //楊輝三角
        for(int i=2; i<n; i++){

            for(int j=0; j<=i; j++){

                if(j==0 || j==i)
                    list[i][j] = 1;
                else
                    list[i][j] = list[i-1][j-1] + list[i-1][j];
            }
        }

        //質數三角
        int primeOutput = 0;
        for(int i=0; i<n; i++){

            for(int j=i+1; j<n; j++){

                list[i][j] = prime[primeOutput];
                primeOutput++;
            }
        }

        //輸出
        for(int i=0; i<n; i++){

            for(int j=0; j<n; j++){

                printf("%d ", list[i][j]);
            }

            printf("\n");
        }
        printf("\n");
    }

    return 0;
}