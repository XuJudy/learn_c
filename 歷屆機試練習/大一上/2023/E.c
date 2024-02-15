#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Fruit{

    char name[90];
    char pos[90];   // 產地
    int num;
} fruit[200];

int main(){

    char day[20];
    int cnt;

    while(scanf("%s%d", day, &cnt)!=EOF){

        for(int i=0; i<strlen(day); i++){

            if(day[i]=='/')
                day[i] = '.';
        }

        // 輸入
        for(int i=0; i<cnt; i++){

            scanf("%s%s%d", fruit[i].name, fruit[i].pos, &fruit[i].num);
        }

        // 合併
        int cut = 0;
        for(int i=0; i<cnt; i++){

            for(int j=i+1; j<cnt; j++){

                if((fruit[i].pos==fruit[j].pos) && (fruit[i].pos==fruit[j].pos)){

                    fruit[i].num = fruit[i].num + fruit[j].num;
                    fruit[j].num = 0;
                    cut++;
                }
            }
        }

        // 刪除
        for(int i=0; i<cnt; i++){

            if(fruit[i].num==0){

                struct Fruit tmp;
                tmp = fruit[is];
                  
            }
        }

        cnt = cnt - cut;

        // 排列
        for(int i=0; i<cnt; i++){

            struct Fruit tmp;

            for(int j=i+1; j<cnt; j++){
                
                // 先排產地
                if(fruit[i].pos<fruit[j].pos){

                    tmp = fruit[i];
                    fruit[i] = fruit[j];
                    fruit[j] = tmp;
                }

                // 產地相同則比水果名
                else if(fruit[i].pos==fruit[j].pos){

                    if(strcmp(fruit[i].name, fruit[j].name)<0){

                        tmp = fruit[i];
                        fruit[i] = fruit[j];
                        fruit[j] = tmp;
                    }
                    else if(strcmp(fruit[i].name, fruit[j].name)==0){

                        fruit[i].num = fruit[i].num + fruit[j].num;
                        tmp = fruit[j];
                        fruit[j] = fruit[cnt];
                        fruit[cnt] = tmp;

                        cnt--;
                    }
                }
            }
        }

        // 輸出
        printf("%s\n", day);

        for(int i=0; i<cnt; i++){

            printf("|----%s %s (%d)\n", fruit[i].name, fruit[i].pos, fruit[i]. num);
        }
    }

    return 0;
}