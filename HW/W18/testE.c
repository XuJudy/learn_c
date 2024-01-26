#include <stdio.h>
#include <math.h>
int main(void)
{
    int T,N,i,k;
    scanf("%d",&T);
    for (i=0;i<T;i++)
    {
        int sum=1,flag,temp;
        scanf("%d",&N);
        flag=floor(sqrt(N)+0.5);
        for (k=2;k<=flag;k++)
        {
            if (!(N%k))
            {
                sum+=k;
                temp=N/k;
                if (temp<=N&&temp!=k)
                {
                    sum+=temp;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}