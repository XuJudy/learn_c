// 教材第2章编程题第2题：编写计算球体体积的程序。

#include<stdio.h>

int main(){

    double v = 0;
    double r = 0;
    double pi = 3.14;

    while(1){

        scanf("%lf", &r);

        v = 4*pi*r*r*r/3;

        printf("%f\n", v); 
    }

    return 0;
}