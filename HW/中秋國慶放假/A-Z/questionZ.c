//问题 Z: 22-循环-1-分数相加
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

    int a, b, c, d; //input: a/b c/d
    int e, f;   //output: e/f
    int max;    //最大公因數

    while(scanf("%d/%d+%d/%d", &a, &b, &c, &d)!=EOF){

        //擴分相加
        e = a*d + c*b;
        f = b*d;

        //找最大公因數進行約分
        max = MaxFactor(e, f);
        e = e/max;
        f = f/max;

        if(f==1)    printf("%d\n", e);
        else    printf("%d/%d\n", e, f);
    }

    return 0;
}