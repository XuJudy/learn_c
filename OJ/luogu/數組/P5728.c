// P5728 【深基5.例5】旗鼓相当的对手

#include<stdio.h>
#include<math.h>

int main(){

    int n;
    int cnt = 0;
    int score[10000][5] = {0};

    scanf("%d", &n);

    for(int i=0; i<n; i++){       // 輸入

        int sum = 0;

        for(int j=0; j<3; j++){

            scanf("%d", &score[i][j]);

            sum = sum + score[i][j];
        }

        score[i][3] = sum;
    }

    for(int i=0; i<n-1; i++){     // 比較

        for(int k=i+1; k<n; k++){

            int flag = 0;

            // 總分分差
            if(abs(score[i][3]-score[k][3])<=10){

                // 單科分差
                for(int j=0; j<3; j++){

                    if(abs(score[i][j]-score[k][j])<=5)   flag++;
                }
            }
            
            if(flag==3) cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}