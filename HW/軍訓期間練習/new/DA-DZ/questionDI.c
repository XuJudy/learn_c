//问题 DI: 超递增序列（20分）
/*
题目描述
小南有很多长度不同的正整数序列，他发现其中有些序列有一个共同的特点，就是序列中元素排序后，可形成超递增序列。
超递增序列是指后面的数大于前面所有数的和，例如序列{1,3,8,14,29}就是超递增的，因为1<3、1+3<8、1+3+8<14、 1+3+8+14<29。
现在有若干个长度为n（1≤n≤100）的序列，请你帮他判断是否可以排序后形成超递增序列。

输入
多个样例。每个样例包含2行输入：第1行包含一个正整数n(1≤n≤100)，第2行包含n个正整数ai (1 ≤ ai ≤ 106)。
输出
对于每个样例，如果排序后能形成超递增序列则输出Yes，否则输出No。每个样例结果输出占一行。

样例输入
1
2
5
14 8 1 3 29
3
1 2 3 
样例输出
Yes
Yes
No
*/

#include<stdio.h>

void sort(int list[], int n){

    for(int i=n-1; i>=0; i--){

        for(int j=0; j<i; j++){

            if(list[j]>list[j+1]){

                int tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
            }
        }
    }
}

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int sum = 0;
        int flag = 1;
        int number[100] = {0};

        for(int i=0; i<n; i++){

            scanf("%d", &number[i]);
        }

        sort(number, n);

        for(int i=0; i<n; i++){

            if(sum>=number[i]){

                flag = 0;
                break;
            }

            sum = sum + number[i];
        }

        if(flag)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}