//04-0. 求符合给定条件的整数集(15)
/*
    2xx 2xx 2xx 2xx 2xx 2xx
    3xx 3xx 3xx 3xx 3xx 3xx 
    4xx 4xx 4xx 4xx 4xx 4xx
    5xx 5xx 5xx 5xx 5xx 5xx
*/
#include<stdio.h>

int main(){

    int X, p;

    while( scanf("%d", &X) )
    {
        for (int i=X; i<X+4; i++)
        {
            for (int y=X; y<X+4; y++)
            {
                for (int z=X; z<X+4; z++)
                {
                    if(i!=y && y!=z && i!=z)
                    {
                        printf("%d", i*100+y*10+z);
                        p++;    //輸出一次加一

                        if(p%6==0)    printf("\n");   //輸出每六次換行
                        else    printf(" ");    //其他次加空格
                    }
                }   
            }
        }
    }

    return 0;
}