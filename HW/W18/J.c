// 问题 J: 数一数
/*
    题目描述
    小南最近在食堂开了一家水果店，买了许多的水果，她想知道，在她买的水果当中哪一种水果最多，并且是否每一种水果都可以分成两个偶数来满足她的怪癖
    输入
    输入一个整数n，代表水果的数量，接下来n行代表水果的名称
    输出
    输出两行，第一行为最多水果的名称，第二行为是否能将每种水果都分成两个偶数，满足条件输出yes，不满足输出no
    样例输入 Copy
    10
    apple
    apple
    apple
    apple
    pear
    pear
    pear
    apple
    apple
    pear
    样例输出 Copy
    apple
    yes
*/

#include<stdio.h>
#include<string.h>

int isEven(int num){

    if(num%2==0)
        return 1;
    else
        return 0;    
}

struct Fruit{

    char name[20];
    int num;
} fruit[150];

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int FruitType = 0;  // 水果總類數量

        for(int i=0; i<n; i++){

            char s[30] = {0};
            int TypeFlag = 1;   // 該總類是否已存储

            scanf("%s", s);

            for(int j=0; j<FruitType; j++){

                if(strcmp(fruit[j].name, s)==0){    // 某一總類與s同

                    fruit[j].num++; // 數量加一
                    TypeFlag = 0;   // 標為已存
                    break;
                }
            }

            if(TypeFlag==1){   // 未存

                strcpy(fruit[FruitType].name, s);   // 將s存了
                FruitType++;    // 總類加一
            }
        }

        for(int i=0; i<FruitType; i++){

            fruit[i].num++; // 真實數量
        }

        int id = 0;
        int evenFlag = 1;
        int max = fruit[0].num;

        for(int i=1; i<FruitType; i++){

            if(fruit[i].num>max){

                id = i;
                max = fruit[i].num;
            }

            if(isEven(fruit[i].num)==1 && fruit[i].num!=2){

                continue;
            }
            else{

                evenFlag = 0;
            }
        }

        printf("%s\n", fruit[id].name);
        printf("%s\n", evenFlag==0? "no":"yes");
    }

    return 0;
}