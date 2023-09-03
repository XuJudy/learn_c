//湊金幣(goto)
/*
    從goto out;處跳至out:
    建議只在多層迴圈時使用goto
*/

#include<stdio.h>

int main(){

    int x, money;
    int one, two, five;
    int exit = 0;

    scanf("%d", &x);
    money = x*10;

    for(int one=1; one<money; one++){
        for(int two=1; two<money/2; two++){
            for(int five=1; five<money/5; five++){
                if( one+2*two+5*five == money ){

                    printf("可以用%d個1角%d個2角和%d個5角湊出%d元。\n", one, two, five, x);

                    goto out;   //跳出迴圈
                }
            }

            if(exit == 1)   break;
        }

            if(exit == 1)   break;
    }
    out:    //跳脫至這層

    return 0;
}