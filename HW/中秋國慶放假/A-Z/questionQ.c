//问题 Q: 22-循环-1-整钞换零
#include<stdio.h>

int main(){

    int m;

    while(scanf("%d", &m)!=EOF){

        int way = 0;    //方法數

        for(int i=1; i*5<=m; i++){
            for(int j=1; i*5+j*2<=m; j++){
                for(int k=1; i*5+j*2+k<=m; k++){

                    if(i*5+j*2+k==m)    way++;
                }
            }
        }

        printf("%d\n", way);
    }

    return 0;
}