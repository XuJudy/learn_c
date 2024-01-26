//P5704 【深基2.例6】字母转换
#include<stdio.h>

int main(){

    char a;

    scanf("%c", &a);

    if(a<97){   //大寫

        printf("%c", a+32);
    }
    else{   //小寫

        printf("%c", a-32);
    }
    
    return 0;
}