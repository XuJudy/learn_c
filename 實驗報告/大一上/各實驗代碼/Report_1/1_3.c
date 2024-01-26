// 編寫程序實現對用户輸入的產品信息進行格式化

#include<stdio.h>

int main(){

    int num;
    double price;
    char date[20];

    printf("Enter item number: ");
    scanf("%d", &num);
    printf("Enter unit price: ");
    scanf("%lf", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%s", date);

    printf("Item    Unit    Purchase\n");
    printf("        Price   Date\n");
    printf("%-8d$%-7f%s\n", num, price, date);

    return 0;
}