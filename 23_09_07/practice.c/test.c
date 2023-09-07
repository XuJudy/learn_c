//06-3. 单词长度
#include<stdio.h>

int main(){

    char ch[100];
    int i = 0;
    int cnt = 0;
    int k = 0;

    do{

        scanf("%c", &ch[i]);
        i++;
    }while(ch[i-1] != '.');

    for(int j=0; j<i; j++){

        if(ch[j] != ' '){   //還沒讀完一個單字

            cnt++;  //字母加一

            if(k != 0 && ch[j] != '.'){

                printf(" ");
                k = 0;
            }

            if(ch[j] == '.'  &&  ch[j-1] != ' '  &&  cnt != 1){     //若.前不是空格，則還有單字要輸出

                printf("%d", cnt-1);    //cnt-1: 扣掉.的那個數
            }
        }

        else if(cnt != 0 ){ //讀完一個單字了

            printf("%d", cnt);  //輸出字母數
            cnt = 0;    //字母數歸零
            k = 1;  //輸出空格
        } 
    }   

    return 0;
}