//1016: 22-循环-2-高斯求和(未完成)
#include<stdio.h>

int main(){

    int t, n;
    long sum;

    while(scanf("%d", &t)!=EOF){
        
        for(int i=0; i<t; i++){

            scanf("%d", &n);

            int x = 1;

            for(int i=0; i<n; i++){

                x = x*10;
            }

            sum = (1+x)*x/2;
        
            printf("%ld\n", sum);
        }
    }

    return 0;
}