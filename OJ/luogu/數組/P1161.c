// P1161 开灯

#include<stdio.h>
#define MAX 3000000

int main(){

    int n;
    int Light[MAX] = {0};

    scanf("%d", &n);

    for(int i=0; i<n; i++){

        int t;
        double a;

        scanf("%lf%d", &a, &t);

        for(int j=1; j<=t; j++){

            Light[(int)(a*j)] = (Light[(int)(a*j)]+1) % 2 ;
        }
    }

    int id = 1;
    while(Light[id]!=1){

        id++;
    }

    printf("%d", id);

    return 0;
}