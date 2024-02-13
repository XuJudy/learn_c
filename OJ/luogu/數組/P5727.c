// P5727 【深基5.例3】冰雹猜想

#include<stdio.h>

int main(){

    int n;
    int cnt = 0;
    int num[1000] = {0};

    scanf("%d", &n);

    while(n!=1){

        cnt++;
        num[cnt] = n;

        if(n%2==0)
            n = n/2;
        else
            n = 3*n + 1;
    }

    num[++cnt] = 1;

    for(int i=cnt; i>0; i--){

        printf("%d ", num[i]);
    }

    return 0;
}