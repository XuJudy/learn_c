//幸运儿
/*
    题目描述
    n 个人围成一圈, 并依次编号1～n，。
    从编号为1的人开始，按顺时针方向每隔一人选出一个，
    剩下的人重新围成一圈，如此循环直到剩下两人，这剩下的两人就是幸运儿。
    如果你想成为最后两个幸运儿，请问开始时应该站在什么位置？（设3<=n<=50）
    
    输入
    有多个测试序列。每行是开始时的人数n
    输出
    第1行是选出顺序，
    第2行是两名幸运儿的开始位置（按升序排列），位置编号之间用一个空格分开。
*/

#include<stdio.h>

int main(){

    int n, num;
    int flag;   //標記掠過幾位

    while(scanf("%d", &n)!=EOF){

        int i = 1;

        int arr[51];

        for(int j=0; j<=50; j++){

            arr[j] = 1;
        }

        num = n;
        flag = 0;

        while(num>2){

            while(i<=n){

                if(arr[i]==1 && flag==1){   //仍存在 與上一個隔一: 可刪除

                    arr[i] = 0;
                    flag = 0;
                    num--;

                    printf("%d ", i);

                    i++;
                }
                else if(arr[i]==1 && flag==0){  //仍存在 但與上一個沒隔一: 不可刪除

                    i++;
                    flag = 1;
                }
                else{   //已不存在
                    
                    i++;
                }
            }

            while(i>n)  {   //一圈結束 由1從頭開始
                
                i = 1;
                flag = 0;
            }
        }

        printf("\n");

        for(int j=1; j<=n; j++){

            if(arr[j]==1)   printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}