//22-基础-1-加密算法
/*
    题目描述
    小南最近迷上了密码，他设计了一个加密算法，
    就是将一个4位数的每一位上的数字加9然后除以10取余，作为该位上的新数字，
    然后将第一位和第三位的数字互换，第二位和第四位上的数字互换，组成加密后的新数。 
    
    密文的输出格式为：The encrypted number is 1234 
    注意加密后的新数如果有前导0则不输出前导0，也就是说如果加密后的数字为0123，你需要输出的是The encrypted number is 123
    
    输入
    多样例。每个样例输入一个四位整数。
    输出
    对于每个样例，输出The encrypted number is 加经过加密以后的数字。每个结果占一行。
    
    样例输入
    1257
    1211
    样例输出
    The encrypted number is 4601
    The encrypted number is 1
*/

#include<stdio.h>

int main(){

    int n, word;

    while(scanf("%d", &n)!=EOF){
    
        //初始化
        int password[5];
        int i = 4;
        word = 0;
        
        while(n>0){

            password[i] = n%10;
            n = n/10;
            i--;
        }

        //将一个4位数的每一位上的数字加9然后除以10取余，作为该位上的新数字
        for(int i=1; i<=4; i++){

            password[i] = (password[i]+9)%10;
        }

        word = 1000*password[3] + 100*password[4] + 10*password[1] + password[2];

        //密文輸出
        printf("The encrypted number is %d\n", word);
    }

    return 0;
}