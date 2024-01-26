// P5736 【深基7.例2】质数筛

#include<stdio.h>

// 判斷素數
int isPrime(int num){

    int flag = 1;

    if(num==1)  flag = 0;

    for(int j=2; j*j<=num; j++){

        if(num%j==0 && num!=2){

            flag = 0;
            break;
        }
    }
    
    return flag;
}

int main(){

    int n;
    int num[110000] = {0};
    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%d", &num[i]);

        if(isPrime(num[i]))
            printf("%d ", num[i]);
    }

    return 0;
}