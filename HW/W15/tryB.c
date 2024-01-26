// 问题 B: 22-结构体-2-最多奖学金
/*
    题目描述
    某校的惯例是在每学期的期末考试之后发放奖学金。发放的奖学金共有五种，获取的条件各自不同：
    1) 院士奖学金，每人8000元，期末平均成绩高于80分（>80），并且在本学期内发表1篇或1篇以上论文的学生均可获得；
    2) 五四奖学金，每人4000元，期末平均成绩高于85分（>85），并且班级评议成绩高于80分（>80）的学生均可获得；
    3) 成绩优秀奖，每人2000元，期末平均成绩高于90分（>90）的学生均可获得；
    4) 西部奖学金，每人1000元，期末平均成绩高于85分（>85）的西部省份学生均可获得；
    5) 班级贡献奖，每人850元，班级评议成绩高于80分（>80）的学生干部均可获得；
    只要符合条件就可以得奖，每项奖学金的获奖人数没有限制，每名学生也可以同时获得多项奖学金。
    例如姚林的期末平均成绩是87分，班级评议成绩82分，同时他还是一位学生干部，那么他可以同时获得五四奖学金和班级贡献奖，奖金总数是4850元。
    现在有n个学生的相关数据，请计算哪些同学获得的奖金总数最高（假设总有同学能满足获得奖学金的条件），学校需要发放的总奖金是多少？ 
*/
/*
    输入
    单样例。每个测试文件包含一组测试数据：
    第一行是一个整数n（1≤n≤100），表示学生的总数
    接下来的n行每行是一位学生的数据，从左向右依次是姓名，期末平均成绩，班级评议成绩，是否是学生干部，是否是西部省份学生，以及发表的论文数。
    姓名是由大小写英文字母组成的长度不超过20的字符串（不含空格）；
    期末平均成绩和班级评议成绩都是0到100之间的整数（包括0和100）；
    是否是学生干部和是否是西部省份学生分别用一个字符表示，Y表示是，N表示不是；
    发表的论文数是0到10的整数（包括0和10）。
    输出
    输出包括三行
    第一行是获得最多奖金的学生的姓名
    第二行是这名学生获得的奖金总数。
    如果有两位或两位以上的学生获得的奖金最多，按照输入顺序输出第一个学生的姓名。
    第三行是这n个学生获得的奖学金的总数。
*/
/*
    样例输入
    4
    YaoLin 87 82 Y N 0
    ChenRuiyi 88 78 N Y 1
    LiXin 92 88 N N 0
    ZhangQin 83 87 Y N 1
    样例输出
    ChenRuiyi
    9000
    28700
*/

#include<stdio.h>
#include<string.h>

int p1=8000, p2=4000, p3=2000, p4=1000, p5=850;

struct Stu{

    char name[25];
    int ave;
    int classGrade;
    char leader;
    char west;
    int report;
    int sum;
} stu[150];

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        memset(stu, 0, sizeof(stu));

        // 總獎學金金額
        int total = 0;

        // 輸入
        for(int i=0; i<n; i++){

            scanf("%s %d %d %c %c %d", stu[i].name, &stu[i].ave, &stu[i].classGrade, &stu[i].leader, &stu[i].west, &stu[i].report);
        }

        // 判斷拿到哪些獎學金
        for(int i=0; i<n; i++){

            if(stu[i].ave>80 && stu[i].report>=1){

                stu[i].sum = stu[i].sum + p1;
                total = total + p1;
            }
            if(stu[i].ave>85 && stu[i].classGrade>80){

                stu[i].sum = stu[i].sum + p2;
                total = total + p2;
            }
            if(stu[i].ave>90){

                stu[i].sum = stu[i].sum + p3;
                total = total + p3;
            }
            if(stu[i].west=='Y' && stu[i].ave>85){

                stu[i].sum = stu[i].sum + p4;
                total = total + p4;
            }
            if(stu[i].classGrade>80 && stu[i].leader=='Y'){

                stu[i].sum = stu[i].sum + p5;
                total = total + p5;
            }
        }

        // 排序
        for(int i=0; i<n-1; i++){

            for(int j=i+1; j<n; j++){

                struct Stu tmp;

                if(stu[i].sum<stu[j].sum){

                    tmp = stu[i];
                    stu[i] = stu[j];
                    stu[j] = tmp;
                }            
            }
        }

        // 輸出
        printf("%s\n", stu[0].name);
        printf("%d\n", stu[0].sum);
        printf("%d\n", total);
    }

    return 0;
}