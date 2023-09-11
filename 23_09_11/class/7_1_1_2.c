//函數 求和
#include<stdio.h>

/*
void(返回類型) (函數名) (參數表){   [函數頭]

    [函數體]
}
*/
void sum(int start, int end){

    int sum = 0;

    for(int i=start; i<=end; i++){

        sum = sum + i;
    }

    printf("%d\n", sum);
}

int main(){

    sum(1,10);  //函數名(參數值);
    sum(20,30);
    sum(35,45);

    //沒有參數也要圓括號!!! 

    return 0;
}