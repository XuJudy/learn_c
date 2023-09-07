//06-2. 字符串字母大小写转换
#include<stdio.h>

int main(){

    char c;

    c = getchar();  //從文件中讀取字符  //一次讀取一個字符(用戶輸入完後須按下回車鍵)

    while(c!='#'){

        if(c>='A' && c<='Z')    c = c + 32; //大寫
        else if(c>='a' && c<='z')   c = c - 32; //小寫
        else    c = c;

        printf("%c", c);
        c = getchar();
    }

    return 0;
}