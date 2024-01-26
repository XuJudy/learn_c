#include<stdio.h>
#include<string.h>

int main(){

    
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

    return 0;
}