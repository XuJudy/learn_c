//P5716 【深基3.例9】月份天数
#include<stdio.h>

int main(){

    int year, month;

    scanf("%d%d", &year, &month);

    if(year%4==0 && year%100!=0 || year%200==0){    //閏年
        
        if(month == 2)  printf("29");

        else if(month<8){

            if(month % 2 == 1)  printf("31");
            else    printf("30");
        }

        else{

            if(month % 2 == 1)  printf("30");
            else    printf("31");
        }
    }

    else{   //平年
    
        if(month == 2)  printf("28");

        else if(month<8){

            if(month % 2 == 1)  printf("31");
            else    printf("30");
        }

        else{

            if(month % 2 == 1)  printf("30");
            else    printf("31");
        }
    }

    return 0;
}