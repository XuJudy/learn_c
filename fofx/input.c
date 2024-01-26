#include<stdio.h>

int main(){

    // 字符串輸入
    // 1. gets()
    char str1[100];
    gets(str1);
    printf("%s\n");

    // 2.getchar()
    int i = 0;
    char ch;
    char str2[100];
    while((ch==getchar())!='\n'){

        str2[i] = ch;
        i++;
    }
    str2[i] = '\0';
    for(int j=0; j<i; j++){

        printf("%c", str2[j]);
    }
    printf("\n");

    // 3.scanf
    char str3[100];
    scanf("%s", str3);
    printf("%s\n", str3);


    return 0;
}