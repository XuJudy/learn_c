//1074: 年?排序(未完成)
#include<stdio.h>

int main(){

    int n, age;
    int arr[2000000];

    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%d", &age);
        arr[i] = age;
    }

    for(int i=0; i<n; i++){

        for(int j=1; j<i; j++){

            if(arr[j]>arr[j+1]){

                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = arr[j];
            }
        }
    }

    for(int i=0; i<n; i++){

        printf("%d ", arr[i]);
    }

    return 0;
}