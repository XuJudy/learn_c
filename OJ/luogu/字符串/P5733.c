// P5733 【深基6.例1】自动修正

#include<stdio.h>

int main(){

    char word[200] = {0};
    scanf("%s", word);

    for(int i=0; word[i]!='\0'; i++){

        if(word[i]>='a' && word[i]<='z'){

            word[i] = word[i] - 'a' + 'A';
        }
    }

    printf("%s", word);

    return 0;
}