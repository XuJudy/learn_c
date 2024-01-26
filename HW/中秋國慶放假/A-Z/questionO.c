//问题 O: 22-循环-1-奇偶校验
/*
    1. 0: 0000000 0 Yes
    2. 129: 1000000 1 Yes
    3. 1: 0000000 1 No
*/
#include<stdio.h>

//函數:奇偶校驗
int test(int x){

    int sum_1 = 0;  //1的數量
    int test;   //奇偶校驗位

    test = x % 2;   //第七位(最後一位)為奇偶校驗位
    x = x / 2;

    while(x>0){

        if(x%2==1)  sum_1++;    //統計1的數量
        x = x / 2;
    }

    //判斷
    if((sum_1%2==0 && test==0) || (sum_1%2==1 && test==1))  return 1;
    else return 0;
}

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        //return 1 = True
        if(test(n))   printf("Yes\n");
        else    printf("No\n");
    }

    return 0;
}