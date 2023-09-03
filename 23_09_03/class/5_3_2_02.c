//正序分解數
/*
    x = 12345
    12345/10000 -> 1
    12345%10000 -> 2345
    10000/10 -> 1000
    2345/1000 -> 2
    2345%1000 -> 345
    1000/10 -> 100
    345/100 -> 3
    345%100 -> 45
    100/10 -> 10
    45/10 -> 4
    45%10 -> 5
    10/10 -> 1
    5/1 -> 5
    5%1 ->0
*/
#include<stdio.h>

int main(){

    int d, x, n;
    int mask = 1;
    int cnt = 0;

    scanf("%d", &x);
    n = x;

    //計算幾位數
    while(n>9){
        n = n/10;
        cnt++;
    }

    //設定mask
    for(int i=0; i<cnt; i++){

        mask = mask*10;
    }

    do{
        d = x/mask;
        x = x%mask;
        mask = mask/10;

        printf("%d", d);
        if( mask > 0 )    printf(" ");

        //printf("x=%d, mask=%d, d=%d\n", x, mask, d);
    }while(mask>0);

    return 0;
}