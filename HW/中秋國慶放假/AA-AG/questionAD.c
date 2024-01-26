//问题 AD: 22-循环-2-斐波纳契数列
#include<stdio.h>

int main(){

    int n, num;

    while(scanf("%d", &n)!=EOF){

        int A = 0;
        int B = 1;
        printf("0, 1");

        for(int i=3; i<=n; i++){
            
            num = A+B;
            printf(", %d", num);
            
            A = B;
            B = num;
        }

        printf("\n");
    }

    return 0;
}