//问题 B: 22-输入输出-2-保留余数的除法
#include <stdio.h>

int main(){

    int a, b;

    while(scanf("%d %d",&a, &b) != EOF){

        printf("%d %d\n", a/b, a%b);
    }
    
    return 0;
}