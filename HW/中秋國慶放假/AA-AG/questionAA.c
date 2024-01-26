//问题 AA: 22-循环-1-偶数平方值
#include<stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    for(int i=2; i*i<=n; i=i+2){

        printf("%d\n", i*i);
    }

    return 0;
}