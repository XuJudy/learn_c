// 牛頓方法計算平方根

#include<stdio.h>
#include<math.h>

int main(){

    double x, y, tmp_y;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    y = x/2;
    tmp_y = y;

    y = (x/y + y)/2;

    while(fabs(y-tmp_y)>=0.00001){

        tmp_y = y;
        y = (x/y + y)/2;
    }

    printf("Square root: %.5f\n", y);

    return 0;
}