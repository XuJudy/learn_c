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

    int n, d, r;

    while(scanf("%d%d%d", &n, &d, &r)!=EOF){

        int afternoon[100], night[100];
        int sum = 0;

        for(int i=0; i<n; i++){

            scanf("%d%d", &afternoon[i], &night[i]);
        }

        BubbleSort(afternoon, n);
        BubbleSort(night, n);
        
        for(int i=0; i<n; i++){

            if(afternoon[i]+night[n-1-i]>d){

                sum = sum + (afternoon[i]+night[n-1-i]-d)*r;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}