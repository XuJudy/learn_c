//P5721 【深基4.例6】数字直角三角形
#include<stdio.h>

int main(){

    int n, a;
    int x = 1;

    scanf("%d", &n);
    a = n;

    for(int i=0; i<a; i++){
        for(int j=0; j<n; j++){

            printf("%02d", x);
            x++;
        }

        n--;
        printf("\n");
    }

    return 0;
}