// P2550 [AHOI2001] 彩票摇奖

#include<stdio.h>

int main(){

    int n;
    int trueNum[10] = {10};
    int prize[10] = {0};

    scanf("%d", &n);

    // 中獎號碼
    for(int i=0; i<7; i++){

        scanf("%d", &trueNum[i]);
    }

    for(int i=0; i<n; i++){

        int flag = 0;

        for(int j=0; j<7; j++){

            int myNum;

            scanf("%d", &myNum);

            // 對獎中...
            for(int k=0; k<7; k++){

                if(trueNum[k]==myNum){  // 中獎了
                    
                    flag++;
                    break;
                }
            }
        }

        prize[7-flag]++;
    }

    // 輸出中獎情況
    for(int i=0; i<7; i++){

        printf("%d ", prize[i]);
    }

    return 0;
}