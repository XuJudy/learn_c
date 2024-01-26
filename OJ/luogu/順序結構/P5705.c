//P5705 【深基2.例7】数字反转
#include<stdio.h>

int main(){

    double a;
    int b;
    int num = 0;

    scanf("%lf", &a);

    b = a * 10;

    while(b>0){
        
        printf("%d", b%10);
        b = b/10;
        num++;

        if(num==1)  printf(".");
    }

    return 0;
}