// 问题 H: 世界杯球赛（10分）
/*
    题目描述
    本次世界杯小组赛每个小组n只球队，每个小组n(n-1)/2场比赛。记分形式为“球队名1:球队名2 进球数1:进球数2”。
    世界杯小组赛结束后，老师给了小南一个任务，要他根据比赛结果对小组中的n支球队进行排名。排名规则为：
    （1）首先按照累积得分排序，胜一场得3分，平一场得1分，负一场得0分。累积分数高的球队排名在前。
    （2）如果累积分数相同者，按照净胜球数排序，净胜球多的球队排名在前。
    （3）如果累积分数相同，净胜球数也相同，则按照两只球队名字的字母顺序排序，从第一个字母依次比较直到决出排名为止，如Brazil排名在Japan之前。
    
    输入
    多个样例。 
    第一行为正整数n (2≤n≤ 10)，表示小组球队数。
    接下来的n(n-1)/2行表示小组每一场比赛的成绩，形式为si:sj x:y。
    s1, s2, ...,sn表示球队名，长度不超过20；x和y表示进球数，满足0≤x,y≤ 20，|x-y|表示胜方的净胜球数。
    输出
    每个样例按照排名顺序输出小组各球队的名称，球队名称之间用一个空格隔开。每个样例输出一行。
    
    样例输入
    4
    AAA:BBB 3:1
    AAA:CCC 2:1
    BBB:CCC 5:0
    AAA:DDD 2:0
    DDD:BBB 1:1
    DDD:CCC 1:3
    3
    Aa:Bbb 2:1
    Bbb:Ee 3:1
    Ee:Aa 1:1
    样例输出
    AAA BBB CCC DDD
    Aa Bbb Ee
*/

#include <stdio.h>
#include <string.h>
 
struct team{

    char name[25];
    int score,ball;
} arr[17];

int ind=0;
 
int findByName(const char *name){

    for(int i=0; i<ind; i++)
        if(strcmp(arr[i].name,name)==0)
            return i;

    strcpy(arr[ind].name, name);

    arr[ind].score = 0, arr[ind].ball = 0;
    
    return ind++;
}
 
int main(){

    int n;
    while(scanf("%d", &n)!=EOF){

        ind = 0;
        
        for(int i=0; i<n*(n-1)/2; i++){

            int a, b;
            char str[70];

            scanf("%s%d:%d", str, &a, &b);

            //手动解析一波两队伍名
            char nameA[25] = {0}, nameB[25] = {0};
            int lena = 0,lenb = 0,flag = 0;
            
            for(int i=0; i<strlen(str); i++){

                if(str[i]==':'){

                    flag = 1;
                    continue;
                }

                if(flag==0)
                    nameA[lena++] = str[i];
                else
                    nameB[lenb++] = str[i];
            }

            int aid = findByName(nameA);
            int bid = findByName(nameB);
            
            if(a>b){

                arr[aid].ball = arr[aid].ball + a - b;
                arr[aid].score = arr[aid].score + 3;
            }
            else if(a==b){

                arr[aid].score++;
                arr[bid].score++;
            }
            else{   //a<b

                arr[bid].ball = arr[bid].ball + b - a;
                arr[bid].score = arr[bid].score + 3;
            }
        }

        for(int i=0; i<n-1; i++){

            for(int j=i+1; j<n; j++){

                if(arr[i].score<arr[j].score){  //先排score

                    arr[16] = arr[i];
                    arr[i] = arr[j];
                    arr[j] = arr[16];
                }
                else if(arr[i].score==arr[j].score){

                    if(arr[i].ball<arr[j].ball){    //再排净进球

                        arr[16] = arr[i];
                        arr[i] = arr[j];
                        arr[j] = arr[16];
                    }
                    else if(arr[i].ball==arr[j].ball){

                        if(strcmp(arr[i].name,arr[j].name)>0){  //最后比姓名

                            arr[16] = arr[i];
                            arr[i] = arr[j];
                            arr[j] = arr[16];
                        }
                    }
                }
            }
        }

        for(int i=0; i<n; i++)
            printf("%s ", arr[i].name);
        putchar('\n');
    }
    
    return 0;
}