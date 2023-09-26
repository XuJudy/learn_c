//P5712 【深基3.例4】Apples
#include<stdio.h>

int main(){

    int n;
    int s = 0;

    scanf("%d", &n);

    if(n <= 1)  printf("Today, I ate %d apple.", n);
    else  printf("Today, I ate %d apples.", n);

    return 0;
}