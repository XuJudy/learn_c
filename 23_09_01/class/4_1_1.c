//有幾位數(while)
/*
    從最右邊一個個扣算有幾位數
    除以10取整，位數加一
    eg.
    1234/10 = 123.4   位數+1
    123/10 = 12.3    位數+1
    12/10 = 1.2    位數+1
    1/10 = 0.1    位數+1
    0/10 = 0    沒位數了
*/
#include<stdio.h>

int main(){

    for(int i=0; i<5; i++){

        int x;
        int sum = 0;

        scanf("%d", &x);

        x = x/10;
        sum++;  // 若輸入是0，則無法進入while循環，輸出會顯示0

        while(x>0){ //等於0則全部扣完

            x = x/10;
            sum++;
        }

        printf("%d\n", sum);
    }

    return 0;
}