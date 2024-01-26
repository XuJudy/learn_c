// 顯示單月日曆

#include <stdio.h>

int main(){

    int days, start;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    for (int i=1; i<start; i++)
        printf("   ");

    for (int j=1; j<=days; j++) {
        
        printf("%2d ", j);
        
        if ((j+start-1)%7 == 0)
            printf("\n");
    }

    printf("\n");

    return 0;
}