//1093: 22-数组-2-数制转换
/*
题目描述
小南想编写一个正整数m的任意n进制转换为p进制正整数t的程序。
其中m为不超过int类型的正整数，转换后的p进制正整数t不超过20位，n,p均为2-10之间的正整数。 
程序的输入形式为：m<n>p，表示把n进制的整数m转换为p进制输出，输出形式为： m<n>=t<p>。
例如：  输入为：48<10>8
        输出结果为：48<10>=60<8>

说明：48<10>8表示将10进制数48，转换成8进制数输出，转换后的8进制数为60。 

输入
多组样例。每个测试样例输入一行字符串，形式如m<n>p
输出
对于每组样例，输出数制转换后的结果，形式如 m<n>=t<p>，具体格式见样例输出。每个输出占一行。

样例输入 Copy
48<10>8
44<7>8
样例输出 Copy
48<10>=60<8>
44<7>=40<8>
*/

#include<stdio.h>

int change(int num, int x){

    int len = 0;
    int sum = 0;
    int list[20] = {0};

    while(num>0){

        list[len] = num%x;
        num = num/x;
        len++;
    }

    for(int i=0; i<len; i++){

        num = num*10 + list[i];
    }

    return num;
}

int toTen(int x, int y){

    int num = 0;
    int len = 0;
    int list[100] = {0};

    while(x>0){

        list[len] = x%10;
        x = x/10;
        len++;
    }

    for(int i=0; i<len; i++){

        for(int j=0; j<i; j++){

            list[i] = list[i]*y;
        }
    }

    for(int i=0; i<len; i++){

        num = list[i] + num*10;
    }

    return num;
}

int main(){

    int x, y;   //x進制轉為y進制
    int num;    //需轉進制的數字

    while(scanf("%d<%d>%d", &num, &x, &y)!=EOF){

        printf("%d<%d>=", num, x);

        if(x==10){  //10進制開始轉換

            change(num, y);
        }
        else{   //非10進制開始

            toTen(num, x);
            change(num, y);
        }

        printf("%d<%d>\n", num, y);
    }

    return 0;
}