// P2911 [USACO08OCT] Bovine Bones G

#include<stdio.h>

int main(){

    int s1, s2, s3;
    int max = 0;
    int cnt[10000] = {0};

    scanf("%d%d%d", &s1, &s2, &s3);

    // 計算每個和出現次數
    for(int i=1; i<=s1; i++){

        for(int j=1; j<=s2; j++){

            for(int k=1; k<=s3; k++){

                cnt[i+j+k]++;

                if(i+j+k>max)   max = i + j + k;
            }
        }
    }

    // 找出現最多次的和(2~max)
    int maxnum = 2;
    int maxcnt = cnt[1];
    for(int i=2; i<max; i++){

        if(cnt[i]>maxcnt){

            maxnum = i;
            maxcnt = cnt[i];
        }
    }

    printf("%d", maxnum);

    return 0;
}