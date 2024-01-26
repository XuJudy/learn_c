//问题 AR: 20级期末机试2-对称画（20分）
/*
    题目描述
    中南CC君是一个喜欢对称美的艺术家，经常用电脑打印一些对称图形。
    不过他只喜欢左右对称，不喜欢上下对称。
    他希望你帮他打印一幅满足他喜好的对称画。

    输入
    第一行是样例数T（1<T<9)。以后的每行一个样例，是一个整数n(1≤n≤26)，与对称画的大小有关。
    输出
    每行输出一个对应的对称画图形，图形中最长的行左边没有空格。每个样例之后输出一个空行。
    
    样例输入
    2
    2
    3
    样例输出
     a 
    aba
    a a
     a 

      a  
     aba 
    abcba
    a   a
     a a 
      a  
*/

#include<stdio.h>

int main(){

    int T, n;

    scanf("%d", &T);

    for(int i=0; i<T; i++){

        scanf("%d", &n);

        for(int j=0; j<n; j++){     //上半部

            //n-j-i個空格
            for(int k=0; k<n-j-1; k++)
                printf(" ");

            //'a'~'a'+j個字符 [上左]
            for(char k='a'; k<='a'+j; k++)
                printf("%c", k);

            //'a'+j-1~'a'個字符 [上右]
            for(int k='a'+j-1; k>='a'; k--)
                printf("%c", k);

            printf("\n");
        }
    
        for(int j=n-1; j>=0; j--){     //下半部

            //n-j-1個空格
            for(int k=0; k<n-j-1; k++)
                printf(" ");

            //'a'~'a'+j個字符 [上左]
            for(char k='a'; k<='a'+j; k++){

                if(k=='a')
                    printf("%c", k);
                else
                    printf(" ");
            }

            //'a'+j-1~'a'個字符 [上右]
            for(int k='a'+j-1; k>='a'; k--){

                if(k=='a')
                    printf("%c", k);
                else
                    printf(" ");
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}