//问题 A: 22-输入输出-1-打印
#include<stdio.h>

int main(){

    double x;
    int y;

    while(scanf("%lf",&x) != EOF){
        
        y = x;

        if(x-y>=0.5)    printf("%-8.3f %6d\n", x, y+1);
        else    printf("%-8.3f %6d\n", x, y);
    }

    return 0;
}