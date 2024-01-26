//问题 BU: 21级期末机试-谍影寻踪（10分）
/*
题目描述
2020年10月，国家安全机关组织实施“迅雷-2020”专项行动，破获数百起间谍窃密事件，有效维护了国家安全和利益。
在行动中，我方安全机关破获了一个情报组织，他们是单线联系的。
我方给情报组织中的每个人员一个唯一的代号。同时，情报人员为了隐秘，可能会有不同的姓名编号（设定最多两个姓名编号）。
我方顺藤摸瓜，分别截获并返回组织信息。请你帮忙汇总并恢复这条组织链条。

输入
多组样例。每组样例包括多行输入，
第一行包含一个正整数n（0<n≤1000），表示截获到的情报数。
接下来的n行输入形式为A->B，表示A单向联系B，B是A的下线。
A和B表示两名组织人员的信息，包括代号x和姓名编号y，用逗号“,”分开。
代号x和姓名编号y为整数，满足1≤x,y≤999999。除了第一行，A或B的代号信息在之前的行中出现过。

输出
对于每一组样例，按照顺序在一行中输出该组织的所有成员的信息，用“->”间隔。
每个输出占一行。如果有一个代号有两个姓名编号，则认为是一个成员，输出代号和对应的两个姓名编号，用“#”分开。
如有两个信息1,2345和1,6666，输出时对应一个成员信息1,2345#6666，两个姓名编号先输入的在前面。

样例输入
3
1,1234->5,2236
5,2236->3,7177 
7,3234->1,1234
4
1,258->10,111111
5,4353->1,36900 
7,22->5,4353
10,159->20,220102
2
1,111->2,222
1,101->2,202
样例输出 Copy
7,3234->1,1234->5,2236->3,7177 
7,22->5,4353->1,258#36900->10,111111#159->20,220102
1,111#101->2,222#202
*/

#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int Ax, Ay;
        int Bx, By;
        int count = 0;
        int id[1005] = {0};
        int name[1005] = {0};
        int new_name[1005] = {0};

        for(int i=0; i<n; i++){

            scanf("&d,%d->%d,%d", &Ax, &Ay, &Bx, &By);

            if(i==0){

                id[i] = Ax;
                name[i] = Ay;

                id[i+1] = Bx;
                name[i+1] = By;

                count = 2;
            }
            else{

                int posA = 0;
                int posB = 0;

                for(int j=0; j<count; j++){

                    if(id[j]==Ax){  //A已經存在

                        posA = j;
                        new_name[j] = Ay;
                    }

                    if(id[j]==Bx){  //B已經存在

                        posB = j;
                        new_name[j] = By;
                    }
                }

                for(int j=0; j<count; j++){
                    
                    if(posA!=0 && posB==0){ //A存在、B還不存在

                        for(int k=count-1; k>posA; k--){  //A後面先全部往後移

                            id[k+1] = id[k];
                            name[k+1] = name[k];
                            new_name[k+1] = new_name[k];
                        }

                        id[posA+1] = Bx;
                        name[posA+1] = By;
                        new_name[posA+1] = 0;
                        count++;
                    }

                    if(posA==0 && posB!=0){ //A還不存在、B存在

                        for(int k=count-1; k>=posB; k--){  //B後面先全部往後移

                            id[k+1] = id[k];
                            name[k+1] = name[k];
                            new_name[k+1] = new_name[k];
                        }

                        id[posB] = Ax;
                        name[posB] = Ay;
                        new_name[posB] = 0;
                        count++;
                    }
                }
            }


            for(int j=0; j<count; j++){
            
                if(j==0)
                    printf("%d,%d#%d", id[0], name[0], new_name[0]);
                else
                    printf("%d,%d", id[0], name[0]);

                if(new_name[j]!=0)
                    printf("->%d,%d#%d", id[j], name[j], new_name[j]);
                else    
                    printf("->%d,%d", id[j], name[j]);
            }

            printf("\n");
        }
    }

    return 0;
}