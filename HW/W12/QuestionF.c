//问题 F: 恺撒的密码
/*
题目描述
恺撒时代充满了动荡和危险，恺撒为了保证在战争中传递秘密消息，发明了一种密码。他在所有的信件中将所有的字符按字母顺序向后移动了5个位置（比如说，原文中是A，那么密信中就为F），密信中字母和原文中字母的对应关系如下：
密文：A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
原文：V W X Y Z A B C D E F G H I J K L M N O P Q R S T U
只有字母被替换，而且所有字母都是大写的。

输入
多样例测试，每行一个测试用例。每行为一个字符串（长度不超过1000个字符）。
输出
每行输出一个测试用例的结果。

样例输入 Copy
NS BFW, JAJSYX TK NRUTWYFSHJ FWJ YMJ WJXZQY TK YWNANFQ HFZXJX
N BTZQI WFYMJW GJ KNWXY NS F QNYYQJ NGJWNFS ANQQFLJ YMFS XJHTSI NS WTRJ
IFSLJW PSTBX KZQQ BJQQ YMFY HFJXFW NX RTWJ IFSLJWTZX YMFS MJ
样例输出 Copy
IN WAR, EVENTS OF IMPORTANCE ARE THE RESULT OF TRIVIAL CAUSES
I WOULD RATHER BE FIRST IN A LITTLE IBERIAN VILLAGE THAN SECOND IN ROME
DANGER KNOWS FULL WELL THAT CAESAR IS MORE DANGEROUS THAN HE
*/

#include<stdio.h>
#include<string.h>

int main(){

    char password[1000] = {0};
    char word[1000] = {0};

    while(scanf("%c", &password)!='\n'){

        int len = strlen(password);
        
        for(int i=0; i<len; i++){

            if(password[i]!='\0'){

                word[i] = password[i] - 5;

                if(word[i]<'A')
                    word[i] = word[i] + 26;
            }
            else
                word[i] = '\0';
        }

        for(int i=0; i<len; i++){

            printf("%c", word[i]);
        }
    }

    return 0;
}