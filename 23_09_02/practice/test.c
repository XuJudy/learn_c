#include<stdio.h>

int main(){

    int num, N, x;

    while (scanf("%d %d", &num, &N))
    {
        printf("num=%d N=%d\n", num, N);
        int sum= 0;
        
        if(num < 0) break;
        if(N < 0) break;

        for(int i=0; i<N; i++){

            scanf("%d", &x);

            if(x < 0)
            {
                printf("Game Over\n");
                break;
            }
            else if(x > num){
                printf("Too big\n");
                sum++;
            }
            else if (x < num){
                printf("Too small\n");
                sum++;
            }
            else{
                printf("Good Guess!\n");
                break;
            }

            printf("num=%d i=%d x=%d sum=%d\n", num, i, x, sum);
        }

        if(sum > N-1)   printf("Game Over\n");
    }
    
    return 0;
}