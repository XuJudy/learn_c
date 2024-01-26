//1672: 22-循环-1-输入输出练习2
#include<stdio.h>

int main(){

    int T;

    scanf("%d", &T);

    for(int i=0; i<T; i++){

        int a, b;

        scanf("%d%d", &a, &b);

        printf("%d\n", a+b);
    }

    return 0;
}