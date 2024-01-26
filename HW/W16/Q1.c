// 题一、素数
/*
    给定整数n，判断其是否为素数。
    （1）如果n不是素数，返回-1
    （2）如果n是素数，返回它是第几个素数
*/

#include<stdio.h>

int  prime(int n){

    int sum = 1;
    int flag = 1;

    for(int i=2; i<n; i++){

        if(n%i==0){

            sum = -1;
            break;
        }
    }

    if(sum!=-1){    // 若是素數

        for(int i=2; i<n; i++){

            for(int j=2; j<i; j++){

                if(i%j==0){
                 
                    flag = 0;
                    break;
                }                
            }

            sum = sum + flag;
        }
    }

    return sum;
}