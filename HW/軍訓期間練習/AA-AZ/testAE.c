#include<stdio.h>
int main(){

	int x;

	while(scanf("%d",&x)!=EOF){

        int flag = 0;
        
        for(int i=1;i<=x/2;i++){

            if(i%2==0&&(x-i)%2==0){

                printf("YES\n");
                flag++;
                break;
            }
        }

        if(flag==0)
            printf("NO\n");
    }

    return 0;
 } 
