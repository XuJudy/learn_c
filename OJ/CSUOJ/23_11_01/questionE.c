//问题 E: 排列
/*
    题目描述
    lcy又对数字的列产生了兴趣：
    现有四张卡片，用这四张卡片能排列出很多不同的4位数，要求按从小到大的顺序输出这些4位数。

    输入
    每组数据占一行，代表四张卡片上的数字（0<=数字<=9）
    输出
    对每组卡片按从小到大的顺序输出所有能由这四张卡片组成的4位数，千位数字相同的在同一行，同一行中每个四位数间用空格分隔。
    
    样例输入 Copy
    1 2 3 4
    样例输出 Copy
    1234 1243 1324 1342 1423 1432
    2134 2143 2314 2341 2413 2431
    3124 3142 3214 3241 3412 3421
    4123 4132 4213 4231 4312 4321
    提示
    可能出现相同数字
*/

#include<stdio.h>

void sort(int list[]){

    for(int i=0; i<4; i++){

        for(int j=0; j<4-i-1; j++){

            if(list[j]>list[j+1]){

                int tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
            }
        }
    }
}

int main(){

    int num[4];
    int out[16];

    for(int i=0; i<4; i++){

        scanf("%d", &num[i]);
    }

    sort(num);

    printf("%d", num[0]);


    return 0;
}