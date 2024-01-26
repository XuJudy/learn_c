//问题 S: 22-循环-2-敲七
#include<stdio.h>

int count_7(int x){ //計算有幾個7的函數

    int sum = 0;

    while(x>0){

        if(x%10==7) sum++;  //有某位數是7

        x = x/10;
    }

    return sum;
}

int main(){

    int n;
    int sum = 0;

    scanf("%d", &n);

    for(int i=1; i<=n; i++){

        if(i%7==0 || count_7(i)!=0) //可以被7整除 or 數字中有7
            sum++;
    }

    printf("%d", sum);

    return 0;
}