//最大公因數(輾轉相除法)
/*
如果b=0,計算結束,a是最大公因數;
否則,計算a除以b的餘數,讓a=b,而b=餘數;
回到第一步。
eg.
    a   b   t
    12  18  12
    18  12  6
    12  6   0  
    6   0       --->end
*/
#include<stdio.h>

int main(){

    int a, b, t;

    while(scanf("%d %d", &a, &b)){

        printf("%d和%d的最大公因數是", a, b);

        while(b != 0){

            t = a%b;
            a = b;
            b = t;
        }
        
        printf("%d\n", a);
    }
        
    return 0;
}