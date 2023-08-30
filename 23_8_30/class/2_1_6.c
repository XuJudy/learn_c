//浮點數

#include<stdio.h>

int main(){

    printf("請分別輸入身高的英尺和英寸: ");

    double foot, inch;  //double浮點數

    scanf("%lf %lf", &foot, &inch);   //%lf讀取浮點數   //double-%lf float-%f

    printf("身高是%f米。\n",( (foot+inch/12.0) * 0.3048) );

    return 0;

}