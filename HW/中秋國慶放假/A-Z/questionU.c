//问题 U: 22-循环-1-鸽兔同园
/*
    2x+2y=2n
    4x+4y=4n
    4x+2y=m

    2x=m-2n
    2y=4n-m
*/
#include<stdio.h>

int main(){

    int n, m;   //頭、腳

    while(scanf("%d%d", &n, &m)!=EOF){

        if(n==0 && m==0)    break;

        else{

            int x, y;   //兔子，鴿子

            x = (m-2*n)/2;
            y = n - x;

            if(m%2==1 || m<2*n || m>4*n)
                printf("Error\n");
            else
                printf("%d %d\n", y, x);
        }
    }

    return 0;
}