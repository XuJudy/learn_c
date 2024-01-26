// 表達式由左而右求值

#include<stdio.h>

int main(){

    while(1){

        double A, B;
        double sum = 0;
        char sign;  // 運算符號

        printf("Enter an expression: ");
        scanf("%lf", &A);

        sum = A;

        while((sign=getchar())!='\n'){  // 若不是回車，讀取一組符號及數字

            scanf("%lf", &B);

            if(sign=='+')
                sum = sum + B;
            else if(sign=='-')
                sum = sum - B;
            else if(sign=='*')
                sum = sum * B;
            else if(sign=='/')
                sum = sum / B;
        }

        printf("Value of expression: %.1f\n", sum);
    }

    return 0;
}