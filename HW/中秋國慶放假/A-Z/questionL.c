//问题 L: 22-循环-1-翻转数字
#include<stdio.h>

int main(){

    int n, tmp_n;

    while(scanf("%d", &n)!=EOF){

        tmp_n = 0;

        if(n<0){
            
            printf("-");
            n = -1*n;
        }

        while(n/10>0){
            
            tmp_n = tmp_n*10 + n%10;
            n = n/10;
        }

        tmp_n = tmp_n*10 + n;

        printf("%d\n", tmp_n);
    }

    return 0;
}