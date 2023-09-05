//05-2. 念数字
#include<stdio.h>

int main(){

    int x, n, d;
    int cnt = 0;
    int mask = 1;

    scanf("%d", &x);

    if(x<0){

        printf("fu ");
        x = x * -1;
    }

    n = x;

    //計算幾位數
    while(n>9){
        n = n/10;
        cnt++;
    }

    //設定mask
    for(int i=0; i<cnt; i++){

        mask = mask*10;
    }

    do{
        d = x/mask;
        x = x%mask;
        mask = mask/10;

        //output
        switch(d){

        case 0:
            printf("ling");
            break;
        
        case 1:
            printf("yi");
            break;

        case 2:
            printf("er");
            break;
        
        case 3:
            printf("san");
            break;
        
        case 4:
            printf("si");
            break;

        case 5:
            printf("wu");
            break;

        case 6:
            printf("liu");
            break;

        case 7:
            printf("qi");
            break;

        case 8:
            printf("ba");
            break;
        
        case 9:
            printf("jiu");
            break;

        default:
            break;
        }
       
        if( mask > 0 )    printf(" ");

    }while(mask>0);

    return 0;
}