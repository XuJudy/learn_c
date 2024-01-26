// P5715 【深基3.例8】三位数排序

#include<stdio.h>

// 泡沫排序(升序)
void BubbleSort(int data[], int len){

    for(int i=0; i<len-1; i++){

        int flag = 1;

        for(int j=0; j<len-i-1; j++){

            if(data[j]>data[j+1]){

                int tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;

                flag = 0;
            }
        }

        if(flag)
            break;
    }
}

int main(){

    int num[4] = {0};

    while(scanf("%d%d%d", &num[0], &num[1], &num[2])!=EOF){

        BubbleSort(num, 3);

        for(int i=0; i<3; i++){

            printf("%d ", num[i]);
        }

        printf("\n");
    }

    return 0;
}