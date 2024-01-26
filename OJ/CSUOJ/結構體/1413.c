//1413: 22-结构体-2-日期排序
/*
题目描述
老师给了小南一些日期，日期格式为：MM/DD/YYYY。要求小南编程将其按日期大小排列，你能帮他完成吗？

输入
单样例。输入的第一行是一个整数n（0<n<100)，表示要排序日期的个数。
接下来的n行，每行输入一个日期，格式为MM/DD/YYYY。
输出
从小到大输出排序后的日期。

样例输入 Copy
3
02/21/2003
11/12/1999
10/22/2003
样例输出 Copy
11/12/1999
02/21/2003
10/22/2003

提示
也可以用链表实现。
*/

#include<stdio.h>

int main(){

    int n, tmp;
    int YY[100] = {0};
    int MM[100] = {0};
    int DD[100] = {0};

    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%d/%d/%d", &MM[i], &DD[i], &YY[i]);
    }

    for(int i=0; i<n; i++){

        for(int j=0; j<n-i-1; j++){

            if(YY[j]>YY[j+1]){

                tmp = YY[j];
                YY[j] = YY[j+1];
                YY[j+1] = tmp;

                tmp = MM[j];
                MM[j] = MM[j+1];
                MM[j+1] = tmp;

                tmp = DD[j];
                DD[j] = DD[j+1];
                DD[j+1] = tmp;
            }

            else if(YY[j]==YY[j+1] && MM[j]>MM[j+1]){

                tmp = MM[j];
                MM[j] = MM[j+1];
                MM[j+1] = tmp;

                tmp = DD[j];
                DD[j] = DD[j+1];
                DD[j+1] = tmp;
            }

            else if(YY[j]==YY[j+1] && MM[j]==MM[j+1] && DD[j]>DD[j+1]){

                tmp = DD[j];
                DD[j] = DD[j+1];
                DD[j+1] = tmp;
            } 
        }
    }


    for(int i=0; i<n; i++){

        printf("%02d/%02d/%04d\n", MM[i], DD[i], YY[i]);
    }

    return 0;
}