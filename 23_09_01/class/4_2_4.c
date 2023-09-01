//整數逆序
#include<stdio.h>

int main(){

    int x, number;

    for (int i = 0; i < 3; i++){
        
        scanf("%d", &x);

        do
        {
            number = x % 10;
            x /=10;

            printf("%d", number);
        } while (x>0);
        
        printf("\n");
    }

    return 0;
}