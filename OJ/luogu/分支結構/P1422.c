// P1422 小玉家的电费

#include<stdio.h>

int main(){

    double kw, money;

    scanf("%lf", &kw);

    if(kw<=150)
        money = kw*0.4463;
    else if(kw>150 && kw<=400)
        money = 150*0.4463 + (kw-150)*0.4663;
    else if(kw>400)
        money = 150*0.4463 + 250*0.4663 + (kw-400)*0.5663;
    
    printf("%.1f\n", money);

    return 0;
}