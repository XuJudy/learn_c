// 實現將輸入的整數按八進制輸出

#include<stdio.h>

int main(){

    while(1){

        int num;
        int i = 0;
        int eight[10000] = {0};

        scanf("%d", &num);

        while(num>0){   // 跟取每位數字一個概念

            eight[i] = num%8;
            num = num/8;
            i++;
        }

        for(; i>0; i--){

            printf("%d", eight[i-1]);
        }

        printf("\n");
    }

    return 0;
}