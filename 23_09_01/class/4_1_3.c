//do-while
//do-while:先做再判斷 while:先判斷再做
#include<stdio.h>

int main(){

    int x;
    int sum =0;

    scanf("%d", &x);

    //do-whiles
    do
    {
        x /= 10;
        sum++;
    }
    while (x > 0);
    
    printf("%d", sum);
 
    return 0;
}