//问题 J: 22-循环-2-打印沙漏
/*
    1: 1
    2: 1 + 3*2
    3: 1 + 3*2 + 5*2
*/
#include<stdio.h>

int main(){

    char ch;
    int n, x;  //全部幾個、最多幾層
    int sum[500];

    sum[1] = 1; 
    sum[2] = 7;
    sum[3] = 17;

    for(int i=4; (2*i-1)*2+sum[i-1]<=1000; i++){

        sum[i] = sum[i-1] + (2*i-1)*2;
    }

    while(scanf("%d %c", &n, &ch)!=EOF){

        for(int i=1; sum[i]<=n; i++){

            x = i;
        }

        //畫沙漏上半部
        for(int i=x; i>0; i--){

            //畫空格
            for(int j=x; j>i; j--)  printf(" ");

            //印圖案
            for(int k=2*i-1; k>0; k--)  printf("%c", ch);

            printf("\n");
        }

        //畫沙漏下半部
        for(int i=2; i<=x; i++){
            
            //畫空格
            for(int j=x-i; j>0; j--)  printf(" ");

            //印圖案
            for(int k=0; k<2*i-1; k++)  printf("%c", ch);

            printf("\n");
        }

        printf("%d\n", n-sum[x]);
    }

    return 0;
}