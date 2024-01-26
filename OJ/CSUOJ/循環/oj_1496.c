//1496: 22-循环-1-字符串反码
/*
    题目描述
    字符反码的定义：对于字符x和它的反码y之间满足如下关系：
    （1）如果x是小写字母字符，则x和字符'a’的距离等于它的反码y和字符'z’ 的距离；
    （2）如果x是大写字母字符，则x和字符'A’的距离等于它的反码y和字符'Z’的距离；
    （3）如果x不是小写字母也不是大写字母，它的反码y等于x。
    例如：'a’的反码是'z’；'c’的反码是'x’；'W’的反码是'D’；'1’的反码还是'1’；'$'的反码还是'$'。
    一个字符串的反码定义为其所有字符的反码，你的任务就是计算出给定字符串的反码。

    输入
    输入每行都是一个字符串，字符串长度不超过 80 个字符。
    输出
    对于输入的每个字符串，输出其反码。

    样例输入 Copy
    Hello 
    样例输出 Copy
    Svool 
*/

#include<stdio.h>
#include<string.h>

int main(){

    char word[100] = {0};   // 原碼
    char ans[100] = {0};    // 反碼

    while(scanf("%s", word)!=EOF){

        int len = strlen(word); // 字符串長度

        for(int i=0; i<len; i++){

            if(word[i]>='A' && word[i]<='Z'){   // 大寫

                int d = word[i] - 'A';  // 與A的距離
                ans[i] = 'Z' - d;
            }
            else if(word[i]>='a' && word[i]<='z'){  //小寫
                
                int d = word[i] - 'a';  // 與a的距離
                ans[i] = 'z' - d;
            }
            else
                ans[i] = word[i];
        }

        for(int i=0; i<len; i++){   // 輸出

            printf("%c", ans[i]);
        }

        printf("\n");
    }

    return 0;
}