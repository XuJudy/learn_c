#include<stdio.h>
#include<string.h>

int main(){

    int k;
    
    while(scanf("%d", &k)!=EOF){

        while(k--){

            int a, b;
            int sum1, sum2;

            scanf("%d%d", &a, &b);
            
            a--;
            
            sum1 = a - a/2 - a/3 + a/6;
            sum2 = b - b/2 - b/3 + b/6;

            printf("%d\n", sum2-sum1);
        }

    }
}