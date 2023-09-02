//04-4. 猜数字游戏
#include<stdio.h>

int main(){

    int num, N, x;

    while (scanf("%d %d", &num, &N))
    {
    
        int sum= 0;
        
        if(num < 0)
        {
            printf("Game Over\n");
            break;
        }
        if(N < 0) 
        {
            printf("Game Over\n");
            break;
        }

        for(int i=0; i<N; i++){

            scanf("%d", &x);

            if(x < 0)
            {
                printf("Game Over\n");
                sum = N;
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
                break;
            }
        }

        if(sum == 0)    printf("Bingo!\n");
        else if(sum<3)  printf("Lucky You!\n");
        else if(sum > N-1)   printf("Game Over\n");
    }
    
    return 0;
}