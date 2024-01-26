//1008: 22-数组-1-八进制数
    /*
    题目描述
    将十进制正整数n(1≤n≤1010)转换为八进制并输出。

    输入
    多样例，每个测试文件包括多个测试数据，每个测试数据占一行，为十进制正整数。
    输出
    对每个测试样例输出相应的八进制数，每个输出结果占一行。

    样例输入 Copy
    1
    2
    3
    7
    8
    9
    19
    10020345
    样例输出 Copy
    1
    2
    3
    7
    10
    11
    23
    46162771
*/

#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int len = 0;
        int num[100] = {0};

        while(n>0){

            num[len] = n%8;
            n = n/8;
            len++;
        }

        for(int i=len-1; i>=0; i--){

            printf("%d", num[i]);
        }

        printf("\n");
    }

    return 0;
}