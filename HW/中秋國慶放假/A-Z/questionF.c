//问题 F: 22-循环-2-高斯求和
#include<stdio.h>

int main(){

    int t, n;

    while(scanf("%d", &t)!=EOF){

        for(int i=0; i<t; i++){

            scanf("%d", &n);

            if(n==0)    printf("1");

            else{

                for(int i=0; i<2; i++){

                    printf("5");

                    for(int j=1; j<n; j++){

                        printf("0");
                    }
                }
            }

            printf("\n");
        }
    }

    return 0;
}