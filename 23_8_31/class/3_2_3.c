//找零計算器
#include<stdio.h>

int main(){

    int n, price;   //n:價錢 price:所付的金額

    for(int i=0; i<3; i++){

        scanf("%d %d", &n, &price);

        if(price < n){

            printf("餘額不足\n");
        }
        else{

            printf("找零%d元。\n", price-n);
        }
    }

    return 0;
}