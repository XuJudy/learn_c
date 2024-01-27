// 模擬二維數組
// arr[i] = *(arr+i)

#include<stdio.h>

int main(){

    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {2, 3, 4, 5};
    int arr3[4] = {3, 4, 5, 6};

    int* parr[3] = {arr1, arr2, arr3};

    for(int i=0; i<3; i++){

        for(int j=0; j<4; j++){

            printf("%d ", *(parr[i]+j));
        }

        printf("\n");
    }

    printf("\n");

    for(int i=0; i<3; i++){

        for(int j=0; j<4; j++){

            printf("%d ", parr[i][j]);
        }

        printf("\n");
    }

    return 0;
}