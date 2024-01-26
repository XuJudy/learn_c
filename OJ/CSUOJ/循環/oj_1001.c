//1001: 22-循环-1-打印图形1
#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        for(int i=0; i<n; i++){
            printf("*");
        }
        
        printf("\n\n");
    }

    return 0;
}