#include<stdio.h>
#include<string.h>

int main()
{
    int n;
   
    while(scanf("%d",&n)!=EOF)
    { 
        int d=1;
        char a[1001];
        scanf("%s",a);
        for(int i=0;i<n;i++)
        {
            if(a[i]=='R')
            {
                if(d==1){
                d=2;
            }
            else if(d==2){
                d=-1;
            }
            else if(d==-1){
                d=-2;
            }
            else if(d==-2)
            {
                d=1;
            }
            }
            else if(a[i]=='L')
            {
                if(d==1){
                d=-2;
            }
            else if(d==2){
                d=1;
            }
            else if(d==-1){
                d=2;
            }
            else if(d==-2)
            {
                d=-1;
            }
            }
        }
        if(d==1){
            printf("N\n");
        }
        else if(d==2){
            printf("E\n");
        }
        else if(d==-1){
            printf("S\n");
        }
        else if(d==-2){
            printf("W\n");
        }
    }
    return 0;
}