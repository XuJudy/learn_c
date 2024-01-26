//问题 C: 21级期中机试-最少的笔
#include<stdio.h>

int main(){

    int x, money;
    int sum, sum_8, sum_18, sum_38;   //所有金額、實付金額、筆的總數量

    while(scanf("%d", &x)!=EOF){

        sum_38 = x/38;
        x = x%38;
        sum_18 = x/18;
        x = x%18;
        sum_8 = x/8;

        money = 38*sum_38 + 18*sum_18 + 8*sum_8;
        sum = sum_8 + sum_18 + sum_38;

        if(money>68)    sum++;  //促銷活動

        printf("%d\n", sum);
    }

    return 0;
}