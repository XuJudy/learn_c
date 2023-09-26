//P5709 【深基2.习6】Apples Prologue / 苹果和虫子(未完成)
#include<stdio.h>

int main(){

    int m;  //蘋果數量
    int t;  //吃一個蘋果所需時間
    int s;  //目前吃了多久了

    scanf("%d%d%d", &m, &t, &s);

    if(t==0)    printf("0");

    else{

        if(s%t==0){

            printf("%d", m-s/t);
        }
        else{

            printf("%d", m-s/t-1);
        }
    }

    return 0;
}