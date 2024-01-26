//问题 AE: 22-循环-2-非负整数的位数
#include<stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    int sum = 1;

    while(n/10>0){

        sum ++;
        n = n/10;
    }

    printf("%d", sum);

    return 0;
}