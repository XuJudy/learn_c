//04-1. 水仙花数(20)
/*
    1. 輸入N位數
    2. 從10^(N-1)開始排
    3. 到10^N-1結束
*/
#include<stdio.h>

int main(){

    int n, tmp1, tmp2, sum, total;

    while ( scanf("%d", &n) )   
    {
        int start = 1;
        int end = 1;

        //設定範圍
        for(int i=1; i<n; i++)
        {
            start = start*10;
        }
        
        end = start*10;

        //排查開始
        for(int j=start; j<end; j++)
        {
            //初始化
            tmp1 = j;
            tmp2 = tmp1;
            sum = 1;
            total = 0;

            //一個數
            while(tmp2>0)
            {
                tmp1 = tmp2%10;
                tmp2 = tmp2/10;

                for(int k=0; k<n; k++)
                {
                    sum = sum * tmp1;   //平方
                }

                total = total + sum;    //相加
                sum = 1;    //sum初始化
            }

            //判斷是否為水仙花數
            if(total == j)   printf("%d\n", j);
        }
    }

    return 0;
}