// 问题 F: 多项式输出
/*
    输入
    输入共有2行
    第一行1个整数n，表示一元多项式的次数。
    第二行有n+1个整数，其中第i个整数表示第n−i+1次项的系数，每两个整数之间用空格隔开。
    输出
    输出共1行，按题目所述格式输出多项式。
    样例输入 Copy
    5 
    100 -1 1 -3 0 10
    样例输出 Copy
    100x^5-x^4+x^3-3x^2+10
*/

#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int x;

        for(int i=n; i>=0; i--){

            scanf("%d", &x);

            if(x==0)
                continue;
            else if(i==1){

                if(x==-1)
                    printf("-x");
                else if(x==1)
                    printf("+x");
                else if(x>0)
                    printf("+%dx", x, i);
                else
                    printf("%dx", x);
            }
            else if(i==0){  // 常數項
   
                if(x>0)
                    printf("+%d", x);
                else
                    printf("%d", x);
            }
            else if(i==n){  // 最高次項
                
                if(x==-1)
                    printf("-x^%d", i);
                else if(x==1)
                    printf("x^%d", i);
                else
                    printf("%dx^%d", x, i);
            }
            else{

                if(x==-1)
                    printf("-x^%d", i);
                else if(x==1)
                    printf("+x^%d", i);
                else if(x>0)
                    printf("+%dx^%d", x, i);
                else
                    printf("%dx^%d", x, i);
            }
        }
        printf("\n");
    }

    return 0;
}