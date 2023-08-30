//Ch2 編程練習7.

#include<stdio.h>

void two(){
    printf("two\n");
}

void three(){
    printf("three\n");
}


void one_three(){   //1-3
    printf("starting now:\none\n");
    two();  //使用函式two輸出2
    three();    //使用函式three輸出3
    printf("done!");
}

int main(){

    one_three();

    return 0;
}