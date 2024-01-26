//问题 G: 22-循环-2-七夕节
#include<stdio.h>

int main(){

    int t, n, sum, i;   //一次幾組測資、輸入的數字、因子和

    while(scanf("%d", &t)!=EOF){

        for(int j=0; j<t; j++){

            scanf("%d", &n);
            
            sum = 1;

            for(i=2; i*i<n; i++){

                if(n%i==0)
                    sum = sum + i + n/i;
            }
            
            //若i+i=n，在for迴圈中會被忽略，故需再加一
            if(i*i==n)  sum = sum + i;
        
            printf("%d\n", sum);
        }
    }

    return 0;
}