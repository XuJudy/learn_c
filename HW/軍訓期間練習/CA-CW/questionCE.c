//22-数据类型-1-测身高
/*
    题目描述
    中南大学是一所综合型大学，其中包含了一部分外国留学生，然而不同地区国家使用的是不一样的，Jim的祖国用的长度计量单位为英寸（一英寸相当于2.54厘米），我们想知道用我国常用单位厘米来表示Jim的身高为多少。
    
    输入
    多样例输入，每个一行，Jim的身高，以英寸为单位
    输出
    多样例输出，每个输出一行，输出Jim以厘米为单位的身高（结果保留一位小数）
*/

#include<stdio.h>

int main(){

    int x;
    double y;

    while(scanf("%d", &x)!=EOF){

        y = x * 2.54;

        printf("%.1f\n", y);
    }

    return 0;
}