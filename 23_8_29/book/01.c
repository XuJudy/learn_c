#include<stdio.h>

int main(void){

    float weight;
    float value;

    printf("Are you worth your weught in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    scanf("%f", &weight);   //獲取程式輸入

    value = 1700.0 * weight * 14.5833;

    printf("Your weight in platinum is worth $%.2f.\n", value);     //%f處理浮點數  .2為輸出至小數點後第二位
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    getchar();  //讀取Enter的換行字符
    getchar();  //讓程序暫停

    return 0;
}