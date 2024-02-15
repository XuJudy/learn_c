#include<stdio.h>

int main(){

    int num;

    while(scanf("%d", &num)!=EOF){

        int flag1 = 0;
        int flag2 = 0;

        for(int i=1; i<=num/2; i++){

            if(i%2==1 && (num-i)%2==1 && flag1==0)
                flag1 = 1;
            else if(i%2==0 && (num-i)%2==0 && flag2==0)
                flag2 = 1;
            else if(flag1==1 && flag2==1)
                break;
        }

        if(flag1==1 && flag2==1)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}