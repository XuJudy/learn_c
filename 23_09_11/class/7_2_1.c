//函數原型
#include<stdio.h>

void sum(int start, int end);   //原型聲明: 告訴編譯器函數長怎樣
/* void sum(int , int );     這樣也可行 */

int main(){

    sum(1,10);
    sum(20,30);
    sum(35,45);

    return 0;
}

void sum(int start, int end){   //函數定義: 實際函數頭

    int sum = 0;

    for(int i=start; i<=end; i++){

        sum = sum + i;
    }

    printf("%d\n", sum);
}

/* 以下無法編譯:
int main(){

    sum(1,10);
    sum(20,30);
    sum(35,45);

    return 0;
}

void sum(int start, int end){   //函數定義

    int sum = 0;

    for(int i=start; i<=end; i++){

        sum = sum + i;
    }

    printf("%d\n", sum);
}
*/