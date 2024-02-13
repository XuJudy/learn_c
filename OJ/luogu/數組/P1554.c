// P1554 梦中的统计

#include<stdio.h>

void cnt(int arr[], int num){

    while(num>0){

        arr[num%10]++;
        num = num/10;
    }
}

int main(){

    int M, N;
    int sum[10] = {0};

    scanf("%d%d", &M, &N);

    for(int i=M; i<=N; i++){

        cnt(sum, i);
    }

    for(int i=0; i<10; i++){

        printf("%d ", sum[i]);
    }

    return 0;
}