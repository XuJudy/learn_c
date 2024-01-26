//问题 AC: 22-循环-1-计算以2为底的对数
#include<stdio.h>

int main(){

    int n;
    int count = 0;

    scanf("%d", &n);

    while(n/2>0){

        count++;
        n = n / 2;
    }

    printf("%d", count);

    return 0;
}