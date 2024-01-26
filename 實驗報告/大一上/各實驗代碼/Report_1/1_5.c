// 输入一个三位数，输出各位数字之和

#include<stdio.h>

int main(){

    while(1){

        int sum = 0;
        int num;

        scanf("%d", &num);

        while(num>0){

            sum = sum + num%10;
            num = num/10;
        }

        printf("%d\n", sum);
    }

    return 0;
}