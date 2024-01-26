//问题 AL: 20级期末机试1-玩骰子（10分）
/*
    题目描述
    六面的骰子 ，骰子的六个面分别为1,2,3,4,5,6点。 
    大话骰游戏的规则如下：
    有6颗骰子
    你可以说自己有多少个某种点数的骰子，比如说“3个6”，“5个1”。
    计数的时候，1点可以做任意的点数的骰子。比如说你有2个1点，4个6点，如果你说你有“6个6”说的是真话。
    现在知道6颗骰子的点数和说的话，请判断话的真伪（该点数的骰子数大于等于你说的数就是真话，否则为假话）。

    输入
    多样例输入，样例个数由第一行输入的一个整数T(1≤T≤100)确定。 
    接下来是T个样例，每个样例的第一行是两个整数，第一个是六位整数，每个位上是数码1∼6，表示你的6颗骰子的点数，第二个整数是你说话的数量m(1≤m≤10)。 
    以后的m行，每行两个整数n(1≤n≤6),k(1≤k≤6),表示你说的话是“你有n个k点骰子”。
    输出
    依次输出每个样例中对于话真假的判断，输出格式是"x:s",x表示话的序号，从1开始，s表示判断结果，如果是真话，输出true，否则输出false。 每个样例的结尾输出一个空行。

    样例输入 Copy
    2
    123456 6
    1 1
    2 1
    1 2
    2 3
    2 4
    3 5
    111111 6
    6 6
    6 5
    6 4
    6 3
    6 2
    6 1 
    样例输出 Copy
    1:true
    2:false
    3:true
    4:true
    5:true
    6:false

    1:true
    2:true
    3:true
    4:true
    5:true
    6:true
*/

#include<stdio.h>

int main(){

    int T;

    while(scanf("%d", &T)!=EOF){

        int speak;  //說話次數
        char number[6] = {0};   //擲出的骰子點數

        for(int i=0; i<T; i++){
            
            scanf("%s%d", number, &speak);

            int sum, sum_number;    //猜:sum個點數為sum_number的骰子
            int TorF[11] = {0};     //真話或假話: 1為真話、0為假話

            for(int j=0; j<speak; j++){

                scanf("%d%d", &sum, &sum_number);

                int count = 0;  //有幾個點數為sum_number的骰子

                for(int k=0; k<6; k++){

                    if((number[k]-'0')==1 || (number[k]-'0')==sum_number)
                        count++;
                }

                if(count>=sum)  TorF[j+1]=1;
            }

            //輸出
            for(int j=1; j<=speak; j++){

                if(TorF[j])
                    printf("%d:true\n", j);
                else
                    printf("%d:false\n", j);
            }

            printf("\n");
        }
    }

    return 0;
}