//06-0. 混合类型数据格式化输入
#include<stdio.h>

int main(){

    float f1, f2;
    int i;
    char ch;

    scanf("%f %d %c %f", &f1, &i, &ch, &f2);

    printf("%c %d %.2f %.2f", ch, i, f1, f2);

    return 0;
}