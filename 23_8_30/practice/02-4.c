//02-4. BCD解密(10)
#include<stdio.h>

int main(){

    int n, BCD;

    scanf("%d", &n);

    BCD = n/16*10 + n%16;

    printf("%d\n", BCD);
    printf("%x", n);    //直接輸出16進制

    return 0;
}