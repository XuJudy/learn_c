// 指針數組: 存放指針的數組

#include<stdio.h>

int main(){

    int a = 10;
    int b = 20;
    int c = 30;

    int* parr[10] = {&a, &b, &c};   // 指針數組

    for(int i=0; i<3; i++){

        printf("%d ", *(parr[i]));
    }

    return 0;
}