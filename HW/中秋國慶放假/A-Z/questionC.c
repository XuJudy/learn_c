//问题 C: 22-循环-1-字符矩阵
#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        char ch = 'A';

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){

                printf("%c", ch);
            }

            ch++;

            printf("\n");
        }
    }

    return 0;
}