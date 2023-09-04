//ASCII表輸出
#include<stdio.h>

int main(){

    char a;

    for(int i=33; i<=126; i++){

        a = i;

        printf("%d %c\n", i, a);
    }

    return 0;
}