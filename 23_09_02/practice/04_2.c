//04-2. 打印九九口诀表(15)
#include<stdio.h>

int main(){

    int N;

    while (scanf("%d", &N))
    {
        for(int i=1; i<=N; i++)
        {
            for (int j=1; j<=i; j++)
            {
                printf("%d*%d=%d\t", j, i, i*j);
            }
            printf("\n");
        } 
    }

    return 0;
}