// 卡牌排序（20分）
/*
    题目描述
    将所有卡牌按照牌面数字的奇偶性分类并由小到大排序好。

    输入
    多个样例。每个样例包含2行输入： 
    第1行输入一个正整数n(2≤n≤10000)表示卡牌数的张数
    第2行输入n个正整数ai (ai 满足int类型范围)表示卡牌牌面上的数字，奇数和偶数的个数大于等于1。
    输出
    每个样例输出2行:
    第1行是由小到大排序好的奇数数字卡牌
    第2行是由小到大排序好的偶数数字卡牌
    数字之间用1个空格分开。每两个样例的输出结果之间用1个空行分开

    样例输入 Copy
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
#include<string.h>

// 泡沫排序(升序)
void BubbleSort(int data[], int len){

    for(int i=0; i<len-1; i++){

        int flag = 1;

        for(int j=0; j<len-i-1; j++){

            if(data[j]>data[j+1]){

                int tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;

                flag = 0;
            }
        }

        if(flag)
            break;
    }
}

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int num;

        int odd[10000] = {0};   // 奇數
        int even[10000] = {0};   // 偶數
        int sum_odd = 0;
        int sum_even = 0;

        for(int i=0; i<n; i++){

            scanf("%d", &num);

            if(num%2==0){

                even[sum_even] = num;
                sum_even++;
            }
            else if(num%2==1){

                odd[sum_odd] = num;
                sum_odd++;
            }
        }

        BubbleSort(odd, sum_odd);
        BubbleSort(even, sum_even);

        for(int i=0; i<sum_odd; i++){

            printf("%d ", odd[i]);
        }
        printf("\n");
        for(int i=0; i<sum_even; i++){

            printf("%d ", even[i]);
        }
        printf("\n\n");
    }

    return 0;
}