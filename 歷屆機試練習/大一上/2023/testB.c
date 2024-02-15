#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        char start = 'a';

        // 上部
        for(int i=1; i<n; i++){

            // 空格
            for(int j=n-1; j>=i; j--){

                printf(" ");
            }
            printf(".\n");
        }

        // 中間

        // 下部
    }

    return 0;
}