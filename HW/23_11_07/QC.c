//问题 C: 查找最大元素
/*
    题目描述
    对于输入的每个字符串，查找其中的最大字母，在该字母后面插入字符串“(max)”。

    输入
    输入数据包括多个测试实例，每个实例由一行长度不超过100的字符串组成，字符串仅由大小写字母及数字构成
    输出
    对于每个测试实例输出一行字符串，输出的结果是插入字符串“(max)”后的结果，如果存在多个最大的字母，就在每一个最大字母后面都插入"(max)"。

    样例输入 Copy
    abcdefgfedcba
    xxxxx
    样例输出 Copy
    abcdefg(max)fedcba
    x(max)x(max)x(max)x(max)x(max)
*/

#include<stdio.h>
#include<string.h>

int main(){

    char word[100] = {0};   // 輸入的字串

    while(scanf("%s", word)!=EOF){

        int len = strlen(word);
        char max = word[0];     // 初始化最大字母

        for(int i=1; i<len; i++){   // 篩選比較

            if(word[i]>max) max = word[i];
        }

        for(int i=0; i<len; i++){   // 輸出

            if(word[i]==max)    // 等於最大字母多輸出(max)
                printf("%c(max)", word[i]);
            else    // 非最大字母則照常輸出
                printf("%c", word[i]);
        }

        printf("\n");
    }

    return 0;
}