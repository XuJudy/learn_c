// P5735 【深基7.例1】距离函数

#include<stdio.h>
#include<math.h>

double dis(double x1, double y1, double x2, double y2){

    double d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
    d = pow(d, 0.5);

    return d;
}

int main(){

    double x1, x2, x3;
    double y1, y2, y3;
    double sum = 0;

    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);

    sum = sum + dis(x1, y1, x2, y2);
    sum = sum + dis(x1, y1, x3, y3);
    sum = sum + dis(x3, y3, x2, y2);

    printf("%.2f\n", sum);

    return 0;
}