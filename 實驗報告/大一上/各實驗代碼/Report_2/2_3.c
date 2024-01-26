// 利用無窮級數法估計e的值

#include <stdio.h>

int main(){

    int n;
    double e = 1.0, factorial = 1.0;

    printf("輸入整數n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){

        factorial = factorial * i;
        e = e + 1.0/factorial;
    }

    printf("e的近似值: %f\n", e);

    return 0;
}