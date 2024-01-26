//问题 BE: 20级期末机试2-光荣榜

# include <stdio.h> 
# include <stdlib.h>
# include <limits.h>
# include <time.h>
# include <math.h>
# include <string.h>
  
struct student
{
    //名字s（1≤s≤10）
    char name[11];
    //语文、数学、英语
    int chi;
    int math;
    int eng;
    //total
    int sum;
}; 

void sortbyNameDescending(struct student data[],int len)
{
    struct student tmp;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(strcmp(data[j].name,data[j+1].name)>0)
            {
                tmp=data[j];
                data[j]=data[j+1];
                data[j+1]=tmp; 
            }
        }
    }
}

void sortbyMathAscending(struct student data[],int len)
{
    struct student tmp;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(data[j].math<data[j+1].math)
            {
                tmp=data[j];
                data[j]=data[j+1];
                data[j+1]=tmp; 
            }
        }
    }
}

void sortbyChiAscending(struct student data[],int len)
{
    struct student tmp;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(data[j].chi<data[j+1].chi)
            {
                tmp=data[j];
                data[j]=data[j+1];
                data[j+1]=tmp; 
            }
        }
    }
}
 
void sortbyEngAscending(struct student data[],int len)
{
    struct student tmp;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(data[j].eng<data[j+1].eng)
            {
                tmp=data[j];
                data[j]=data[j+1];
                data[j+1]=tmp; 
            }
        }
    }
} 

void sortbySumAscending(struct student data[],int len)
{
    struct student tmp;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(data[j].sum<data[j+1].sum)
            {
                tmp=data[j];
                data[j]=data[j+1];
                data[j+1]=tmp; 
            }
        }
    }
} 

int main()
{
    int n;
    //正整数n（3≤n≤100）
    struct student data[100];
    while (scanf("%d",&n)!=EOF)     
    { 
        for(int i=0;i<n;i++)
        {
            scanf("%s%d%d%d",data[i].name,&data[i].chi,&data[i].math,&data[i].eng); 
            data[i].sum = data[i].chi+data[i].math+data[i].eng; 
        } 
        //按某项排序，排序相同的情况下按名字字典排序
        //因此选用稳定排序-冒泡排序，并且要先按名字排序，再按某项排序
        
        
        //输出每门考试的前三名的名字，和相应的分数
        //总分
        sortbyNameDescending(data,n);
        sortbySumAscending(data,n);
        for(int i=0;i<3;i++)
            printf("%s %d\n",data[i].name,data[i].sum);
        printf("\n");

        //输出每门考试的前三名的名字，和相应的分数
        //语文 
        sortbyNameDescending(data,n);
        sortbyChiAscending(data,n);
        for(int i=0;i<3;i++)
            printf("%s %d\n",data[i].name,data[i].chi);
        printf("\n");

        //输出每门考试的前三名的名字，和相应的分数
        //数学
        sortbyNameDescending(data,n);
        sortbyMathAscending(data,n);
        for(int i=0;i<3;i++)
            printf("%s %d\n",data[i].name,data[i].math);
        printf("\n");

        //输出每门考试的前三名的名字，和相应的分数
        //英语 
        sortbyNameDescending(data,n);
        sortbyEngAscending(data,n);
        for(int i=0;i<3;i++)
            printf("%s %d\n",data[i].name,data[i].eng);
        printf("\n");
 
    } 
    return 0;
}