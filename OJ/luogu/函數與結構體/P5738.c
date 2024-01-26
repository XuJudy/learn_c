// P5738 【深基7.例4】歌唱比赛

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

struct Player{

    int grade[25];
    double sum;
    double ave;
} player[150];

int main(){

    int n, m;
    scanf("%d%d", &n, &m);

    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            scanf("%d", &player[i].grade[j]);
        }

        BubbleSort(player[i].grade, m);

        for(int j=1; j<m-1; j++){

            player[i].sum = player[i].sum + player[i].grade[j]; 
        }

        player[i].ave = player[i].sum/(m-2);
    }

    double max = player[0].ave;

    for(int i=1; i<n; i++){

        if(player[i].ave>max)
            max = player[i].ave;
    }

    printf("%.2f", max);

    return 0;
}