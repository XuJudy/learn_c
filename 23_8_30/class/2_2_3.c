//交換變量
#include<stdio.h>

int main(){

    int a, b, tmp;  //tmp:臨時存放處

    scanf("%d %d", &a, &b);

    tmp = a;
    a = b;
    b = tmp;

    printf("a=%d b=%d", a, b);

    return 0;
}