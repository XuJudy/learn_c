//P5714 【深基3.例7】肥胖问题
#include<stdio.h>
int main(){

    double m, h, BMI;    //體重(kg) 身高(m)

    scanf("%lf %lf", &m, &h);

    BMI = m/h/h;

    if(BMI<18.5)    printf("Underweight");
    else if(BMI>=18.5 && BMI<24)    printf("Normal");
    else printf("%.6g\nOverweight", BMI);

    return 0;
}