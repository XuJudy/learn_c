//问题 B: 22-循环-1-字符树
#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        char ch = 'A';

        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){

                printf("%c", ch);
            }

            ch++;

            printf("\n");
        }
    }
    
    return 0;
}