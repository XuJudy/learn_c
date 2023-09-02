//04-3. 统计素数并求和(20)
#include<stdio.h>

int main(){

    int m, n, sum, num, total; //sum:質數和 num:因數個數 total:質數個數

    while (scanf("%d %d", &m, &n))
    {
        sum = 0;
        total = 0;

        for(int i=m; i<=n; i++)
        {
            for(int j=1; j<i; j++)
            {
                if(i%j==0)  num++;  //整除
            }

            if (num==1) //num=1為質數
            {
                sum = sum + i;  
                total++;
            }

            num = 0;    //num要歸零
        }

        printf("%d %d\n", total, sum);
    }

    return 0;
}