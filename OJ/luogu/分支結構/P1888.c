// P1888 三角函数

#include<stdio.h>

//最大公因數
int MaxFactor(int a, int b){

    int max, tmp;

    if(a>b){
    
        tmp = a;
        a = b;
        b = tmp;
    }

    for(int i=1; i<=a; i++)
        if(a%i==0 && b%i==0)    max = i;

    return max;
}

int main(){

    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    int max = a;
    int min = a;

    if(b>max)
        max = b;
    else if(b<min)
        min = b;

    if(c>max)
        max = c;
    else if(c<min)
        min = c;

    printf("%d/%d\n", min/MaxFactor(max, min), max/MaxFactor(max, min));

    return 0;
}