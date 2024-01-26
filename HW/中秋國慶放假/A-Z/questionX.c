//问题 X: 22-循环-1-发工资
#include<stdio.h>

int main(){

    int n, money;

    while(scanf("%d", &n)!=EOF){

        int total = 0;

        for(int i=0; i<n; i++){

            scanf("%d", &money);

            total = total + money/100;
            money = money%100;
            
            total = total + money/50;
            money = money%50;

            total = total + money/10;
            money = money%10;

            total = total + money/5;
            money = money%5;

            total = total + money/2;
            money = money%2;

            total = total + money;
        }

        printf("%d\n", total);
    }

    return 0;
}