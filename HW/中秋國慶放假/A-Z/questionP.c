//问题 P: 22-循环-1-Tom数
#include<stdio.h>

int main(){

    long int n;

    while(scanf("%ld", &n)!=EOF){

        int Tom = 0;

        while(n>0){

            Tom = Tom + n%10;
            n = n / 10;
        }

        printf("%d\n", Tom);
    }

    return 0;
}