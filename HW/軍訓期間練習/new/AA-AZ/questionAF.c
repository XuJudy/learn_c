//问题 AF: switch
/*
    题目描述
    计算下面函数的值
    y=cos(x+3.0)  当0<=x<10;
    y=(cos(x+7.5))^2 当10<=x<20;
    y=(cos(x+4.0))^4 当20<=x<30;
    ^表示幂运算，如x^2表示x的平方
    如果x不在定义域内，输出“Not define”，否则输出y，保留5位小数

    输入
    多组样例，输入一个整数
    输出
    输出响应结果

    样例输入 Copy
    40
    样例输出 Copy
    Not define
*/

#include<stdio.h>
#include<math.h>

int main(){

    double x;

    while(scanf("%lf", &x)!=EOF){

        double y;
        int flag = 0;   //幾次方

        //y=cos(x+3.0)  当0<=x<10;
        if(x>=0 && x<10){

            x = x + 3.0;
            flag = 1;
        }
        
        //y=(cos(x+7.5))^2 当10<=x<20;
        else if(x>=10 && x<20){

            x = x + 7.5;
            flag = 2;
        }
        
        //y=(cos(x+4.0))^4 当20<=x<30;
        else if(x>=20 && x<30){

            x = x + 4.0;
            flag = 4;
        }

        else
            flag = 0;
        
        y = cos(x);

        if(flag)
            printf("%.5f\n", pow(y, flag));
        else
            printf("Not define\n");
    }

    return 0;
}