// 三個月還貸後的剩餘貸款金額

#include<stdio.h>

int main(){

    double loan, rate,  monthly_paymant;
    double frist_month, second_month, third_month;

    printf("Enter amount of lan: ");
    scanf("%lf", &loan);
    printf("Enter intereat rate: ");
    scanf("%lf", &rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &monthly_paymant);

    rate = 100 + rate/12;

    frist_month = loan*rate/100 - monthly_paymant;
    second_month = frist_month*rate/100 - monthly_paymant;
    third_month = second_month*rate/100 - monthly_paymant;

    printf("Balance remaining after frist payment: $%.2f\n", frist_month);
    printf("Balance remaining after secnd payment: $%.2f\n", second_month);
    printf("Balance remaining after third payment: $%.2f\n", third_month);

    return 0;
}