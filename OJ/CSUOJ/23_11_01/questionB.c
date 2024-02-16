//问题 B: 22-数组-1-查找整数
/*
    题目描述
    已知一个包含n个整数的数列（1≤n≤1000），对于给定的整数a，查找其在数列中的第一次出现的位置。
    数列的位置编号从1开始，如果没有找到，则输出-1。

    输入
    多样例。每组样例的第一行包含一个整数n。
    第二行包含n个非负整数，为给定的数列，数列中的每个数都不大于10000。
    第三行包含一个整数a，为待查找的数。
    输出
    对于每组样例，输出一个整数：如果a在数列中出现了，输出它第一次出现的位置(位置从1开始编号)，否则输出-1。每个结果占一行。
    
    样例输入 Copy
    6
    1 9 4 8 3 9
    9
    3
    1 2 3
    5
    样例输出 Copy
    2
    -1
*/

#include<stdio.h>

int main(){

    int n, x;

    while(scanf("%d", &n)!=EOF){

        int flag = -1;
        int num[1000] = {0};

        for(int i=0; i<n; i++){

            scanf("%d", &num[i]);
        }

        scanf("%d", &x);

        for(int i=0; i<n; i++){

            if(num[i]==x){

                flag = i+1;
                break;
            }
        }

        printf("%d\n", flag);
    }

    return 0;
}