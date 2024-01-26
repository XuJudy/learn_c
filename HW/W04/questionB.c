//问题 B: 20级期中机试-小帅数数0
/*
    策略:
    收集有2.5為因數的數量
    因為一個2和5相乘即可得到一個0
    故最後一句2和5的數量得有幾個0
*/
#include<stdio.h>
#include<math.h>
#include<limits.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){
        
        //初始化
        int sum_2 = 0;
        int sum_5 = 0;

        for(int i=2; i<=n; i++){    //開始排查

            int tmp_i = i;  //保存i值

            while(tmp_i%2==0){  //若除2於0則因數至少有一個2

                tmp_i = tmp_i/2;
                sum_2++;
            }
            while(tmp_i%5==0){  //若除5於0則因數至少有一個5

                tmp_i = tmp_i/5;
                sum_5++;
            }
        }

        printf("%d\n", sum_2>=sum_5?sum_5:sum_2);   //若2的數量大於等於5，則輸出5的數量
    }

    return 0;
}