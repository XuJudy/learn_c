//问题 R: 22-循环-1-平方和与立方和
#include<stdio.h>

int main(){

    int m, n;

    while(scanf("%d%d", &m, &n)!=EOF){

        int sum_even = 0;   //偶數平方和
        int sum_odd = 0;    //奇數立方和

        if(m%2==0){ //若首項為偶數

            for(int i=m; i<=n; i=i+2)
                sum_even = sum_even + i*i;
            
            for(int i=m+1; i<=n; i=i+2)
                sum_odd = sum_odd + i*i*i;
        }

        else{   //首項為奇數

            for(int i=m; i<=n; i=i+2)
                sum_odd = sum_odd + i*i*i;

            for(int i=m+1; i<=n; i=i+2)
                sum_even = sum_even + i*i;
        }

        printf("%d %d\n", sum_even, sum_odd);
    }

    return 0;
}