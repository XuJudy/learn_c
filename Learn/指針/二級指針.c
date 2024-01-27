// 二級指針: 用來存放一級指針變量的地址

#include<stdio.h>

int main(){

    int a = 10;
    int* pa = &a;       // pa: 一級指針變量
    int** ppa = &pa;    // ppa: 二級指針變量

    *pa = 20;           // *pa = a
    printf("%d ", a);

    **ppa = 30;         // *ppa = pa; **ppa = *pa = a
    printf("%d\n", a);

    return 0;
}

/*
    int a = 10;
    int * pa = &a;      // *: pa是指針變量  int: 地址指向的對象是int類型
    int* * ppa = &pa;   // *: ppa指針變量   int*: 地址指向的對象是int*類型
*/