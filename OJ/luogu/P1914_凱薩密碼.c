// P1914 小书童——凯撒密码

#include<stdio.h>
#include<string.h>

int main(){

    int n;
    char word[55] = {0};

    scanf("%d%s", &n, word);

    int len = strlen(word);

    for(int i=0; word[i]!='\0'; i++){

        word[i] = (word[i]-'a'+n)%26 + 'a';
        
        printf("%c", word[i]);
    }

    return 0;
}