// P2415 集合求和

#include<stdio.h>

int main(){

    long a;
    long sum = 0;
    long long ans = 0;

    while(scanf("%lld", &a)!=EOF){

        ans = ans + a;
        sum++;
    }

    ans = ans*(sum-1);

    printf("%lld", ans);

    return 0;
}