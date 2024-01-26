//问题 CO: 卡牌排序（20分）
/*
    题目描述
    小南有一个习惯，他喜欢将所有卡牌按照牌面数字的奇偶性分类并由小到大排序好，由于他最近实验课非常多，他想让优秀的你帮帮他。

    输入
    多个样例。每个样例包含2行输入： 
    第1行输入一个正整数n(2≤n≤10000)表示卡牌数的张数，第2行输入n个正整数ai (ai 满足int类型范围)表示卡牌牌面上的数字，奇数和偶数的个数大于等于1。
    输出
    每个样例输出2行，第1行是由小到大排序好的奇数数字卡牌，第2行是由小到大排序好的偶数数字卡牌，数字之间用1个空格分开。每两个样例的输出结果之间用1个空行分开。
    
    样例输入
    5
    1 6 9 7 2
    2
    6 101
    样例输出 Copy
    1 7 9
    2 6

    101
    6 
*/

#include<stdio.h>

void sort(int list[], int sum){ //排序(升序)

    for(int j=0; j<sum; j++){
        
        for(int i=1; i<sum; i++){

            if(list[i]<list[i-1]){

                int tmp = list[i-1];
                list[i-1] = list[i];
                list[i] = tmp;
            }
        }
    }
}

int main(){

    int n, number, flag;    //輸入n個數字、數字為number、用flag來標記何時換行

    while(scanf("%d", &n)!=EOF){

        int sum_odd = 0;    //奇數數量
        int sum_even = 0;   //偶數數量
        int odd[10000] = {0};    //奇數
        int even[10000] = {0};   //偶數

        for(int i=0; i<n; i++){ //輸入 & 分類建表

            scanf("%d", &number);

            if(number%2==0){    //建偶數的表

                even[sum_even] = number;
                sum_even++;
            }
            else{               //建奇數的表

                odd[sum_odd] = number;
                sum_odd++;
            }
        }

        sort(odd, sum_odd);     //奇數排序
        sort(even, sum_even);   //偶數排序

        flag = 0;   //初始化

        for(int i=0; i<sum_odd; i++){   //輸出奇數

            printf("%d", odd[i]);

            if(flag<sum_odd){

                flag++;
                printf(" ");
            }
        }

        flag = 0;   //再次初始化
        printf("\n");

        for(int i=0; i<sum_even; i++){  //輸出偶數

            printf("%d", even[i]);

            if(flag<sum_even){

                flag++;
                printf(" ");
            }
        }

        printf("\n\n");
    }

    return 0;
}