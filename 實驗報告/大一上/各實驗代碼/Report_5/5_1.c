// 用指针变量编写简化一个分数的函数

#include <stdio.h>

int gcd(int a, int b){

    int remainder;

    while(b!=0){
    
        remainder = a%b;
        a = b;
        b = remainder;
    }

    return a;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){

    int common_divisor = gcd(numerator, denominator);
    *reduced_numerator = numerator/common_divisor;
    *reduced_denominator = denominator/common_divisor;
}

int main(){

    int numerator, denominator, reduced_numerator, reduced_denominator;
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);
    return 0;
}