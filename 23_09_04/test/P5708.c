//P5708 【深基2.习2】三角形面积
#include<stdio.h>
#include<math.h>    //使用sqrt

int main(){

    double a, b, c;
    double p, ans;

    scanf("%lf %lf %lf", &a, &b, &c);

    p = (a+b+c)/2;
    ans = sqrt(p*(p-a)*(p-b)*(p-c));  //sqrt開根號

    printf("%.1lf", ans);

    return 0;
}