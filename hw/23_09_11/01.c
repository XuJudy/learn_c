//華氏溫度轉換為攝氏溫度及開爾文溫度
#include<stdio.h>

int main(){

    double F, C, K;    //華氏、攝氏、開爾文溫度

    printf("輸入華氏攝氏度(℉) : ");
    scanf("%lf", &F);

    C = (F-32) / 1.8;
    K = C + 273.15;

    printf("對應的攝氏度(℃) : %.2f\n", C);
    printf("對應的開爾文溫度(K) : %.2f\n", K);

    return 0;
}