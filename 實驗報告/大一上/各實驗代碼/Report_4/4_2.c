// 编写计算x^n的函数

#include <stdio.h>

int power(int x, int n){

    if (n == 0)
        return 1;

    else if (n % 2 == 0){

        int result = power(x, n / 2);
        return result * result;
    }

    else
        return x * power(x, n - 1);
}

int main(){

    int x, n;
    
    printf("输入x和n:");
    scanf("%d %d", &x, &n);
    printf("%d^%d=%d", x, n, power(x, n));
    
    return 0;
}