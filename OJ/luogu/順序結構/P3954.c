//P3954 [NOIP2017 普及组] 成绩
#include<stdio.h>

int main(){

    int A, B, C, grade;

    scanf("%d %d %d", &A, &B, &C);
    
    grade = 0.2*A+0.3*B+0.5*C;

    printf("%d", grade);
    
    return 0;
}