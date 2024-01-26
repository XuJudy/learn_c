// 问题 G: 结构体基本排序
/*
    题目描述
    统计学生的分数并进行排名。排名的规则是：
    （1）三科成绩（C语言，数学，电路）总分高的排在前面；
    （2）如果三科成绩相同，那么姓名的第一个字符小的排在前面，姓名不区分大小写
    （3）如果成绩相同，姓名的第一个字符也相同，那C语言分数高的排在前面

    输入
    多个样例
    第一行输入整数N，表示接下来学生的数量
    从第二行起，输入N个学生的信息，每个学生的信息占一行，输入的格式为“名字 C语言成绩 数学成绩 电路成绩”
    输出
    按照“”排名 姓名 总分 C语言成绩 数学成绩 电路成绩"的形式对所有学生的成绩进行输出，每个学生信息占一行
    排名占3个字符，姓名占20个字符，总分占3个字符，C语言成绩占3个字符， 数学成绩占3个字符， 电路成绩占3个字符
    信息之间以空格分隔
    
    样例输入
    5
    Vincent	77	77	71
    Lisa	68	68	94
    Loralie	89	70	96
    Hamlin	96	80	67
    Warrior	67	97	95
    样例输出
    1              Warrior 259  67  97  95
    2              Loralie 255  89  70  96
    3               Hamlin 243  96  80  67
    4                 Lisa 230  68  68  94
    5              Vincent 225  77  77  71
*/

#include<stdio.h>
#include<string.h>

struct stu{

  char name[24];
  int C;
  int math;
  int elec;
  int sum;
} stu[100007];

int main(){

    int n;
    
    while(scanf("%d", &n)!=EOF){

        memset(stu, 0, sizeof(stu));

        for(int i=1; i<=n; i++){

        scanf("%s%d%d%d", stu[i].name, &stu[i].C, &stu[i].math, &stu[i].elec);

        stu[i].sum = stu[i].C + stu[i].math + stu[i].elec;
        }

        struct stu temp;
        
        for(int i=1; i<n; i++){

            for(int j=i+1; j<=n; j++){

                if( (stu[i].sum < stu[j].sum) ||
                    (stu[i].sum==stu[j].sum && stu[i].name[0]>stu[j].name[0]) ||
                    (stu[i].sum==stu[j].sum && stu[i].name[0]==stu[j].name[0] && stu[i].C<stu[j].C) ){
                            
                    temp = stu[i];
                    stu[i] = stu[j];
                    stu[j] = temp;
                }
            }
        }

        for(int i=1; i<=n; i++){

            printf("%3d %20s %3d %3d %3d %3d\n", i, stu[i].name, stu[i].sum, stu[i].C, stu[i].math, stu[i].elec);
        }
    }
    
    return 0;
}