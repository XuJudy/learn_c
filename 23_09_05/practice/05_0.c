//05-0. 求序列前N项和
#include<stdio.h>

int main(){

    int n;
    double f, tmp;
    double a = 1.0;
    double b = 1.0;

    scanf("%d", &n);

    for(int i=1; i<=n; i++){

        tmp = b;    //储存上一輪的b
        b = a+b;    //新的b#於上一輪的a+b
        a = tmp;    //新的a是上一輪的b
        f = f + b/a;

        printf("a=%.2lf b=%.2lf f=%.2lf\n", a, b, f);
    }

    return 0;
}