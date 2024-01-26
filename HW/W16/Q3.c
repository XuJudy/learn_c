// 题三、回文字符串
/*
    判断字符串x是否为回文数
    （1）如果是回文数，返回ascii码出现的次数；
    （2）如果不是回文数，返回-1
*/

// 题三、回文字符串

#include<stdio.h>
#include<string.h>

int Palidrome(char *str){

    int cnt = 0;
    int flag = 1;
    int sum_ascii[260] = {0};
    int len = strlen(str);

    for(int i=0; i<len; i++){   // 統計每個ascii碼出現次數

        int num = str[i];
        sum_ascii[num]++;
    }

    for(int i=0; i<260; i++){   // 統計有幾種不同的ascii碼

        if(sum_ascii[i]!=0) cnt++;
    }

    for(int i=0, j=len-1; i<j; i++, j--){   // 判斷是否為回文字符串

        if(str[i]!=str[j]){ // 不是回文

            flag = 0;
            break;
        }
    }

    if(flag)    return cnt;
    else    return -1;
}