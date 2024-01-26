//问题 H: Muniar的胡思乱写【4】——ASCII码
#include<stdio.h>

int main(){

    char ch;
    int num, SUM, sum;  //數字、大寫字母、小寫字母

    num = 0;
    SUM = 0;
    sum = 0; 

    while(scanf("%c", &ch)!=0){

        if(ch=='*') break;

        if(ch>='0' && ch<='9')  num++;
        else if(ch>='A' && ch<='Z')    SUM++;
        else if(ch>='a' && ch<='z') sum++;
    }
    printf("%d,%d,%d\n", num, SUM, sum);

    return 0;
}