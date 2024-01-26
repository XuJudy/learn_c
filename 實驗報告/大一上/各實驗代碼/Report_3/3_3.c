// 顛倒句子單詞順序

#include<stdio.h>
#include<string.h>

int main(){

    char sentence[1000000] = {0};
    char sign;  // 最後的標點符號
    int flag;   // 單詞的最後一個字母
    int len = 0;

    printf("Enter a sentence: ");   // 輸入句子
    while((sentence[len]=getchar())!='\n'){

        len++;
    }

    sign = sentence[len-1];     // 存標點符號
    flag = len-2;   // 句子最後一個單詞的最後一個字母

    printf("Reversal of sentence: ");   // 開始顛倒
    while(len>=0){

        if(sentence[len]!=' '){ // 還沒讀完一個單詞

            len--;
            continue;
        }
        else{

            for(int j=len+1; j<=flag; j++){  // 從單詞第一個字母到最後一個

                printf("%c", sentence[j]);
            }

            printf(" ");

            len--;
            flag = len; // 標記新的單詞的最後一個字母
        }
    }

    for(int j=0; j<=flag; j++){ // 第一組單詞還未輸出

        printf("%c", sentence[j]);
    }

    printf("%c\n", sign);   // 輸出標點符號

    return 0;
}