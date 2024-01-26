//22-数组-2-打印幻方
/*
    题目描述
    小南最近迷上了做幻方，n*n幻方的特点是：将正整数1~n*n个排列成一个n*n的正方形，使得每一行，每一列，还有两条斜线上数字的和都相等。小南仔细研究了一下幻方的排列，发现了一个规律，你知道他是怎么利用这个规律编程序实现n*n的幻方的吗？
    
    输入
    多样例。每个样例输入一行，包括一个奇数n(0<n<30)。当输入的n为0时结束样例输入。
    输出
    对每一个输入的奇数n，输出一个n*n的幻方。
    输出格式要求：以n行n列矩阵形式输出，同一列的整数右对齐，在保证同列右对齐的前提下同一行的整数之间用最少的空格分开，第一列数的左边除了对齐的空格外没有多余的空格。两个幻方之间有一个空行。

    样例输入
    5
    1
    0
    样例输出
    11 18 25  2  9
    10 12 19 21  3
    4  6 13 20 22
    23  5  7 14 16
    17 24  1  8 15

    1
*/

#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        if(n==0)    break;

        int x, y;
        int position[30][30] = {0}; //初始化

        x = n;
        y = (n+1)/2;

        position[x][y] = 1;   //定位 1

        /*
            (1.1)   (1.2)   (1.3)
            (2.1)   (2.2)   (2.3)
            (3.1)   (3.2)   (3.3)        
        */

        //開始填數字
        for(int i=2; i<=n*n; i++){

           if(i%n==1){  //餘數為一，向上

                x--;
           }
           else{    //其他的向右下

                x++;
                y++;
           }

            //判斷x是否超出規格
           if(x>n)     x = 1;
           else if(x<=0) x = n;
           
            //判斷y是否超出規格
           if(y>n)      y = 1;

            //賦值
            position[x][y] = i;
        }

        int num_out = 1;    //紀錄當前行輸出多少數字了

        //輸出
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){

                //以最高位數進行歸納
                if(n<=3)
                    printf("%d", position[i][j]);   //向右對齊
                else if(n<=9)
                    printf("%2d", position[i][j]);
                else
                    printf("%3d", position[i][j]);
            
                if(num_out == n){   //當行輸出已達上限->行
                    
                    num_out = 1;
                    printf("\n");
                }
                else{   //當行未達上限->空格
                    
                    num_out++;
                    printf(" ");
                }
            }
        }
    
        printf("\n");
    }

    return 0;
}