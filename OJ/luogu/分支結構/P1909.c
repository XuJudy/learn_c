//P1909 [NOIP2016 普及组] 买铅笔
#include<stdio.h>

int main(){

    int n, x, money;    //總共要幾隻、一包幾隻、一包多少
    int min = 0;    //最低金額
    int sum[3]; //每個種類所需總額

    scanf("%d", &n);

    for(int i=0; i<3; i++){

        scanf("%d%d", &x, &money);

        if(n%x == 0){

           sum[i] = money*n/x;
        }
        else{

            sum[i] = money*(n/x+1);
        }
    }

    for(int i=0; i<2; i++){

        if(sum[i]<sum[i+1]){

            min = sum[i];
            sum[i+1] = sum[i];
        }
        else{

            min = sum[i+1];
        }
    }

    printf("%d", min);

    return 0;
}