//问题 AF: 22-循环-1-输出图形
#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        if(n<10){

            for(int i=1; i<=n; i++){
                for(int j=1; j<i; j++){

                    printf(" ");
                }

                printf("%d\n", i);
            }
        }

        else{

            for(int i=1; i<10; i++){
                for(int j=1; j<i; j++){

                    printf(" ");
                }

                printf("%d\n", i);
            }

            for(int i=10; i<=n; i++){
                for(int j=1; j<i-1; j++){

                    printf(" ");
                }

                printf("%d\n", i);
            }            
        }

        printf("\n");
    }

    return 0;
}