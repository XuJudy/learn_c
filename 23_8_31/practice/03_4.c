//03-4.成績轉換
#include<stdio.h>

int main(){

    int score;

    for (int i=0; i<10; i++){

        scanf("%d", &score);

        //if-else
        if(score>=90)  
            printf("A\n");
        else if(score>=80)
            printf("B\n");
        else if(score>=70)
            printf("C\n");
        else if(score>=60)
            printf("D\n");
        else
            printf("E\n");
    
        //swich-case
        score/=10;

        switch (score){
            case 10:
            case 9:
                printf("A\n");
                break;
            case 8:
                printf("B\n");
                break;
            case 7:
                printf("C\n");
                break;
            case 6:
                printf("D\n");
                break;
            default:
                printf("E\n");
                break;
        }
    }
    

    return 0;
}