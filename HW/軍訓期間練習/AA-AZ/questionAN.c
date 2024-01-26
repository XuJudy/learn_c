//问题 AN: 20级期末机试1-回文串（20分）
/*
    题目描述
    CC君由回文诗联想到了最近学校交给他的一个关于回文字符串的任务：
    对一个给定的只包含小写字母的字符串进行回文判定，
    并统计回文字母串中不同字母的个数。
    回文是指顺读和逆读一样。
    你能帮他完成这个任务吗？
    
    输入
    多组样例。每行一个样例包含仅由小写字母组成的字符串，最多50字母。
    输出
    对于每一个输入的样例，输出一个结果。如果是回文串，则输出“YES”和不同字母的个数，中间用空格分开；如果不是回文串，则输出“NO”。
    
    样例输入
    abcdefgdefghijjihgfedgfedcba
    wbcddcbw
    goodlucktestover
    样例输出
    YES 10
    YES 4
    NO
*/

#include<stdio.h>
#include<string.h>

int main(){

    char ch[50];

    while(scanf("%s", &ch)!=EOF){

        int len = strlen(ch);   //字串長度
        int flag = 1;   //標記是否為回文: flag=1回文 flag=0非回文

        for(int i=0; i<len; i++){

            if(ch[i]!=ch[len-i-1]){ //兩旁字母不同直接標示為非回文，跳出for循環

                flag = 0;
                printf("NO\n");
                break;
            }
        }

        if(flag==1){    //若為回文

            int sum = 0;            //不同字母的個數
            int word[26] = {0};     //字母目前出現次數的統計

            for(int i=0; i<=len/2; i++){    //因為是回文，後面一半皆為重複的

                word[ch[i]-'a']++;
            }

            for(int i=0; i<26; i++){

                if(word[i]!=0)  sum++;
            }

            printf("YES %d\n", sum);
        }
    }

    return 0;
}