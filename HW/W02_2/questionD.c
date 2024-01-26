//问题 D: 22-循环-1-输入输出练习1
#include <stdio.h>

int main(){

    int a, b, sum;

    while(scanf("%d%d",&a, &b) != EOF){

        sum = a + b;

        printf("%d\n", sum);
    }
    
    return 0;
}