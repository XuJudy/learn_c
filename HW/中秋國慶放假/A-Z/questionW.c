//问题 W: 22-循环-2-字母圣诞树
#include<stdio.h>

int main(){

    char ch;
    int n;

    while(scanf("%d", &n)!=EOF){

        scanf("%C", &ch);

        char now = 'A'; //從A開始

        while(now<=ch){

            //第一層
            for(int i=ch-64; i>0; i--){

                printf(" ");
            }

            printf("%c\n", now);

            //第二層
            for(int i=ch-now; i>0; i--){

                printf(" ");
            }

            for(int i=2*(now-64)+1; i>0; i--){

                printf("%c", now);
            }

            now++;  //下一個字母

            printf("\n");
        }
    }

    return 0;
}