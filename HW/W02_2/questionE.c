//问题 E: Muniar的胡思乱写【1】—— 圆柱
#include <stdio.h>

int main(){

    double r, h;   //直徑、高
    double A, V;   //表面積、體積
    double pi = 3.14;  //圓周率

    while(scanf("%lf %lf", &r, &h) != EOF){

        r = r/2;    //半徑
        A = 2*r*r*pi + h*2*r*pi;
        V = r*r*pi*h;

        printf("%.2f %.2f\n", A, V);
    }
    
    return 0;
}