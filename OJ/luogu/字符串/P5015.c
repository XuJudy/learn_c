// P5015 [NOIP2018 普及组] 标题统计

#include<stdio.h>
#include<string.h>

int main(){

    char s[10] = {0};

    gets(s);
    int len = strlen(s);
    int sum = 0;

    for(int i=0; i<len; i++){

        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
            sum++;
    }

    printf("%d\n", sum);

    return 0;
}