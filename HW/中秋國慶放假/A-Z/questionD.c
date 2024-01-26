//问题 D: 22-循环-1-重修费
#include<stdio.h>

int main(){

    int n;  //成績數

    while(scanf("%d", &n)!=EOF){

        int x;
        int sum = 0;    //重修數量

        for(int i=0; i<n; i++){

            scanf("%d", &x);

            if(x<60)    sum++;
        }

        printf("%d\n", 200*sum);
    }

    return 0;
}