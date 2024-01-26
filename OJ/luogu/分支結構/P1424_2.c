////P1424 小鱼的航程[for版]
#include<stdio.h>

int main(){

    int x, n;   //從周x開始算起，經過n天
    int week;   //記錄周幾了
    int km = 0; //共遊多少公里

    scanf("%d %d", &x, &n);

    week = x;

    //利用for循環次數
    for(int i=0; i<n; i++){

        //若非周六日則加250，week+1
        if(week<6){

            km = km + 250;
            week++;
        }
        //若為周六日則week也得+1
        else week++;

        //若week記數至周八，則應表示為周一
        if(week>7)  week = 1;
    }

    printf("%d", km);

    return 0;
}