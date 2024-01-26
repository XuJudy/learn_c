//问题 BM: 21级补考-加密算法（20分）
/*
    题目描述
    习近平总书记说过“没有网络安全就没有国家安全”，小南立志成为一个密码高手，为人民安全贡献自己的一份绵薄之力。
    他从最基础的换位密码开始学习，设计了一个简单的加密算法。
    算法满足以下变换要求：
    将输入的明文反序后变成密文。

    输入
    多组样例。每行一个样例包含一串由字母组成的字符，长度小于1000位，代表明文。
    输出
    对于每一个样例，输出变换后的密文。每个输出占一行。
    
    样例输入
    CSU
    COMPUTER
    IloveChina
    样例输出
    USC
    RETUPMOC
    anihCevolI
*/

#include<stdio.h>
#include<string.h>

int main(){

    char ch[1001];

    while(scanf("%s", &ch)!=EOF){

        int len = strlen(ch);

        for(int i=len-1; i>=0; i--){ //倒序輸出

            printf("%c", ch[i]);
        }

        printf("\n");
    }

    return 0;
}