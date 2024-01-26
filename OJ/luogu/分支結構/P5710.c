//P5710【深基3.例2】数的性质

#include<stdio.h>

int main(){

    int x;
    int sum = 0;

    scanf("%d", &x);

    if(x%2==0)  sum++;          //性質一
    if(x>4 && x<=12)    sum++;  //性質二

    if(sum == 2)    printf("1 1 0 0");      //滿足兩個性質
    else if(sum == 1)   printf("0 1 1 0");  //滿足一個性質
    else if(sum == 0)   printf("0 0 0 1");  //沒有滿足的性質    

    return 0;
}