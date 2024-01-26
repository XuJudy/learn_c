//1013: 22-循环-2-美丽数
#include<stdio.h>

int main(){

    int arr[100000];
    int j = 1;
    int i = 3;
    int n;

    while(j<=100000){

        if( i%3==0 || i%5==0 ){

            arr[j] = i;
            j++;
        }

        i++;
    }

    while(scanf("%d", &n)!=EOF){

        printf("%d\n", arr[n]);
    }

    return 0;
}