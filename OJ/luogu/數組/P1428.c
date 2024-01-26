//

#include<stdio.h>

int main(){

    int n;
    int fish[150] = {0};
    int sum[150] = {0};

    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%d", &fish[i]);
    }

    for(int i=0; i<n; i++){

        for(int j=0; j<i; j++){

            if(fish[i]>fish[j])
                sum[i]++;
        }

        printf("%d ", sum[i]);
    }

    return 0;
}