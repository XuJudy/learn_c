//B2029 大象喝水
#include<stdio.h>

int main(){

    int h, r, n;
    double one;

    scanf("%d %d", &h, &r);

    one = r*r*3.14*h;
    n = 20000/one;

    if(20000/one==n){

        n = n;
    }
    else{

        n++;
    }

    printf("%d", n);

    return 0;
}