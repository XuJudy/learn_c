//问题 BP: 21级补考-考试测评
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>  
  
struct stuInfo
{
    int ID;
    int math;
    int english;
    int cprogram;
    int total;
};
  
//题目要求；他想知道，总分成绩最高的和最低的同学的信息
//按照总分进行排序
void Sort1(struct stuInfo user[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(user[j].total<user[j+1].total)
            {
                struct stuInfo tmp = user[j];
                user[j]=user[j+1];
                user[j+1]=tmp;
            }
        }
    }
}
  
  
//题目要求，如果有多个最高分和最低分，要求全部输出，按学号有小到大排列
//按照ID排序
void Sort2(struct stuInfo user[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(user[j].ID>user[j+1].ID)
            {
                struct stuInfo tmp = user[j];
                user[j]=user[j+1];
                user[j+1]=tmp;
            }
        }
    }
}
  
int main()
{     
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        //正整数n（1≤n≤1000）
        struct stuInfo user[1000];
        //每一行包含4个整数，分别代表该生的学号（4位整数）和
        //    数学、英语、C语言三门科目对应的分数g（0≤g≤100）
        for(int i=0;i<n;i++)
        {
            scanf(
                "%d%d%d%d",
                &user[i].ID,
                &user[i].math,
                &user[i].english,
                &user[i].cprogram);
            //计算总分
            user[i].total=user[i].math+user[i].english+user[i].cprogram;        
        }
          
        //先按照ID排序
        Sort2(user,n);
        //再按照总分排序
        Sort1(user,n);
          
        printf("BEST\n");
        //每个学生的信息各占一行，按照学号、总分、数学、英语和C语言的顺序输出
        printf(
            "%d %d %d %d %d\n",
            user[0].ID,
            user[0].total,
            user[0].math,
            user[0].english,
            user[0].cprogram
        );
          
        for(int i=1;i<n;i++)
        {
            if(user[i].total == user[0].total)
            {
                printf(
                    "%d %d %d %d %d\n",
                    user[i].ID,
                    user[i].total,
                    user[i].math,
                    user[i].english,
                    user[i].cprogram
                );
            }
        }
          
          
        printf("WORST\n");
        //每个学生的信息各占一行，按照学号、总分、数学、英语和C语言的顺序输出
        printf(
            "%d %d %d %d %d\n",
            user[n-1].ID,
            user[n-1].total,
            user[n-1].math,
            user[n-1].english,
            user[n-1].cprogram
        );
          
        for(int i=n-2;i>=0;i--)
        {
            if(user[i].total == user[n-1].total)
            {
                printf(
                    "%d %d %d %d %d\n",
                    user[i].ID,
                    user[i].total,
                    user[i].math,
                    user[i].english,
                    user[i].cprogram
                );
            }
        }
          
          
        //每个测试样例的输出之间空一行
        putchar('\n');
          
    } 
    return 0;
} 