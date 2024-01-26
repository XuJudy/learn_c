// 找出2~5000中满足条件的数x：x是素数且x的每位数字是素数、每位数字之和是素数

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n){

    if(n <= 1)
        return false;

    for(int i=2; i*i<=n; i++) {
        if (n%i==0)
            return false;
    }

    return true;
}

bool is_prime_digit(int n){ // 每位數字是素數

    int digit;

    while(n>0){

        digit = n%10;

        if (!is_prime(digit))
            return false;

        n = n/10;
    }

    return true;
}

bool is_prime_digit_sum(int n){ // 每位數字之和是素數

    int sum = 0;

    while(n>0){

        sum = sum + n%10;
        n = n/10;
    }

    return is_prime(sum);
}

int main(){

    for (int i=2; i<=5000; i++){

        if (is_prime(i) && is_prime_digit(i) && is_prime_digit_sum(i)){

            printf("%d\n", i);
        }
    }

    return 0;
}