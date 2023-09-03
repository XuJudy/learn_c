//前n項求和(f(n)=1+1/2+1/3+...+1/n)
#include<stdio.h>

int main(){

    int n;
    double sum = 0.0;
    double sign = 1.0;

    scanf("%d", &n);

    //都加
    /*
    for(int i=1; i<=n; i++){

        sum = sum + 1.0/i;
    }
    */

   //一加一減
    /*
    for(int i=1; i<=n; i=i+2){

        sum = sum + 1.0/i;
    }

    for(int i=2; i<=n; i=i+2){

        sum = sum - 1.0/i;
    }
    */

   for(int i=1; i<=n; i++){

        sum = sum + sign/i;
        sign = -sign;
    }


    printf("f(%d) = %lf\n", n, sum);

    return 0;
}