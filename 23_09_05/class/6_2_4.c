//數 數據類型最大數
#include<stdio.h>

int main(){

    int a = 0;
    int b = 0;

    while (++a>0)
        ;
    
    printf("int數據類型最大數的:%d\n", a-1);

    b++;

    while ((a=a/10)!=0){

        b++;
    }
    
    printf("int數據類型最大的數的數位是:%d", b);

    return 0;
}