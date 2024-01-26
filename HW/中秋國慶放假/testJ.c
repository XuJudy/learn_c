#include<stdio.h>
int main()
{
	int N;
	char C;

    while(scanf("%d %c",&N,&C)!=EOF){

        int i, rest;
        int j=1;
        int x=0;
        int y=0;

        while(2*j*j-1<=N){  //計算層數

            j++;
        }

        j--;
        y = 2*j - 1;	
        rest = N - 2*j*j + 1;//剩下字符的数量

        while(y>0){ //沙漏上半部

            for(i=0;i<x;i++)
                printf(" ");
            for(i=0;i<y;i++)
                printf("%c",C);

            printf("\n");
            x++;
            y-=2;
        }

        x--;
        y+=2;

        while(x>0){ //沙漏下半部

            x--;
            y+=2;

            for(i=0;i<x;i++)
                printf(" ");
            for(i=0;i<y;i++)
                printf("%c",C);

            printf("\n");	
        }
        
        printf("%d\n",rest);
    }

	return 0;
}