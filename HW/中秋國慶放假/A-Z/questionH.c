//问题 H: 22-循环-2-二进制数问题
#include<stdio.h>

int count(int n){   //計算1的數量

    int sum_0 = 0, sum_1 = 0;

    while(n>0){ //進行二進制轉換

        if(n%2==0)  sum_0++;
        else    sum_1++;
    
        n = n/2;
    }

    if(sum_1>sum_0) return 1;   //A類
    else return 0;
}

int main(){

    int n, sum_A;

    while(scanf("%d", &n)!=EOF){

        sum_A = 0;

        //算A類 推B類
        for(int i=1; i<=n; i++){

            sum_A = sum_A + count(i);   //A類加一
        }

        printf("%d %d\n", sum_A, n-sum_A);
    }

    return 0;
}