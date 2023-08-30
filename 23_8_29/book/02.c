//Ch3打印字符

#include<stdio.h>

int main(){

    char ch;

    printf("Please enter a chracter.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d.\n", ch, ch);     //%c輸出字符 %d輸出整數

    return 0;
}