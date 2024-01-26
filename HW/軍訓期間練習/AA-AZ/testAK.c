#include<stdio.h>
#include<string.h>

int main(){

    //对于每个样例，都需要从头开始计算，通过预计算减少每次计算的时间
    char data[10020]={0};
    int st=1;
    while(strlen(data)<10000){

        sprintf(data+strlen(data),"%d",st++);
    }

    int i;

    while(scanf("%d", &i)!=EOF){

        printf("%c\n",data[i-1]);
    }

    return 0;
}