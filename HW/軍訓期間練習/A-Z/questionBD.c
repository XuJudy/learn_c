//21级期中机试-反间整数（10分）
/*
    题目描述
    小南最近在资料上看到了一种叫"反间整数"的构造方法，
    就是将一个整数n的数字顺序颠倒，
    然后再加上原先的数就得到了n的"反间整数"。
    例如，对于给定的整数1325，首先将该整数的数字顺序颠倒，得到5231，
    然后再加上原先的数1325，我们得到5231+1325=6556就是1325的"反间整数"。

    注意如果颠倒之后的数字有前缀零，前缀零将会被忽略。
    例如n = 100时，颠倒之后是1。

    输入
    多组样例。每行输入一个样例包括一个整数n（n是一个十进制整数，长度≤1000位)
    输出
    对于每一个输入的n，输出一个数据，表示n的"反间整数"。每个输出占一行。
    
    样例输入 Copy
    -9
    100
    1325
    样例输出 Copy
    -18
    101
    6556
*/

#include<stdio.h> 
#include<string.h>

int main(void){

    char n[1001];

    while(scanf("%s",n)!=EOF){         
 
        //保存临时结果，个位在第一个
        char np[1005]={0} ;
 
        //正负号
        int sign=0;
        int len = strlen(n);

        if(n[0]=='-'){

            sign=1; 
        }
         
        //数据总长度
        int dataLen=len-sign;
 
        //从个位开始相加
        int x=0;
        //进位标志
        int y=0;
         
        for(int i=len-1;i>=sign;i--){

            x = n[i]-'0' + n[len-1-i+sign]-'0' + y;
            //更新进位
            y=x/10;
            //保存个位
            np[len-1-i]=x%10;
        }

        //最后再检查一下进位,更新一下数据总长度dataLen
        if(y){

            np[len-sign]=1;
            dataLen++; 
        } 
 
 
        //打印
        if(sign)
            printf("-");

        for(int i=dataLen-1;i>=0;i--)
            printf("%d",np[i]); 

        printf("\n");
    } 

    return 0;
}