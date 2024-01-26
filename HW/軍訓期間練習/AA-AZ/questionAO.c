//问题 AO: 20级期末机试1-分数加减（20分）
/*
    题目描述
    中南CC君最害怕分数的减法运算，因为对输出结果有特别的要求。
    首先是要对分数化简，然后是假分数要写成一个整数+真分数的形式，更麻烦的是，
    当结果是负的假分数时，要求写成一个负整数+正的真分数的形式。你能帮帮他吗？

    输入
    多组样例。每行一个样例以a/b-c/d或a/b+c/d的形式输入（a,b,c,d都是小于10000的正整数）。
    输出
    对于每一个输入的样例，输出一个结果。注意对结果要化简。
    如果是整数就直接输出，不需要以分数形式输出，
    如果是真分数就直接以e/f的形式输出，
    如果假分数如5/3，则以1+2/3的形式输出，
    如果是-5/3，则以-2+1/3的形式输出。
    
    样例输入
    1/1-2/3
    1/2+2/3
    1/2-8/2
    样例输出
    1/3
    1+1/6
    -4+1/2
*/

#include<stdio.h>

int gcd(int x, int y){  //最大公因數

    int gcd = 1;

    if(x>y){

        int tmp = x;
        x = y;
        y = tmp;
    }

    for(int i=2; i<=x; i++){

        if(x%i==0 && y%i==0)    gcd = i;
    }

    return gcd;
}

void output(int num, int e, int f){ //輸出

    if(f==1)    //分母為1，輸出整數
        printf("%d", num+e);
    else        //分母不為1，輸出分數
        printf("%d+%d/%d", num, e, f);
}

int main(){

    int a, b, c, d; //輸入的分子、分母
    int e, f;       //答案的分子、分母
    int max;        //最大公因數
    char mark;      //+ or -

    while(scanf("%d/%d%c%d/%d", &a, &b, &mark, &c, &d)!=EOF){

        int flag = 1;   //標記是否為負數，flag=1為正數，flag=-1為負數, flag=0為0

        if(mark=='+'){          //加法

            f = b*d;
            e = a*d + c*b;
        }
        else if(mark=='-'){     //減法

            f = b*d;
            e = a*d - c*b;

            if(e==0){
                
                printf("0");
                flag = 0;
            }
            else if(e<0){
                
                flag = -1;
                e = e*(-1);
            }
        }

        //約分
        max = gcd(e, f);
        f = f/max;
        e = e/max;

        if(e<=f && flag!=0){    //真分數

            if(flag==-1)    printf("-");    //輸出負號

            if(f==1)
                printf("%d", e);
            else
                printf("%d/%d", e, f);

        }
        else if(e>f && flag!=0){       //假分數

            int num;    //帶分數

            if(flag==1){            //正分數

                num = e/f;
                e = e%f;
            }
            else if(flag==-1){      //負分數

                num = e/f + 1;
                e = f - e%f;
        
                printf("-");        //輸出負號
            }

            output(num, e, f);
        }

        printf("\n");
    }

    return 0;
}