// P1320 压缩技术（续集版）

#include<stdio.h>
#include<math.h>

int main(){

    /* 若用int聲明，則程序會將0001000視為1000。
       若用char，程序會視為0 0 0 1 0 0 0 。     */
    char input;         // 輸入
    int flag = 0;       // 要對照的數: 1 or 0
    int type = 0;       // 統計連續數量的組
    int sum = 0;        // 總輸入數字的數量
    int num[200] = {0}; // 0或1的連續數量

    while(scanf("%c", &input)!=EOF){

        if(input=='\n') continue;   // 若輸入換行則跳過
        /* 若此處用break則直接跳出while循環，故應使用continue。 */

        else{

            sum++;
            input = input - '0';    // 因為是以char輸入故要轉為數字
            
            if(input==flag){        // 與目前統計之連續數字同

                num[type]++;        // 該項加一
            }
            else{                   // 換數字了

                flag = input;       // 更換對照的數字
                num[++type]++;      // type先加再統計
            }
        }
    }

    printf("%d ", (int)sqrt(sum));  // 先輸出N*N的N

    for(int i=0; i<=type; i++){     // 輸出連續數字數量

        printf("%d ", num[i]);
    }

    return 0;
}