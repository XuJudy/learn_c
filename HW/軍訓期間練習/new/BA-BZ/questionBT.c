//问题 BT: 21级期末机试-实数相加（10分）
/*
题目描述
C语言就要期末考试了，经过一学期的学习，小南学会了分数相加、分数相减、大整数相加，可就是没有尝试过将两个最大达400位的实数相加。
在调试过程中，小南遇到了很多问题，一直解决不了。你能帮他编写一个程序实现两个实数相加吗？

输入
多组样例。每行输入一个样例包括两个用空格分开的实数x和y，其中x和y是长度不大于400位的非负实数。注意，
非负实数中也可能包括非负整数，正整数会省略小数点和后面的0，只包括整数部分。

输出
对于每一行输入，输出两个实数x和y相加的结果。输出结果中整数部分的前面和小数部分的末尾不输出多余的0；
如果是整数，不输出小数点和小数点后面的0。每个输出占一行。

样例输入 Copy
1.1 2.9
1.1111111111 2.3444323343 
1 1.1
1.1111 1.1889
样例输出 Copy
4
3.4555434454 
2.1
2.3
*/

#include<stdio.h>
#include<string.h>


int Max(int x, int y){

    int max = x;
    if(y>max)   max = y;

    return max;
}

int main(){

    char x[500] = {0};
    char y[500] = {0};
    char sum[500] = {0};

    while(scanf("%s%s", x, y)!=EOF){

        //兩數長度
        int len_x = strlen(x);
        int len_y = strlen(y);

        //兩數小數點的位置->等於0表示為整數
        int set_x = 0;
        int set_y = 0;

        //暫存小數點的位置
        int set_dot = 0;

        //最長位數
        int max = len_x;
        if(len_y>max)   max = len_y;

        //靠右對齊
        if(len_x>len_y){

            int move = len_x - len_y;

            for(int i=len_y-1; i>=0; i--){

                y[i+move] = y[i];
            }

            for(int i=0; i<move; i++)
                y[i] = '0';
        }
        else if(len_x<len_y){

            int move = len_y - len_x;

            for(int i=len_x-1; i>=0; i--){

                x[i+move] = x[i];
            }

            for(int i=0; i<move; i++)
                x[i] = '0';
        }
        
        //找小數點的位置
        for(int i=0; i<max; i++){

            if(x[i]=='.')
                set_x = i;
                
            if(y[i]=='.')
                set_y = i;
        }

        //小數點對齊
        if(set_x!=0 && set_y!=0){   //無整數

            if(set_x>set_y){    //y往後移

                set_dot = set_x;
                int move = set_x - set_y;

                for(int i=len_y-1; i>=0; i--){

                    y[i+move] = y[i];
                }

                for(int i=0; i<move; i++)
                    y[i] = '0';

                len_y = len_y + move;
            }
            else if(set_x<set_y){    //x往後移

                set_dot = set_y;
                int move = set_y - set_y;

                for(int i=len_x-1; i>=0; i--){

                    x[i+move] = x[i];
                }

                for(int i=0; i<move; i++)
                    x[i] = '0';

                len_x = len_x + move;
            }

            //去掉小數點
            for(int i=set_dot; i<max; i++){

                x[i] = x[i+1];
                y[i] = y[i+1];
            }

            //更新位數
            len_x--;
            len_y--;
            max = Max(len_x, len_y);
        }

        //相加
        for(int i=max-1; i>=0; i--){
            
            if(x[i]=='.')   sum[i] = '.';
            else{

                sum[i] = (sum[i] + (x[i]-'0') + (y[i]-'0')) + '0';

                if(sum[i]>=10 && i>0){

                    sum[i] = sum[i] - 10;
                    sum[i-1] = sum[i-1] + 1;
                }
            }
        }

        int flag = 0;
        if(sum[0]>=10){
            
            sum[0] = sum[0] - 10;
            flag++;
        }
        
        /*
        //整數?
        int mark = 0;
        for(int i=0; i<max; i++){

            if(sum[i]=='.') mark++;

            if(sum[i]!=0 && mark==1){   

                mark = 0;
            }
            //mark=1是小數 mark=0是整數
        }
        */

       //輸出
        for(int i=0; i<max; i++){

            if(flag)
                printf("%d", flag);

            printf("%s", sum[i]);
        }

        printf("\n");
    }

    return 0;
}