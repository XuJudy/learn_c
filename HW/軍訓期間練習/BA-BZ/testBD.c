//问题 BE: 21级期末机试-格式转换

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