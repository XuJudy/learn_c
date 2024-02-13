// P1319 压缩技术

#include<stdio.h>

int main(){

    int N, cnt;
    int num = 0;    // 輸出的數字
    int word = 0;   // 一行已經輸出多少數字了

    scanf("%d", &N);

    int r = N*N;    // 範圍
    
    while(r){

        scanf("%d", &cnt);

        for(int i=0; i<cnt; i++){

            if(word==N){    // 換行
                
                word = 0;
                printf("\n");
            }

            word++;
            printf("%d", num);
        }

        r = r - cnt;
        num = ((num==1)?0:1);
    }

    return 0;
}