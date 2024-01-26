//问题 J: 22-数据类型-2-字符串处理
/*
    题目描述
    输入一个字符串，将其按照字母大小写拆分为两个字符串

    输入
    多组样例输入，每个输入一行，每行为一个字符串
    输出
    多组输出，每组两行，s的所有大写字母字符串s1和s的所有小写字母字符串s2

    样例输入 Copy
    ThisIsATest
    样例输出 Copy
    TIAT
    hissest
*/

#include<stdio.h>
#include<string.h>

int main(){

    char s[100000] = {0};
    char s_small[100000] = {0};
    char s_big[100000] = {0};

    while(scanf("%s", s)!=EOF){

        int len = strlen(s);
        int sum_small = 0;
        int sum_big = 0;

        for(int i=0; i<len; i++){

            if(s[i]>='A' && s[i]<='Z'){

                s_big[sum_big++] = s[i];
            }
            else if(s[i]>='a' && s[i]<='z'){

                s_small[sum_small++] = s[i];
            }
        }

        for(int i=0; i<sum_big; i++){

            printf("%c", s_big[i]);
        }

        printf("\n");
        
        for(int i=0; i<sum_small; i++){

            printf("%c", s_small[i]);
        }

        printf("\n");
    }

    return 0;
}