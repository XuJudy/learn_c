// P2615 [NOIP2015 提高组] 神奇的幻方

#include<stdio.h>

int main(){

    int n;
    int N[40][40] = {0};

    scanf("%d", &n);

    int num = 1;
    int row = 1;            // 行: 保存前一次的行
    int column = (n+1)/2;   // 列: 保存前一次的列
    N[row][column] = num++;

    // 開始排列
    while(num<=n*n){

        if(row==1 && column!=n){

            // 更新下一個數的位置
            row = n;
            column++;
        }
        else if(row!=1 && column==n){

            row--;
            column = 1;
        }
        else if(row==1 && column==n){

            row++;
            column;
        }
        else if(row!=1 && column!=n){

            if(N[row-1][column+1]==0){

                row--;
                column++;
            }
            else{

                row++;
                column;
            }
        }

        // 填入數字
        N[row][column] = num++;
    }

    // 輸出
    for(int i=1; i<=n; i++){

        for(int j=1; j<=n; j++){

            printf("%d ", N[i][j]);
        }

        printf("\n");
    }

    return 0;
}