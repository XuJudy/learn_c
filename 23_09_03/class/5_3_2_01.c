//正序分解數
/*
    先逆序 在分解輸出(僅適用尾數不為0)
*/
#include<stdio.h>

int main(){

    int x, d, tmp;

    scanf("%d", &x);

    //逆序
    do{
        d = x%10;
        x = x/10;
        tmp = tmp*10 + d;

    }while( x>0 );

    printf("tmp=%d\n", tmp);

    //輸出
    do{
        d = tmp%10;
        printf("%d", d);

        if( tmp > 9)  printf(" ");
        tmp = tmp/10;
        
    }while(tmp > 0);

    return 0;
}