//问题 BR: 21级期末机试-密码设置（20分）
/*
题目描述
小南有个密码本，详细记录着她在每个网站上的密码，但是有的密码设置可能存在安全问题，她想请聪明的你帮她看看密码设置是否正确。安全密码的判断有以下几个规则：
（1）密码长度必须≥8
（2）包含数字
（3）包含大写字母
（4）包含小写字母
（5）至少包含6个特殊字符（! @ # $ * ~）中的一个
以上规则，除（1）必须满足外，其他四个条件至少满足其中三个才是安全的密码。

输入
多组样例。每行一个样例，输入一个字符串S代表密码，字符串S的长度len(S)满足：1≤len(S)≤30，且只包含密码设置要求的数字、字母和特殊字符，无其他非法字符。
输出
对于每一组样例，输出一个判断结果。如果满足安全密码的设置要求则输出yes，不满足则输出no。每个输出占一行。

样例输入
ttttttttt
123Aa~
123456QqWe
aQwe!1234
123$#abc
样例输出
no
no
yes
yes
yes
*/

#include<stdio.h>
#include<string.h>

int main(){

    char password[30] = {0};

    while(scanf("%s", password)!=EOF){

        int PasswordLen = strlen(password);
        int PassRule = 0;

        //Rule2: 有數字
        for(int i=0; i<PasswordLen; i++){

            if(password[i]>='0' && password[i]<='9'){

                PassRule++;
                break;
            }
        }

        //Rule3: 有大寫字母
        for(int i=0; i<PasswordLen; i++){

            if(password[i]>='A' && password[i]<='Z'){

                PassRule++;
                break;
            }
        }

        //Rule4: 有小寫字母
        for(int i=0; i<PasswordLen; i++){

            if(password[i]>='a' && password[i]<='z'){

                PassRule++;
                break;
            }
        }

        //Rule5: 有其他字符
        for(int i=0; i<PasswordLen; i++){

            if((password[i]>='A' && password[i]<='Z') || (password[i]>='a' && password[i]<='z') || (password[i]>='0' && password[i]<='9')){
                
                PassRule = PassRule + 0;
            }
            else{

                PassRule++;
                break;
            }
        }

        //OUTPUT
        if(PasswordLen>=8 && PassRule>=3)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}