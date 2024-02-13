// P2141 [NOIP2014 普及组] 珠心算测验

#include<stdio.h>

void BubbleSort(int data[], int n){

    for(int i=0; i<n; i++){

        for(int j=0; j<i; j++){

            if(data[i]<data[j]){

                int tmp = data[j];
                data[j] = data[i];
                data[i] = tmp;
            }
        }
    }
}

int main(){

    int n, ans;
    int sum = 0;
    int num[150] = {0};
    int add[25000] = {0};

    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%d", &num[i]);
    }

    BubbleSort(num, n);

    for(int i=0; i<n-2; i++){

        for(int j=i+1; j<n-1; j++){

            for(int k=j+1; k<n; k++){
                
                ans = num[k];

                if(ans==num[i]+num[j] && ans!=num[i] && ans!=num[j] && add[ans]==0){

                    sum++;
                    add[ans] = 1;
                }
            }
        }
    }

    printf("%d", sum);

    return 0;
}