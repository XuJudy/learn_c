//Ch2 複習題9.

#include<stdio.h>

int main(){

    int x, y;
    x = 10;
    y = 5;

    y = x + y;
    printf("a=%d b=%d\n", x, y);

    x = x*y;
    printf("a=%d b=%d\n", x, y);

    printf("%d %d\n", x, y);

    return 0;
}