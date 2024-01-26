//P5711 【深基3.例3】闰年判断
#include<stdio.h>

int main(){

    int year;

    while (scanf("%d", &year)){

        if(year%4==0 && year%100!=0 || year%200==0){   //閏年

            printf("1\n");
        }

        else{

            printf("0\n");
        }
    }
    
    return 0;
}